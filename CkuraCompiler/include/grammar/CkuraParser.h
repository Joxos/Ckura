
// Generated from .\CkuraParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  CkuraParser : public antlr4::Parser {
public:
  enum {
    UNDERLINE = 1, COLON = 2, SEMI_COLON = 3, QUOTE = 4, COMMA = 5, OPEN_PAREN = 6, 
    CLOSE_PAREN = 7, OPEN_BRACE = 8, CLOSE_BRACE = 9, ARROW = 10, EQ = 11, 
    EQUAL = 12, NOT_EQ = 13, GREATER_THAN = 14, LESS_THAN = 15, MINUS = 16, 
    DOT = 17, POWER = 18, STAR = 19, DIV = 20, MOD = 21, ADD = 22, AND = 23, 
    OR = 24, NEXT_LINE = 25, Comment = 26, WS = 27, Id = 28, String = 29, 
    Number = 30
  };

  enum {
    RuleLiteralValue = 0, RuleExpression = 1, RuleDeclareVariable = 2, RuleDefineVariable = 3, 
    RuleStatement = 4, RuleUnit = 5, RuleLastUnit = 6, RuleModule = 7
  };

  explicit CkuraParser(antlr4::TokenStream *input);

  CkuraParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~CkuraParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class LiteralValueContext;
  class ExpressionContext;
  class DeclareVariableContext;
  class DefineVariableContext;
  class StatementContext;
  class UnitContext;
  class LastUnitContext;
  class ModuleContext; 

  class  LiteralValueContext : public antlr4::ParserRuleContext {
  public:
    LiteralValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    LiteralValueContext() = default;
    void copyFrom(LiteralValueContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NumberContext : public LiteralValueContext {
  public:
    NumberContext(LiteralValueContext *ctx);

    antlr4::tree::TerminalNode *Number();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StringContext : public LiteralValueContext {
  public:
    StringContext(LiteralValueContext *ctx);

    antlr4::tree::TerminalNode *String();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IdContext : public LiteralValueContext {
  public:
    IdContext(LiteralValueContext *ctx);

    antlr4::tree::TerminalNode *Id();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  LiteralValueContext* literalValue();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  MultiLevelContext : public ExpressionContext {
  public:
    MultiLevelContext(ExpressionContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenLevelContext : public ExpressionContext {
  public:
    ParenLevelContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *OPEN_PAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LiteralLevelContext : public ExpressionContext {
  public:
    LiteralLevelContext(ExpressionContext *ctx);

    LiteralValueContext *literalValue();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddLevelContext : public ExpressionContext {
  public:
    AddLevelContext(ExpressionContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *MINUS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MinusLevelContext : public ExpressionContext {
  public:
    MinusLevelContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *MINUS();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PowerLevelContext : public ExpressionContext {
  public:
    PowerLevelContext(ExpressionContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *POWER();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OrLevelContext : public ExpressionContext {
  public:
    OrLevelContext(ExpressionContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *OR();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EqLevelContext : public ExpressionContext {
  public:
    EqLevelContext(ExpressionContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *NOT_EQ();
    antlr4::tree::TerminalNode *GREATER_THAN();
    antlr4::tree::TerminalNode *LESS_THAN();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AndLevelContext : public ExpressionContext {
  public:
    AndLevelContext(ExpressionContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *AND();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  DeclareVariableContext : public antlr4::ParserRuleContext {
  public:
    DeclareVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Id();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclareVariableContext* declareVariable();

  class  DefineVariableContext : public antlr4::ParserRuleContext {
  public:
    DefineVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclareVariableContext *declareVariable();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefineVariableContext* defineVariable();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefineVariableContext *defineVariable();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  UnitContext : public antlr4::ParserRuleContext {
  public:
    UnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    antlr4::tree::TerminalNode *NEXT_LINE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnitContext* unit();

  class  LastUnitContext : public antlr4::ParserRuleContext {
  public:
    LastUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LastUnitContext* lastUnit();

  class  ModuleContext : public antlr4::ParserRuleContext {
  public:
    ModuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UnitContext *> unit();
    UnitContext* unit(size_t i);
    LastUnitContext *lastUnit();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleContext* module();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

