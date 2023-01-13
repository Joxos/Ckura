
// Generated from .\CkuraParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "CkuraParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CkuraParser.
 */
class  CkuraParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CkuraParser.
   */
    virtual std::any visitString(CkuraParser::StringContext *context) = 0;

    virtual std::any visitNumber(CkuraParser::NumberContext *context) = 0;

    virtual std::any visitId(CkuraParser::IdContext *context) = 0;

    virtual std::any visitMultiLevel(CkuraParser::MultiLevelContext *context) = 0;

    virtual std::any visitParenLevel(CkuraParser::ParenLevelContext *context) = 0;

    virtual std::any visitLiteralLevel(CkuraParser::LiteralLevelContext *context) = 0;

    virtual std::any visitAddLevel(CkuraParser::AddLevelContext *context) = 0;

    virtual std::any visitMinusLevel(CkuraParser::MinusLevelContext *context) = 0;

    virtual std::any visitPowerLevel(CkuraParser::PowerLevelContext *context) = 0;

    virtual std::any visitOrLevel(CkuraParser::OrLevelContext *context) = 0;

    virtual std::any visitEqLevel(CkuraParser::EqLevelContext *context) = 0;

    virtual std::any visitAndLevel(CkuraParser::AndLevelContext *context) = 0;

    virtual std::any visitDeclareVariable(CkuraParser::DeclareVariableContext *context) = 0;

    virtual std::any visitDefineVariable(CkuraParser::DefineVariableContext *context) = 0;

    virtual std::any visitStatement(CkuraParser::StatementContext *context) = 0;

    virtual std::any visitUnit(CkuraParser::UnitContext *context) = 0;

    virtual std::any visitLastUnit(CkuraParser::LastUnitContext *context) = 0;

    virtual std::any visitModule(CkuraParser::ModuleContext *context) = 0;


};

