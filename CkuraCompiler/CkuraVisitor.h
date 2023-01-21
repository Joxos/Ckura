#pragma once

#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>

#include "CkuraInternalLib.h"
#include "CkuraLexer.h"
#include "CkuraParserBaseVisitor.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Verifier.h"
#include "spdlog/spdlog.h"

using namespace std;
using namespace llvm;
using namespace spdlog;
using namespace cil;

// LLVM related
unique_ptr<LLVMContext> llvm_context;
unique_ptr<Module> llvm_module;
unique_ptr<IRBuilder<>> llvm_builder;

// variable memroy
unordered_map<string, Value *> memory;

// function generation
string function_name;
// for now we only support one return value
// since antlr has aggregateResult() this fucking shit
// we store the return value here
Value *ret_val;
vector<string> temp_args;
unordered_map<string, Value *> function_args;

class CkuraVisitor : public CkuraParserBaseVisitor {
 public:
  Value *accessVariable(string var_name) {
    Value *v = memory[var_name];
    if (!v) {
      // ops!
      error_and_exit(Exceptions::Errors::VariableNotFound, {var_name});
    } else {
      return v;
    }
  }

  any visitString(CkuraParser::StringContext *ctx) override {
    // take the quotes
    return ctx->String()->getText();
  }

  any visitNumber(CkuraParser::NumberContext *ctx) override {
    return (Value *)ConstantFP::get(*llvm_context,
                                    APFloat(stod(ctx->Number()->getText())));
  }

  virtual std::any visitId(CkuraParser::IdContext *ctx) override {
    // visit function_args first and then visit the global memory
    string Id = ctx->Id()->getText();
    auto imem = memory.find(Id);
    auto ifunc = function_args.find(Id);
    if (imem != memory.end()) {
      return imem->second;
    } else if (ifunc != function_args.end()) {
      return ifunc->second;
    } else {
      error_and_exit(Exceptions::Errors::UndefinedId, {ctx->Id()->getText()});
    }
  }

  // expression levels
  virtual std::any visitParenLevel(
      CkuraParser::ParenLevelContext *ctx) override {
    return visit(ctx->expression());
  }
  virtual std::any visitMultiLevel(
      CkuraParser::MultiLevelContext *ctx) override {
    string op = ctx->op->getText();
    Value *l = any_cast<Value *>(visit(ctx->expression()[0]));
    Value *r = any_cast<Value *>(visit(ctx->expression()[1]));
    if (op == "*") {
      return llvm_builder->CreateFMul(l, r, "multmp");
    } else if (op == "/") {
      return llvm_builder->CreateFDiv(l, r, "divtmp");
    } else if (op == "%") {
      // TODO: where is mod?
      return llvm_builder->CreateFSub(l, r);
    }
    return visitChildren(ctx);
  }
  virtual std::any visitAddLevel(CkuraParser::AddLevelContext *ctx) override {
    string op = ctx->op->getText();
    Value *l = any_cast<Value *>(visit(ctx->expression()[0]));
    Value *r = any_cast<Value *>(visit(ctx->expression()[1]));
    if (op == "+") {
      return llvm_builder->CreateFAdd(l, r, "addtmp");
    } else if (op == "-") {
      return llvm_builder->CreateFSub(l, r, "subtmp");
    }
    return visitChildren(ctx);
  }
  virtual std::any visitMinusLevel(
      CkuraParser::MinusLevelContext *ctx) override {
    Value *expr = any_cast<Value *>(visit(ctx->literalValue()));
    Value *zero = ConstantFP::get(*llvm_context, APFloat((double)0));
    return llvm_builder->CreateFSub(zero, expr, "subtmp");
  }
  virtual std::any visitFuncCallLevel(
      CkuraParser::FuncCallLevelContext *ctx) override {
    Function *Callee =
        llvm_module->getFunction(ctx->functionCall()->Id()->getText());
    if (!Callee) {
      error_and_exit(Exceptions::Errors::FunctionNotFound,
                     {ctx->functionCall()->Id()->getText()});
    }

    debug("Callee->arg_size() == {}", Callee->arg_size());
    debug("ctx->functionCall()->expression().size() + 1 == {}",
          ctx->functionCall()->expression().size() + 1);
    auto original_args = ctx->functionCall()->expression();
    original_args.push_back(ctx->functionCall()->expression(1));
    if (original_args.size() != Callee->arg_size()) {
      error_and_exit(
          Exceptions::Errors::InvalidFunctionCall,
          {ctx->functionCall()->Id()->getText(), to_string(Callee->arg_size()),
           to_string(original_args.size())});
    }

    vector<Value *> args;
    for (auto i : original_args) {
      any_cast<Value *>(visit(i))->print(errs());
      args.push_back(any_cast<Value *>(visit(i)));
    }

    info("Finish call.");
    return llvm_builder.get()->CreateCall(Callee, args, "calltmp");
  }

  // define and declare variables
  virtual std::any visitDefineVariable(
      CkuraParser::DefineVariableContext *ctx) override {
    auto type = ctx->declareVariable()->expression();
    debug("Define variable {}.", ctx->declareVariable()->Id()->getText());
    memory.insert(make_pair<string, Value *>(
        ctx->declareVariable()->Id()->getText(),
        any_cast<Value *>(visit(ctx->expression()))));
    debug("Variable {} defined.", ctx->declareVariable()->Id()->getText());
    return nullptr;
  }
  virtual std::any visitDeclareVariable(
      CkuraParser::DeclareVariableContext *ctx) override {
    auto type = ctx->expression();
    debug("Declare variable {}.", ctx->Id()->getText());
    memory.insert(make_pair<string, Value *>(
        ctx->Id()->getText(),
        (Value *)ConstantFP::get(*llvm_context, APFloat((double)0))));
    debug("Variable {} declared.", ctx->Id()->getText());
    return nullptr;
  }

  // function related
  virtual std::any visitFunctionCall(
      CkuraParser::FunctionCallContext *ctx) override {
    Function *Callee = llvm_module->getFunction(ctx->Id()->getText());
    if (!Callee) {
      error_and_exit(Exceptions::Errors::FunctionNotFound,
                     {ctx->Id()->getText()});
    }

    debug("Callee->arg_size() == {}", Callee->arg_size());
    debug("ctx->functionCall()->expression().size() + 1 == {}",
          ctx->expression().size() + 1);
    auto original_args = ctx->expression();
    original_args.push_back(ctx->expression(1));
    if (original_args.size() != Callee->arg_size()) {
      error_and_exit(Exceptions::Errors::InvalidFunctionCall,
                     {ctx->Id()->getText(), to_string(Callee->arg_size()),
                      to_string(original_args.size())});
    }

    vector<Value *> args;
    for (auto i : original_args) {
      any_cast<Value *>(visit(i))->print(errs());
      args.push_back(any_cast<Value *>(visit(i)));
    }

    info("Finish call.");
    return llvm_builder.get()->CreateCall(Callee, args, "calltmp");
  }
  virtual std::any visitFunctionHead(
      CkuraParser::FunctionHeadContext *ctx) override {
    // statisic args
    visitChildren(ctx);
    std::vector<Type *> args(temp_args.size(),
                             Type::getDoubleTy(*llvm_context));
    FunctionType *ft =
        FunctionType::get(Type::getDoubleTy(*llvm_context), args, false);

    Function *f = Function::Create(ft, Function::ExternalLinkage, function_name,
                                   llvm_module.get());

    // set names for all arguments.
    // ensure function_args is clear.
    function_args.clear();
    unsigned int i = 0;
    for (auto &arg : f->args()) {
      arg.setName(Twine(temp_args[i]));
    }

    return f;
  }
  virtual std::any visitFunctionDeclareVariable(
      CkuraParser::FunctionDeclareVariableContext *ctx) override {
    temp_args.push_back(ctx->Id()->getText());
    debug("Function decl var {}.", ctx->Id()->getText());
    return nullptr;
  }
  virtual std::any visitFunctionReturn(
      CkuraParser::FunctionReturnContext *ctx) override {
    Value *a = any_cast<Value *>(visit(ctx->expression()));
    ret_val = a;
    return nullptr;
  }
  virtual std::any visitDefineFunction(
      CkuraParser::DefineFunctionContext *ctx) override {
    // parse function head
    function_name = ctx->functionHead()->functionName->getText();
    debug("Parse function head of {}.", function_name);
    // check if already defined
    Function *f = llvm_module->getFunction(function_name);
    if (!f) {
      // we get original f from function head.
      f = any_cast<Function *>(visit(ctx->functionHead()));
    } else {
      // already defined. oops.
      error("Function {} already difined.", function_name);
      exit(-1);
    }
    if (!f) {
      // oops. something wrong occured
      exit(-1);
      return nullptr;
    }

    // record the function arguments in the function_args map
    function_args.clear();
    for (auto &arg : f->args()) {
      function_args[std::string(arg.getName())] = &arg;
    }

    // parse function body
    debug("Parse function body of {}.", function_name);
    BasicBlock *bb = BasicBlock::Create(*llvm_context, "entry", f);
    llvm_builder->SetInsertPoint(bb);

    // parse return statement
    debug("Parse return statement of {}.",
          ctx->functionHead()->functionName->getText());
    visit(ctx->functionBody());
    if (ret_val) {
      llvm_builder->CreateRet(ret_val);

      // validate the generated code, checking for consistency.
      verifyFunction(*f);
    }

    debug("Finished defining {}.", function_name);
    return f;
  }
};
