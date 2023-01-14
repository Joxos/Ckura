
// Generated from .\CkuraParser.g4 by ANTLR 4.11.1


#include "CkuraParserVisitor.h"

#include "CkuraParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CkuraParserStaticData final {
  CkuraParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CkuraParserStaticData(const CkuraParserStaticData&) = delete;
  CkuraParserStaticData(CkuraParserStaticData&&) = delete;
  CkuraParserStaticData& operator=(const CkuraParserStaticData&) = delete;
  CkuraParserStaticData& operator=(CkuraParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag ckuraparserParserOnceFlag;
CkuraParserStaticData *ckuraparserParserStaticData = nullptr;

void ckuraparserParserInitialize() {
  assert(ckuraparserParserStaticData == nullptr);
  auto staticData = std::make_unique<CkuraParserStaticData>(
    std::vector<std::string>{
      "literalValue", "expression", "declareVariable", "defineVariable", 
      "functionBody", "functionArgument", "functionHead", "functionReturn", 
      "defineFunction", "functionCall", "statement", "block", "unit", "module"
    },
    std::vector<std::string>{
      "", "'_'", "':'", "';'", "'\"'", "','", "'('", "')'", "'{'", "'}'", 
      "'->'", "'='", "'=='", "'!='", "'>'", "'<'", "'-'", "'.'", "'**'", 
      "'*'", "'/'", "'%'", "'+'", "'and'", "'or'", "'    '", "'return'"
    },
    std::vector<std::string>{
      "", "UNDERLINE", "COLON", "SEMI_COLON", "QUOTE", "COMMA", "OPEN_PAREN", 
      "CLOSE_PAREN", "OPEN_BRACE", "CLOSE_BRACE", "ARROW", "EQ", "EQUAL", 
      "NOT_EQ", "GREATER_THAN", "LESS_THAN", "MINUS", "DOT", "POWER", "STAR", 
      "DIV", "MOD", "ADD", "AND", "OR", "INDENT", "RETURN", "Comment", "WS", 
      "Id", "String", "Number"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,31,141,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,1,0,1,0,
  	1,0,3,0,32,8,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,43,8,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,63,
  	8,1,10,1,12,1,66,9,1,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,4,5,4,76,8,4,10,4,
  	12,4,79,9,4,1,5,1,5,3,5,83,8,5,1,6,1,6,1,6,1,6,1,6,1,6,5,6,91,8,6,10,
  	6,12,6,94,9,6,1,6,1,6,1,6,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,
  	1,9,1,9,5,9,112,8,9,10,9,12,9,115,9,9,1,9,1,9,1,9,1,10,1,10,1,10,3,10,
  	123,8,10,1,10,1,10,1,11,1,11,1,12,1,12,3,12,131,8,12,1,13,5,13,134,8,
  	13,10,13,12,13,137,9,13,1,13,1,13,1,13,0,1,2,14,0,2,4,6,8,10,12,14,16,
  	18,20,22,24,26,0,3,1,0,19,21,2,0,16,16,22,22,1,0,12,15,145,0,31,1,0,0,
  	0,2,42,1,0,0,0,4,67,1,0,0,0,6,70,1,0,0,0,8,77,1,0,0,0,10,82,1,0,0,0,12,
  	84,1,0,0,0,14,98,1,0,0,0,16,101,1,0,0,0,18,106,1,0,0,0,20,122,1,0,0,0,
  	22,126,1,0,0,0,24,130,1,0,0,0,26,135,1,0,0,0,28,32,5,30,0,0,29,32,5,31,
  	0,0,30,32,5,29,0,0,31,28,1,0,0,0,31,29,1,0,0,0,31,30,1,0,0,0,32,1,1,0,
  	0,0,33,34,6,1,-1,0,34,43,3,18,9,0,35,43,3,0,0,0,36,37,5,6,0,0,37,38,3,
  	2,1,0,38,39,5,7,0,0,39,43,1,0,0,0,40,41,5,16,0,0,41,43,3,0,0,0,42,33,
  	1,0,0,0,42,35,1,0,0,0,42,36,1,0,0,0,42,40,1,0,0,0,43,64,1,0,0,0,44,45,
  	10,7,0,0,45,46,5,18,0,0,46,63,3,2,1,8,47,48,10,6,0,0,48,49,7,0,0,0,49,
  	63,3,2,1,7,50,51,10,5,0,0,51,52,7,1,0,0,52,63,3,2,1,6,53,54,10,3,0,0,
  	54,55,7,2,0,0,55,63,3,2,1,4,56,57,10,2,0,0,57,58,5,23,0,0,58,63,3,2,1,
  	3,59,60,10,1,0,0,60,61,5,24,0,0,61,63,3,2,1,2,62,44,1,0,0,0,62,47,1,0,
  	0,0,62,50,1,0,0,0,62,53,1,0,0,0,62,56,1,0,0,0,62,59,1,0,0,0,63,66,1,0,
  	0,0,64,62,1,0,0,0,64,65,1,0,0,0,65,3,1,0,0,0,66,64,1,0,0,0,67,68,3,2,
  	1,0,68,69,5,29,0,0,69,5,1,0,0,0,70,71,3,4,2,0,71,72,5,11,0,0,72,73,3,
  	2,1,0,73,7,1,0,0,0,74,76,3,24,12,0,75,74,1,0,0,0,76,79,1,0,0,0,77,75,
  	1,0,0,0,77,78,1,0,0,0,78,9,1,0,0,0,79,77,1,0,0,0,80,83,3,4,2,0,81,83,
  	3,6,3,0,82,80,1,0,0,0,82,81,1,0,0,0,83,11,1,0,0,0,84,85,5,29,0,0,85,86,
  	5,29,0,0,86,92,5,6,0,0,87,88,3,10,5,0,88,89,5,5,0,0,89,91,1,0,0,0,90,
  	87,1,0,0,0,91,94,1,0,0,0,92,90,1,0,0,0,92,93,1,0,0,0,93,95,1,0,0,0,94,
  	92,1,0,0,0,95,96,3,10,5,0,96,97,5,7,0,0,97,13,1,0,0,0,98,99,5,26,0,0,
  	99,100,3,2,1,0,100,15,1,0,0,0,101,102,3,12,6,0,102,103,5,8,0,0,103,104,
  	3,8,4,0,104,105,5,9,0,0,105,17,1,0,0,0,106,107,5,29,0,0,107,113,5,6,0,
  	0,108,109,3,2,1,0,109,110,5,5,0,0,110,112,1,0,0,0,111,108,1,0,0,0,112,
  	115,1,0,0,0,113,111,1,0,0,0,113,114,1,0,0,0,114,116,1,0,0,0,115,113,1,
  	0,0,0,116,117,3,2,1,0,117,118,5,7,0,0,118,19,1,0,0,0,119,123,3,6,3,0,
  	120,123,3,14,7,0,121,123,3,18,9,0,122,119,1,0,0,0,122,120,1,0,0,0,122,
  	121,1,0,0,0,123,124,1,0,0,0,124,125,5,3,0,0,125,21,1,0,0,0,126,127,3,
  	16,8,0,127,23,1,0,0,0,128,131,3,20,10,0,129,131,3,22,11,0,130,128,1,0,
  	0,0,130,129,1,0,0,0,131,25,1,0,0,0,132,134,3,24,12,0,133,132,1,0,0,0,
  	134,137,1,0,0,0,135,133,1,0,0,0,135,136,1,0,0,0,136,138,1,0,0,0,137,135,
  	1,0,0,0,138,139,5,0,0,1,139,27,1,0,0,0,11,31,42,62,64,77,82,92,113,122,
  	130,135
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  ckuraparserParserStaticData = staticData.release();
}

}

CkuraParser::CkuraParser(TokenStream *input) : CkuraParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

CkuraParser::CkuraParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  CkuraParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *ckuraparserParserStaticData->atn, ckuraparserParserStaticData->decisionToDFA, ckuraparserParserStaticData->sharedContextCache, options);
}

CkuraParser::~CkuraParser() {
  delete _interpreter;
}

const atn::ATN& CkuraParser::getATN() const {
  return *ckuraparserParserStaticData->atn;
}

std::string CkuraParser::getGrammarFileName() const {
  return "CkuraParser.g4";
}

const std::vector<std::string>& CkuraParser::getRuleNames() const {
  return ckuraparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& CkuraParser::getVocabulary() const {
  return ckuraparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CkuraParser::getSerializedATN() const {
  return ckuraparserParserStaticData->serializedATN;
}


//----------------- LiteralValueContext ------------------------------------------------------------------

CkuraParser::LiteralValueContext::LiteralValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CkuraParser::LiteralValueContext::getRuleIndex() const {
  return CkuraParser::RuleLiteralValue;
}

void CkuraParser::LiteralValueContext::copyFrom(LiteralValueContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NumberContext ------------------------------------------------------------------

tree::TerminalNode* CkuraParser::NumberContext::Number() {
  return getToken(CkuraParser::Number, 0);
}

CkuraParser::NumberContext::NumberContext(LiteralValueContext *ctx) { copyFrom(ctx); }


std::any CkuraParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CkuraParserVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StringContext ------------------------------------------------------------------

tree::TerminalNode* CkuraParser::StringContext::String() {
  return getToken(CkuraParser::String, 0);
}

CkuraParser::StringContext::StringContext(LiteralValueContext *ctx) { copyFrom(ctx); }


std::any CkuraParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CkuraParserVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdContext ------------------------------------------------------------------

tree::TerminalNode* CkuraParser::IdContext::Id() {
  return getToken(CkuraParser::Id, 0);
}

CkuraParser::IdContext::IdContext(LiteralValueContext *ctx) { copyFrom(ctx); }


std::any CkuraParser::IdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CkuraParserVisitor*>(visitor))
    return parserVisitor->visitId(this);
  else
    return visitor->visitChildren(this);
}
CkuraParser::LiteralValueContext* CkuraParser::literalValue() {
  LiteralValueContext *_localctx = _tracker.createInstance<LiteralValueContext>(_ctx, getState());
  enterRule(_localctx, 0, CkuraParser::RuleLiteralValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(31);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CkuraParser::String: {
        _localctx = _tracker.createInstance<CkuraParser::StringContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(28);
        match(CkuraParser::String);
        break;
      }

      case CkuraParser::Number: {
        _localctx = _tracker.createInstance<CkuraParser::NumberContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(29);
        match(CkuraParser::Number);
        break;
      }

      case CkuraParser::Id: {
        _localctx = _tracker.createInstance<CkuraParser::IdContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(30);
        match(CkuraParser::Id);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

CkuraParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CkuraParser::ExpressionContext::getRuleIndex() const {
  return CkuraParser::RuleExpression;
}

void CkuraParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MultiLevelContext ------------------------------------------------------------------

std::vector<CkuraParser::ExpressionContext *> CkuraParser::MultiLevelContext::expression() {
  return getRuleContexts<CkuraParser::ExpressionContext>();
}

CkuraParser::ExpressionContext* CkuraParser::MultiLevelContext::expression(size_t i) {
  return getRuleContext<CkuraParser::ExpressionContext>(i);
}

tree::TerminalNode* CkuraParser::MultiLevelContext::STAR() {
  return getToken(CkuraParser::STAR, 0);
}

tree::TerminalNode* CkuraParser::MultiLevelContext::DIV() {
  return getToken(CkuraParser::DIV, 0);
}

tree::TerminalNode* CkuraParser::MultiLevelContext::MOD() {
  return getToken(CkuraParser::MOD, 0);
}

CkuraParser::MultiLevelContext::MultiLevelContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any CkuraParser::MultiLevelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CkuraParserVisitor*>(visitor))
    return parserVisitor->visitMultiLevel(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncCallLevelContext ------------------------------------------------------------------

CkuraParser::FunctionCallContext* CkuraParser::FuncCallLevelContext::functionCall() {
  return getRuleContext<CkuraParser::FunctionCallContext>(0);
}

CkuraParser::FuncCallLevelContext::FuncCallLevelContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any CkuraParser::FuncCallLevelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CkuraParserVisitor*>(visitor))
    return parserVisitor->visitFuncCallLevel(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenLevelContext ------------------------------------------------------------------

tree::TerminalNode* CkuraParser::ParenLevelContext::OPEN_PAREN() {
  return getToken(CkuraParser::OPEN_PAREN, 0);
}

CkuraParser::ExpressionContext* CkuraParser::ParenLevelContext::expression() {
  return getRuleContext<CkuraParser::ExpressionContext>(0);
}

tree::TerminalNode* CkuraParser::ParenLevelContext::CLOSE_PAREN() {
  return getToken(CkuraParser::CLOSE_PAREN, 0);
}

CkuraParser::ParenLevelContext::ParenLevelContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any CkuraParser::ParenLevelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CkuraParserVisitor*>(visitor))
    return parserVisitor->visitParenLevel(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LiteralLevelContext ------------------------------------------------------------------

CkuraParser::LiteralValueContext* CkuraParser::LiteralLevelContext::literalValue() {
  return getRuleContext<CkuraParser::LiteralValueContext>(0);
}

CkuraParser::LiteralLevelContext::LiteralLevelContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any CkuraParser::LiteralLevelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CkuraParserVisitor*>(visitor))
    return parserVisitor->visitLiteralLevel(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddLevelContext ------------------------------------------------------------------

std::vector<CkuraParser::ExpressionContext *> CkuraParser::AddLevelContext::expression() {
  return getRuleContexts<CkuraParser::ExpressionContext>();
}

CkuraParser::ExpressionContext* CkuraParser::AddLevelContext::expression(size_t i) {
  return getRuleContext<CkuraParser::ExpressionContext>(i);
}

tree::TerminalNode* CkuraParser::AddLevelContext::ADD() {
  return getToken(CkuraParser::ADD, 0);
}

tree::TerminalNode* CkuraParser::AddLevelContext::MINUS() {
  return getToken(CkuraParser::MINUS, 0);
}

CkuraParser::AddLevelContext::AddLevelContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any CkuraParser::AddLevelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CkuraParserVisitor*>(visitor))
    return parserVisitor->visitAddLevel(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MinusLevelContext ------------------------------------------------------------------

tree::TerminalNode* CkuraParser::MinusLevelContext::MINUS() {
  return getToken(CkuraParser::MINUS, 0);
}

CkuraParser::LiteralValueContext* CkuraParser::MinusLevelContext::literalValue() {
  return getRuleContext<CkuraParser::LiteralValueContext>(0);
}

CkuraParser::MinusLevelContext::MinusLevelContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any CkuraParser::MinusLevelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CkuraParserVisitor*>(visitor))
    return parserVisitor->visitMinusLevel(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PowerLevelContext ------------------------------------------------------------------

std::vector<CkuraParser::ExpressionContext *> CkuraParser::PowerLevelContext::expression() {
  return getRuleContexts<CkuraParser::ExpressionContext>();
}

CkuraParser::ExpressionContext* CkuraParser::PowerLevelContext::expression(size_t i) {
  return getRuleContext<CkuraParser::ExpressionContext>(i);
}

tree::TerminalNode* CkuraParser::PowerLevelContext::POWER() {
  return getToken(CkuraParser::POWER, 0);
}

CkuraParser::PowerLevelContext::PowerLevelContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any CkuraParser::PowerLevelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CkuraParserVisitor*>(visitor))
    return parserVisitor->visitPowerLevel(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OrLevelContext ------------------------------------------------------------------

std::vector<CkuraParser::ExpressionContext *> CkuraParser::OrLevelContext::expression() {
  return getRuleContexts<CkuraParser::ExpressionContext>();
}

CkuraParser::ExpressionContext* CkuraParser::OrLevelContext::expression(size_t i) {
  return getRuleContext<CkuraParser::ExpressionContext>(i);
}

tree::TerminalNode* CkuraParser::OrLevelContext::OR() {
  return getToken(CkuraParser::OR, 0);
}

CkuraParser::OrLevelContext::OrLevelContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any CkuraParser::OrLevelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CkuraParserVisitor*>(visitor))
    return parserVisitor->visitOrLevel(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqLevelContext ------------------------------------------------------------------

std::vector<CkuraParser::ExpressionContext *> CkuraParser::EqLevelContext::expression() {
  return getRuleContexts<CkuraParser::ExpressionContext>();
}

CkuraParser::ExpressionContext* CkuraParser::EqLevelContext::expression(size_t i) {
  return getRuleContext<CkuraParser::ExpressionContext>(i);
}

tree::TerminalNode* CkuraParser::EqLevelContext::EQUAL() {
  return getToken(CkuraParser::EQUAL, 0);
}

tree::TerminalNode* CkuraParser::EqLevelContext::NOT_EQ() {
  return getToken(CkuraParser::NOT_EQ, 0);
}

tree::TerminalNode* CkuraParser::EqLevelContext::GREATER_THAN() {
  return getToken(CkuraParser::GREATER_THAN, 0);
}

tree::TerminalNode* CkuraParser::EqLevelContext::LESS_THAN() {
  return getToken(CkuraParser::LESS_THAN, 0);
}

CkuraParser::EqLevelContext::EqLevelContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any CkuraParser::EqLevelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CkuraParserVisitor*>(visitor))
    return parserVisitor->visitEqLevel(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndLevelContext ------------------------------------------------------------------

std::vector<CkuraParser::ExpressionContext *> CkuraParser::AndLevelContext::expression() {
  return getRuleContexts<CkuraParser::ExpressionContext>();
}

CkuraParser::ExpressionContext* CkuraParser::AndLevelContext::expression(size_t i) {
  return getRuleContext<CkuraParser::ExpressionContext>(i);
}

tree::TerminalNode* CkuraParser::AndLevelContext::AND() {
  return getToken(CkuraParser::AND, 0);
}

CkuraParser::AndLevelContext::AndLevelContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any CkuraParser::AndLevelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CkuraParserVisitor*>(visitor))
    return parserVisitor->visitAndLevel(this);
  else
    return visitor->visitChildren(this);
}

CkuraParser::ExpressionContext* CkuraParser::expression() {
   return expression(0);
}

CkuraParser::ExpressionContext* CkuraParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CkuraParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  CkuraParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, CkuraParser::RuleExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(42);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<FuncCallLevelContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(34);
      functionCall();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<LiteralLevelContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(35);
      literalValue();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ParenLevelContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(36);
      match(CkuraParser::OPEN_PAREN);
      setState(37);
      expression(0);
      setState(38);
      match(CkuraParser::CLOSE_PAREN);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<MinusLevelContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(40);
      match(CkuraParser::MINUS);
      setState(41);
      literalValue();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(64);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(62);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PowerLevelContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(44);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(45);
          antlrcpp::downCast<PowerLevelContext *>(_localctx)->op = match(CkuraParser::POWER);
          setState(46);
          expression(8);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MultiLevelContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(47);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(48);
          antlrcpp::downCast<MultiLevelContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 3670016) != 0)) {
            antlrcpp::downCast<MultiLevelContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(49);
          expression(7);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<AddLevelContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(50);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(51);
          antlrcpp::downCast<AddLevelContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == CkuraParser::MINUS

          || _la == CkuraParser::ADD)) {
            antlrcpp::downCast<AddLevelContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(52);
          expression(6);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<EqLevelContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(53);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(54);
          antlrcpp::downCast<EqLevelContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 61440) != 0)) {
            antlrcpp::downCast<EqLevelContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(55);
          expression(4);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<AndLevelContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(56);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(57);
          antlrcpp::downCast<AndLevelContext *>(_localctx)->op = match(CkuraParser::AND);
          setState(58);
          expression(3);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<OrLevelContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(59);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(60);
          antlrcpp::downCast<OrLevelContext *>(_localctx)->op = match(CkuraParser::OR);
          setState(61);
          expression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(66);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- DeclareVariableContext ------------------------------------------------------------------

CkuraParser::DeclareVariableContext::DeclareVariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CkuraParser::ExpressionContext* CkuraParser::DeclareVariableContext::expression() {
  return getRuleContext<CkuraParser::ExpressionContext>(0);
}

tree::TerminalNode* CkuraParser::DeclareVariableContext::Id() {
  return getToken(CkuraParser::Id, 0);
}


size_t CkuraParser::DeclareVariableContext::getRuleIndex() const {
  return CkuraParser::RuleDeclareVariable;
}


std::any CkuraParser::DeclareVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CkuraParserVisitor*>(visitor))
    return parserVisitor->visitDeclareVariable(this);
  else
    return visitor->visitChildren(this);
}

CkuraParser::DeclareVariableContext* CkuraParser::declareVariable() {
  DeclareVariableContext *_localctx = _tracker.createInstance<DeclareVariableContext>(_ctx, getState());
  enterRule(_localctx, 4, CkuraParser::RuleDeclareVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    expression(0);
    setState(68);
    match(CkuraParser::Id);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefineVariableContext ------------------------------------------------------------------

CkuraParser::DefineVariableContext::DefineVariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CkuraParser::DeclareVariableContext* CkuraParser::DefineVariableContext::declareVariable() {
  return getRuleContext<CkuraParser::DeclareVariableContext>(0);
}

tree::TerminalNode* CkuraParser::DefineVariableContext::EQ() {
  return getToken(CkuraParser::EQ, 0);
}

CkuraParser::ExpressionContext* CkuraParser::DefineVariableContext::expression() {
  return getRuleContext<CkuraParser::ExpressionContext>(0);
}


size_t CkuraParser::DefineVariableContext::getRuleIndex() const {
  return CkuraParser::RuleDefineVariable;
}


std::any CkuraParser::DefineVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CkuraParserVisitor*>(visitor))
    return parserVisitor->visitDefineVariable(this);
  else
    return visitor->visitChildren(this);
}

CkuraParser::DefineVariableContext* CkuraParser::defineVariable() {
  DefineVariableContext *_localctx = _tracker.createInstance<DefineVariableContext>(_ctx, getState());
  enterRule(_localctx, 6, CkuraParser::RuleDefineVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    declareVariable();
    setState(71);
    match(CkuraParser::EQ);
    setState(72);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionBodyContext ------------------------------------------------------------------

CkuraParser::FunctionBodyContext::FunctionBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CkuraParser::UnitContext *> CkuraParser::FunctionBodyContext::unit() {
  return getRuleContexts<CkuraParser::UnitContext>();
}

CkuraParser::UnitContext* CkuraParser::FunctionBodyContext::unit(size_t i) {
  return getRuleContext<CkuraParser::UnitContext>(i);
}


size_t CkuraParser::FunctionBodyContext::getRuleIndex() const {
  return CkuraParser::RuleFunctionBody;
}


std::any CkuraParser::FunctionBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CkuraParserVisitor*>(visitor))
    return parserVisitor->visitFunctionBody(this);
  else
    return visitor->visitChildren(this);
}

CkuraParser::FunctionBodyContext* CkuraParser::functionBody() {
  FunctionBodyContext *_localctx = _tracker.createInstance<FunctionBodyContext>(_ctx, getState());
  enterRule(_localctx, 8, CkuraParser::RuleFunctionBody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(77);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3825270848) != 0) {
      setState(74);
      unit();
      setState(79);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionArgumentContext ------------------------------------------------------------------

CkuraParser::FunctionArgumentContext::FunctionArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CkuraParser::DeclareVariableContext* CkuraParser::FunctionArgumentContext::declareVariable() {
  return getRuleContext<CkuraParser::DeclareVariableContext>(0);
}

CkuraParser::DefineVariableContext* CkuraParser::FunctionArgumentContext::defineVariable() {
  return getRuleContext<CkuraParser::DefineVariableContext>(0);
}


size_t CkuraParser::FunctionArgumentContext::getRuleIndex() const {
  return CkuraParser::RuleFunctionArgument;
}


std::any CkuraParser::FunctionArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CkuraParserVisitor*>(visitor))
    return parserVisitor->visitFunctionArgument(this);
  else
    return visitor->visitChildren(this);
}

CkuraParser::FunctionArgumentContext* CkuraParser::functionArgument() {
  FunctionArgumentContext *_localctx = _tracker.createInstance<FunctionArgumentContext>(_ctx, getState());
  enterRule(_localctx, 10, CkuraParser::RuleFunctionArgument);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(82);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(80);
      declareVariable();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(81);
      defineVariable();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionHeadContext ------------------------------------------------------------------

CkuraParser::FunctionHeadContext::FunctionHeadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CkuraParser::FunctionHeadContext::OPEN_PAREN() {
  return getToken(CkuraParser::OPEN_PAREN, 0);
}

std::vector<CkuraParser::FunctionArgumentContext *> CkuraParser::FunctionHeadContext::functionArgument() {
  return getRuleContexts<CkuraParser::FunctionArgumentContext>();
}

CkuraParser::FunctionArgumentContext* CkuraParser::FunctionHeadContext::functionArgument(size_t i) {
  return getRuleContext<CkuraParser::FunctionArgumentContext>(i);
}

tree::TerminalNode* CkuraParser::FunctionHeadContext::CLOSE_PAREN() {
  return getToken(CkuraParser::CLOSE_PAREN, 0);
}

std::vector<tree::TerminalNode *> CkuraParser::FunctionHeadContext::Id() {
  return getTokens(CkuraParser::Id);
}

tree::TerminalNode* CkuraParser::FunctionHeadContext::Id(size_t i) {
  return getToken(CkuraParser::Id, i);
}

std::vector<tree::TerminalNode *> CkuraParser::FunctionHeadContext::COMMA() {
  return getTokens(CkuraParser::COMMA);
}

tree::TerminalNode* CkuraParser::FunctionHeadContext::COMMA(size_t i) {
  return getToken(CkuraParser::COMMA, i);
}


size_t CkuraParser::FunctionHeadContext::getRuleIndex() const {
  return CkuraParser::RuleFunctionHead;
}


std::any CkuraParser::FunctionHeadContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CkuraParserVisitor*>(visitor))
    return parserVisitor->visitFunctionHead(this);
  else
    return visitor->visitChildren(this);
}

CkuraParser::FunctionHeadContext* CkuraParser::functionHead() {
  FunctionHeadContext *_localctx = _tracker.createInstance<FunctionHeadContext>(_ctx, getState());
  enterRule(_localctx, 12, CkuraParser::RuleFunctionHead);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(84);
    antlrcpp::downCast<FunctionHeadContext *>(_localctx)->returnType = match(CkuraParser::Id);
    setState(85);
    antlrcpp::downCast<FunctionHeadContext *>(_localctx)->functionName = match(CkuraParser::Id);
    setState(86);
    match(CkuraParser::OPEN_PAREN);
    setState(92);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(87);
        functionArgument();
        setState(88);
        match(CkuraParser::COMMA); 
      }
      setState(94);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
    setState(95);
    functionArgument();
    setState(96);
    match(CkuraParser::CLOSE_PAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionReturnContext ------------------------------------------------------------------

CkuraParser::FunctionReturnContext::FunctionReturnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CkuraParser::FunctionReturnContext::RETURN() {
  return getToken(CkuraParser::RETURN, 0);
}

CkuraParser::ExpressionContext* CkuraParser::FunctionReturnContext::expression() {
  return getRuleContext<CkuraParser::ExpressionContext>(0);
}


size_t CkuraParser::FunctionReturnContext::getRuleIndex() const {
  return CkuraParser::RuleFunctionReturn;
}


std::any CkuraParser::FunctionReturnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CkuraParserVisitor*>(visitor))
    return parserVisitor->visitFunctionReturn(this);
  else
    return visitor->visitChildren(this);
}

CkuraParser::FunctionReturnContext* CkuraParser::functionReturn() {
  FunctionReturnContext *_localctx = _tracker.createInstance<FunctionReturnContext>(_ctx, getState());
  enterRule(_localctx, 14, CkuraParser::RuleFunctionReturn);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    match(CkuraParser::RETURN);
    setState(99);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefineFunctionContext ------------------------------------------------------------------

CkuraParser::DefineFunctionContext::DefineFunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CkuraParser::FunctionHeadContext* CkuraParser::DefineFunctionContext::functionHead() {
  return getRuleContext<CkuraParser::FunctionHeadContext>(0);
}

tree::TerminalNode* CkuraParser::DefineFunctionContext::OPEN_BRACE() {
  return getToken(CkuraParser::OPEN_BRACE, 0);
}

CkuraParser::FunctionBodyContext* CkuraParser::DefineFunctionContext::functionBody() {
  return getRuleContext<CkuraParser::FunctionBodyContext>(0);
}

tree::TerminalNode* CkuraParser::DefineFunctionContext::CLOSE_BRACE() {
  return getToken(CkuraParser::CLOSE_BRACE, 0);
}


size_t CkuraParser::DefineFunctionContext::getRuleIndex() const {
  return CkuraParser::RuleDefineFunction;
}


std::any CkuraParser::DefineFunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CkuraParserVisitor*>(visitor))
    return parserVisitor->visitDefineFunction(this);
  else
    return visitor->visitChildren(this);
}

CkuraParser::DefineFunctionContext* CkuraParser::defineFunction() {
  DefineFunctionContext *_localctx = _tracker.createInstance<DefineFunctionContext>(_ctx, getState());
  enterRule(_localctx, 16, CkuraParser::RuleDefineFunction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101);
    functionHead();
    setState(102);
    match(CkuraParser::OPEN_BRACE);
    setState(103);
    functionBody();
    setState(104);
    match(CkuraParser::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

CkuraParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CkuraParser::FunctionCallContext::Id() {
  return getToken(CkuraParser::Id, 0);
}

tree::TerminalNode* CkuraParser::FunctionCallContext::OPEN_PAREN() {
  return getToken(CkuraParser::OPEN_PAREN, 0);
}

std::vector<CkuraParser::ExpressionContext *> CkuraParser::FunctionCallContext::expression() {
  return getRuleContexts<CkuraParser::ExpressionContext>();
}

CkuraParser::ExpressionContext* CkuraParser::FunctionCallContext::expression(size_t i) {
  return getRuleContext<CkuraParser::ExpressionContext>(i);
}

tree::TerminalNode* CkuraParser::FunctionCallContext::CLOSE_PAREN() {
  return getToken(CkuraParser::CLOSE_PAREN, 0);
}

std::vector<tree::TerminalNode *> CkuraParser::FunctionCallContext::COMMA() {
  return getTokens(CkuraParser::COMMA);
}

tree::TerminalNode* CkuraParser::FunctionCallContext::COMMA(size_t i) {
  return getToken(CkuraParser::COMMA, i);
}


size_t CkuraParser::FunctionCallContext::getRuleIndex() const {
  return CkuraParser::RuleFunctionCall;
}


std::any CkuraParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CkuraParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

CkuraParser::FunctionCallContext* CkuraParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 18, CkuraParser::RuleFunctionCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(106);
    match(CkuraParser::Id);
    setState(107);
    match(CkuraParser::OPEN_PAREN);
    setState(113);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(108);
        expression(0);
        setState(109);
        match(CkuraParser::COMMA); 
      }
      setState(115);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
    setState(116);
    expression(0);
    setState(117);
    match(CkuraParser::CLOSE_PAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

CkuraParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CkuraParser::StatementContext::SEMI_COLON() {
  return getToken(CkuraParser::SEMI_COLON, 0);
}

CkuraParser::DefineVariableContext* CkuraParser::StatementContext::defineVariable() {
  return getRuleContext<CkuraParser::DefineVariableContext>(0);
}

CkuraParser::FunctionReturnContext* CkuraParser::StatementContext::functionReturn() {
  return getRuleContext<CkuraParser::FunctionReturnContext>(0);
}

CkuraParser::FunctionCallContext* CkuraParser::StatementContext::functionCall() {
  return getRuleContext<CkuraParser::FunctionCallContext>(0);
}


size_t CkuraParser::StatementContext::getRuleIndex() const {
  return CkuraParser::RuleStatement;
}


std::any CkuraParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CkuraParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

CkuraParser::StatementContext* CkuraParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 20, CkuraParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(119);
      defineVariable();
      break;
    }

    case 2: {
      setState(120);
      functionReturn();
      break;
    }

    case 3: {
      setState(121);
      functionCall();
      break;
    }

    default:
      break;
    }
    setState(124);
    match(CkuraParser::SEMI_COLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

CkuraParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CkuraParser::DefineFunctionContext* CkuraParser::BlockContext::defineFunction() {
  return getRuleContext<CkuraParser::DefineFunctionContext>(0);
}


size_t CkuraParser::BlockContext::getRuleIndex() const {
  return CkuraParser::RuleBlock;
}


std::any CkuraParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CkuraParserVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

CkuraParser::BlockContext* CkuraParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 22, CkuraParser::RuleBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    defineFunction();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnitContext ------------------------------------------------------------------

CkuraParser::UnitContext::UnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CkuraParser::StatementContext* CkuraParser::UnitContext::statement() {
  return getRuleContext<CkuraParser::StatementContext>(0);
}

CkuraParser::BlockContext* CkuraParser::UnitContext::block() {
  return getRuleContext<CkuraParser::BlockContext>(0);
}


size_t CkuraParser::UnitContext::getRuleIndex() const {
  return CkuraParser::RuleUnit;
}


std::any CkuraParser::UnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CkuraParserVisitor*>(visitor))
    return parserVisitor->visitUnit(this);
  else
    return visitor->visitChildren(this);
}

CkuraParser::UnitContext* CkuraParser::unit() {
  UnitContext *_localctx = _tracker.createInstance<UnitContext>(_ctx, getState());
  enterRule(_localctx, 24, CkuraParser::RuleUnit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(130);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(128);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(129);
      block();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleContext ------------------------------------------------------------------

CkuraParser::ModuleContext::ModuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CkuraParser::ModuleContext::EOF() {
  return getToken(CkuraParser::EOF, 0);
}

std::vector<CkuraParser::UnitContext *> CkuraParser::ModuleContext::unit() {
  return getRuleContexts<CkuraParser::UnitContext>();
}

CkuraParser::UnitContext* CkuraParser::ModuleContext::unit(size_t i) {
  return getRuleContext<CkuraParser::UnitContext>(i);
}


size_t CkuraParser::ModuleContext::getRuleIndex() const {
  return CkuraParser::RuleModule;
}


std::any CkuraParser::ModuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CkuraParserVisitor*>(visitor))
    return parserVisitor->visitModule(this);
  else
    return visitor->visitChildren(this);
}

CkuraParser::ModuleContext* CkuraParser::module() {
  ModuleContext *_localctx = _tracker.createInstance<ModuleContext>(_ctx, getState());
  enterRule(_localctx, 26, CkuraParser::RuleModule);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3825270848) != 0) {
      setState(132);
      unit();
      setState(137);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(138);
    match(CkuraParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool CkuraParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CkuraParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 6);
    case 2: return precpred(_ctx, 5);
    case 3: return precpred(_ctx, 3);
    case 4: return precpred(_ctx, 2);
    case 5: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void CkuraParser::initialize() {
  ::antlr4::internal::call_once(ckuraparserParserOnceFlag, ckuraparserParserInitialize);
}
