﻿#pragma once

#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>

#include "CkuraInternalLib.h"
#include "CkuraLexer.h"
#include "CkuraParserBaseVisitor.h"
#include "llvm/ADT/APFloat.h"
//#include "llvm/ADT/STLExtras.h"
//#include "llvm/IR/BasicBlock.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/LegacyPassManager.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Type.h"
#include "llvm/IR/Verifier.h"
//#include "llvm/Support/TargetSelect.h"
//#include "llvm/Target/TargetMachine.h"
//#include "llvm/Transforms/InstCombine/InstCombine.h"
//#include "llvm/Transforms/Scalar.h"
//#include "llvm/Transforms/Scalar/GVN.h"
#include "spdlog/spdlog.h"

using namespace std;
using namespace llvm;
using namespace spdlog;
using namespace cil;

// extern global variables
// LLVM related
extern unique_ptr<LLVMContext> llvm_context;
extern unique_ptr<Module> llvm_module;
extern unique_ptr<IRBuilder<>> llvm_builder;
// extern unique_ptr<KaleidoscopeJIT> llvm_jit;

// variable memroy
extern unordered_map<string, Value *> memory;

// function generation
extern string fname;
// for now we only support one return value
// since antlr has aggregateResult() this fucking shit
// we store the return value here
extern Value *ret_val;
extern vector<string> original_args;
extern map<string, Value *> function_args;

// define the class
class CkuraVisitor : public CkuraParserBaseVisitor {
 public:
  any visitString(CkuraParser::StringContext *ctx) override {
    // take the quotes
    return ctx->String()->getText();
  }
  any visitNumber(CkuraParser::NumberContext *ctx) override {
    return (Value *)ConstantFP::get(*llvm_context,
                                    APFloat(stod(ctx->Number()->getText())));
  }
  any visitId(CkuraParser::IdContext *ctx) override {
    // visit function_args first and then visit the global memory
    string Id = ctx->Id()->getText();
    auto imem = memory.find(Id);
    int ioriginal = -1;
    // since LLVM fucking optimize arg name (or my problem setting its name)
    // we need find it and store its index
    // then get it from function_args
    for (int i = 0; i < original_args.size(); ++i) {
      if (original_args[i] == Id) {
        ioriginal = i;
        break;
      }
    }
    if (imem != memory.end()) {
      return imem->second;
    } else if (ioriginal != -1) {
      auto it = function_args.begin();
      for (int i = 0; i < ioriginal; ++i) {
        ++it;
      }
      return it->second;
    } else {
      error_and_exit(Exceptions::Errors::UndefinedId, {ctx->Id()->getText()});
    }
  }

  // expression levels
  any visitParenLevel(CkuraParser::ParenLevelContext *ctx) override {
    return visit(ctx->expression());
  }
  any visitMultiLevel(CkuraParser::MultiLevelContext *ctx) override {
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
  any visitAddLevel(CkuraParser::AddLevelContext *ctx) override {
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
  any visitMinusLevel(CkuraParser::MinusLevelContext *ctx) override {
    Value *expr = any_cast<Value *>(visit(ctx->literalValue()));
    Value *zero = ConstantFP::get(*llvm_context, APFloat((double)0));
    return llvm_builder->CreateFSub(zero, expr, "subtmp");
  }
  any visitFuncCallLevel(CkuraParser::FuncCallLevelContext *ctx) override {
    Function *callee =
        llvm_module->getFunction(ctx->functionCall()->Id()->getText());
    string fname = ctx->functionCall()->Id()->getText();
    if (!callee) {
      error_and_exit(Exceptions::Errors::FunctionNotFound, {fname});
    }

    debug("Function need {} args...", callee->arg_size());
    debug("was given {} args", ctx->functionCall()->expression().size());
    auto original_args = ctx->functionCall()->expression();
    if (original_args.size() != callee->arg_size()) {
      error_and_exit(Exceptions::Errors::InvalidFunctionCall,
                     {fname, to_string(callee->arg_size()),
                      to_string(original_args.size())});
    }

    vector<Value *> args;
    for (auto i : original_args) {
      // any_cast<Value *>(visit(i))->print(errs());
      args.push_back(any_cast<Value *>(visit(i)));
    }

    info("Finish call.");
    return (Value *)llvm_builder.get()->CreateCall(callee, args, "calltmp");
  }

  // define and declare variables
  any visitDefineVariable(CkuraParser::DefineVariableContext *ctx) override {
    auto type = ctx->declareVariable()->expression();
    debug("Define variable {}.", ctx->declareVariable()->Id()->getText());
    memory.insert(make_pair<string, Value *>(
        ctx->declareVariable()->Id()->getText(),
        any_cast<Value *>(visit(ctx->expression()))));
    debug("Variable {} defined.", ctx->declareVariable()->Id()->getText());
    return nullptr;
  }
  any visitDeclareVariable(CkuraParser::DeclareVariableContext *ctx) override {
    auto type = ctx->expression();
    debug("Declare variable {}.", ctx->Id()->getText());
    memory.insert(make_pair<string, Value *>(
        ctx->Id()->getText(),
        (Value *)ConstantFP::get(*llvm_context, APFloat((double)0))));
    debug("Variable {} declared.", ctx->Id()->getText());
    return nullptr;
  }

  // function related
  any visitFunctionCall(CkuraParser::FunctionCallContext *ctx) override {
    Function *callee = llvm_module->getFunction(ctx->Id()->getText());
    string fname = ctx->Id()->getText();
    if (!callee) {
      error_and_exit(Exceptions::Errors::FunctionNotFound, {fname});
    }

    debug("Function need {} args...", callee->arg_size());
    debug("was given {} args", ctx->expression().size());
    auto original_args = ctx->expression();
    if (original_args.size() != callee->arg_size()) {
      error_and_exit(Exceptions::Errors::InvalidFunctionCall,
                     {fname, to_string(callee->arg_size()),
                      to_string(original_args.size())});
    }

    vector<Value *> args;
    for (auto i : original_args) {
      // any_cast<Value *>(visit(i))->print(errs());
      args.push_back(any_cast<Value *>(visit(i)));
    }

    info("Finish call.");
    return (Value *)llvm_builder.get()->CreateCall(callee, args, "calltmp");
  }
  any visitFunctionHead(CkuraParser::FunctionHeadContext *ctx) override {
    // statisic args
    visitChildren(ctx);
    std::vector<Type *> args(original_args.size(),
                             Type::getDoubleTy(*llvm_context));
    FunctionType *ft =
        FunctionType::get(Type::getDoubleTy(*llvm_context), args, false);

    Function *f = Function::Create(ft, Function::ExternalLinkage, fname,
                                   llvm_module.get());

    // set names for all arguments.
    // ensure function_args is clear.
    function_args.clear();
    unsigned int i = 0;
    for (auto &arg : f->args()) {
      arg.setName(original_args[i]);
    }

    return f;
  }
  any visitFunctionDeclareVariable(
      CkuraParser::FunctionDeclareVariableContext *ctx) override {
    original_args.push_back(ctx->Id()->getText());
    debug("Function decl var {}.", ctx->Id()->getText());
    return nullptr;
  }
  any visitFunctionReturn(CkuraParser::FunctionReturnContext *ctx) override {
    Value *a = any_cast<Value *>(visit(ctx->expression()));
    ret_val = a;
    return nullptr;
  }
  any visitDefineFunction(CkuraParser::DefineFunctionContext *ctx) override {
    // parse function head
    fname = ctx->functionHead()->functionName->getText();
    debug("Parse function head of {}.", fname);
    // check if already defined
    Function *f = llvm_module->getFunction(fname);
    if (!f) {
      // we get original f from function head.
      f = any_cast<Function *>(visit(ctx->functionHead()));
    } else {
      // already defined. oops.
      error("Function {} already difined.", fname);
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
    debug("Parse function body of {}.", fname);
    BasicBlock *bb = BasicBlock::Create(*llvm_context, "entry", f);
    llvm_builder->SetInsertPoint(bb);
    visit(ctx->functionBody());

    // parse return statement
    debug("Parse return statement of {}.", fname);
    if (ret_val) {
      llvm_builder->CreateRet(ret_val);

      // validate the generated code, checking for consistency.
      verifyFunction(*f);
    }

    debug("Finished defining {}.", fname);
    return f;
  }
};

void InitializeModuleAndPassManager(void);
