
// Generated from .\CkuraParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "CkuraParserVisitor.h"


/**
 * This class provides an empty implementation of CkuraParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CkuraParserBaseVisitor : public CkuraParserVisitor {
public:

  virtual std::any visitString(CkuraParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber(CkuraParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitId(CkuraParser::IdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiLevel(CkuraParser::MultiLevelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncCallLevel(CkuraParser::FuncCallLevelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenLevel(CkuraParser::ParenLevelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteralLevel(CkuraParser::LiteralLevelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddLevel(CkuraParser::AddLevelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMinusLevel(CkuraParser::MinusLevelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPowerLevel(CkuraParser::PowerLevelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrLevel(CkuraParser::OrLevelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqLevel(CkuraParser::EqLevelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAndLevel(CkuraParser::AndLevelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclareVariable(CkuraParser::DeclareVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefineVariable(CkuraParser::DefineVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionBody(CkuraParser::FunctionBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDeclareVariable(CkuraParser::FunctionDeclareVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionArgument(CkuraParser::FunctionArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionHead(CkuraParser::FunctionHeadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionReturn(CkuraParser::FunctionReturnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefineFunction(CkuraParser::DefineFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionCall(CkuraParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(CkuraParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(CkuraParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnit(CkuraParser::UnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModule(CkuraParser::ModuleContext *ctx) override {
    return visitChildren(ctx);
  }


};

