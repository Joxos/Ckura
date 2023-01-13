#pragma once

#include <map>
#include <string>

#include "CkuraParserBaseVisitor.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Verifier.h"

using namespace std;
using namespace llvm;

unique_ptr<LLVMContext> llvm_context;
unique_ptr<Module> llvm_module;
unique_ptr<IRBuilder<>> llvm_builder;

class CkuraVisitor : public CkuraParserBaseVisitor {
 public:
  any visitString(CkuraParser::StringContext* ctx) override {
    return visitChildren(ctx);
  }

  any visitInteger(CkuraParser::IntegerContext* ctx) override {
    return visitChildren(ctx);
  }

  any visitDecimal(CkuraParser::DecimalContext* ctx) override {
    return visitChildren(ctx);
  }

  any visitId(CkuraParser::IdContext* ctx) override {
    return visitChildren(ctx);
  }

  any visitMultiLevel(CkuraParser::MultiLevelContext* ctx) override {
    return visitChildren(ctx);
  }

  any visitParenLevel(CkuraParser::ParenLevelContext* ctx) override {
    return visitChildren(ctx);
  }

  any visitLiteralLevel(CkuraParser::LiteralLevelContext* ctx) override {
    return visitChildren(ctx);
  }

  any visitAddLevel(CkuraParser::AddLevelContext* ctx) override {
    return visitChildren(ctx);
  }

  any visitPowerLevel(CkuraParser::PowerLevelContext* ctx) override {
    return visitChildren(ctx);
  }

  any visitOrLevel(CkuraParser::OrLevelContext* ctx) override {
    return visitChildren(ctx);
  }

  any visitEqLevel(CkuraParser::EqLevelContext* ctx) override {
    return visitChildren(ctx);
  }

  any visitAndLevel(CkuraParser::AndLevelContext* ctx) override {
    return visitChildren(ctx);
  }

  any visitDeclareVariable(CkuraParser::DeclareVariableContext* ctx) override {
    return visitChildren(ctx);
  }

  any visitDefineVariable(CkuraParser::DefineVariableContext* ctx) override {
    return visitChildren(ctx);
  }
};
