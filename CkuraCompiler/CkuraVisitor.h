﻿#pragma once

#include <map>
#include <string>

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

unique_ptr<LLVMContext> llvm_context;
unique_ptr<Module> llvm_module;
unique_ptr<IRBuilder<>> llvm_builder;

class CkuraVisitor : public CkuraParserBaseVisitor {
 public:
  any visitString(CkuraParser::StringContext *ctx) override {
    // take the quotes
    info("visit string {}", ctx->String()->getText());
    return ctx->String()->getText();
  }

  any visitNumber(CkuraParser::NumberContext *ctx) override {
    info("visit number {}", (string)ctx->Number()->getText());
    return ConstantFP::get(*llvm_context,
                           APFloat(stod(ctx->Number()->getText())));
  }

  virtual std::any visitId(CkuraParser::IdContext *ctx) override {
    info("visit id {}", ctx->Id()->getText());
    return visitChildren(ctx);
  }

  virtual std::any visitParenLevel(
      CkuraParser::ParenLevelContext *ctx) override {
    return visit(ctx->expression());
  }

  virtual std::any visitMultiLevel(
      CkuraParser::MultiLevelContext *ctx) override {
    string op = ctx->op->getText();
    any left = visit(ctx->expression()[0]);
    any right = visit(ctx->expression()[1]);
    Value *l;
    if (left.type() == typeid(Value *)) {
      l = any_cast<Value *>(left);
    } else if (left.type() == typeid(ConstantFP *)) {
      l = any_cast<ConstantFP *>(left);
    } else {
      // explose
    }
    Value *r;
    if (right.type() == typeid(Value *)) {
      r = any_cast<Value *>(right);
    } else if (right.type() == typeid(ConstantFP *)) {
      r = any_cast<ConstantFP *>(right);
    } else {
      // explose
    }
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
    any left = visit(ctx->expression()[0]);
    any right = visit(ctx->expression()[1]);
    Value *l;
    if (left.type() == typeid(Value *)) {
      l = any_cast<Value *>(left);
    } else if (left.type() == typeid(ConstantFP *)) {
      l = any_cast<ConstantFP *>(left);
    } else {
      // explose
    }
    Value *r;
    if (right.type() == typeid(Value *)) {
      r = any_cast<Value *>(right);
    } else if (right.type() == typeid(ConstantFP *)) {
      r = any_cast<ConstantFP *>(right);
    } else {
      // explose
    }
    if (op == "+") {
      return llvm_builder->CreateFAdd(l, r, "addtmp");
    } else if (op == "-") {
      return llvm_builder->CreateFSub(l, r, "subtmp");
    }
    return visitChildren(ctx);
  }

  virtual std::any visitMinusLevel(
      CkuraParser::MinusLevelContext *ctx) override {
    any e = visit(ctx->literalValue());
    Value *expr;
    if (e.type() == typeid(Value *)) {
      expr = any_cast<Value *>(e);
    } else if (e.type() == typeid(ConstantFP *)) {
      expr = any_cast<ConstantFP *>(e);
    } else {
      // explose
    }
    Value *zero = ConstantFP::get(*llvm_context, APFloat((double)0));
    return llvm_builder->CreateFSub(zero, expr, "subtmp");
  }

  virtual std::any visitDefineVariable(
      CkuraParser::DefineVariableContext *ctx) override {
    return visitChildren(ctx);
  }
};
