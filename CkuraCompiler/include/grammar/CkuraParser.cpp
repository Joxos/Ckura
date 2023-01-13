
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
      "statement", "unit", "lastUnit", "module"
    },
    std::vector<std::string>{
      "", "'_'", "':'", "';'", "'\"'", "','", "'('", "')'", "'{'", "'}'", 
      "'->'", "'='", "'=='", "'!='", "'>'", "'<'", "'-'", "'.'", "'**'", 
      "'*'", "'/'", "'%'", "'+'", "'and'", "'or'", "'\\n'"
    },
    std::vector<std::string>{
      "", "UNDERLINE", "COLON", "SEMI_COLON", "QUOTE", "COMMA", "OPEN_PAREN", 
      "CLOSE_PAREN", "OPEN_BRACE", "CLOSE_BRACE", "ARROW", "EQ", "EQUAL", 
      "NOT_EQ", "GREATER_THAN", "LESS_THAN", "MINUS", "DOT", "POWER", "STAR", 
      "DIV", "MOD", "ADD", "AND", "OR", "NEXT_LINE", "Comment", "WS", "Id", 
      "String", "Number"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,30,78,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,7,
  	7,7,1,0,1,0,1,0,3,0,20,8,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,30,8,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,5,1,50,8,1,10,1,12,1,53,9,1,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,4,1,4,1,5,
  	1,5,1,5,1,6,1,6,1,7,5,7,70,8,7,10,7,12,7,73,9,7,1,7,3,7,76,8,7,1,7,0,
  	1,2,8,0,2,4,6,8,10,12,14,0,3,1,0,19,21,2,0,16,16,22,22,1,0,12,15,81,0,
  	19,1,0,0,0,2,29,1,0,0,0,4,54,1,0,0,0,6,57,1,0,0,0,8,61,1,0,0,0,10,63,
  	1,0,0,0,12,66,1,0,0,0,14,71,1,0,0,0,16,20,5,29,0,0,17,20,5,30,0,0,18,
  	20,5,28,0,0,19,16,1,0,0,0,19,17,1,0,0,0,19,18,1,0,0,0,20,1,1,0,0,0,21,
  	22,6,1,-1,0,22,30,3,0,0,0,23,24,5,6,0,0,24,25,3,2,1,0,25,26,5,7,0,0,26,
  	30,1,0,0,0,27,28,5,16,0,0,28,30,3,2,1,4,29,21,1,0,0,0,29,23,1,0,0,0,29,
  	27,1,0,0,0,30,51,1,0,0,0,31,32,10,7,0,0,32,33,5,18,0,0,33,50,3,2,1,8,
  	34,35,10,6,0,0,35,36,7,0,0,0,36,50,3,2,1,7,37,38,10,5,0,0,38,39,7,1,0,
  	0,39,50,3,2,1,6,40,41,10,3,0,0,41,42,7,2,0,0,42,50,3,2,1,4,43,44,10,2,
  	0,0,44,45,5,23,0,0,45,50,3,2,1,3,46,47,10,1,0,0,47,48,5,24,0,0,48,50,
  	3,2,1,2,49,31,1,0,0,0,49,34,1,0,0,0,49,37,1,0,0,0,49,40,1,0,0,0,49,43,
  	1,0,0,0,49,46,1,0,0,0,50,53,1,0,0,0,51,49,1,0,0,0,51,52,1,0,0,0,52,3,
  	1,0,0,0,53,51,1,0,0,0,54,55,3,2,1,0,55,56,5,28,0,0,56,5,1,0,0,0,57,58,
  	3,4,2,0,58,59,5,11,0,0,59,60,3,2,1,0,60,7,1,0,0,0,61,62,3,6,3,0,62,9,
  	1,0,0,0,63,64,3,8,4,0,64,65,5,25,0,0,65,11,1,0,0,0,66,67,3,8,4,0,67,13,
  	1,0,0,0,68,70,3,10,5,0,69,68,1,0,0,0,70,73,1,0,0,0,71,69,1,0,0,0,71,72,
  	1,0,0,0,72,75,1,0,0,0,73,71,1,0,0,0,74,76,3,12,6,0,75,74,1,0,0,0,75,76,
  	1,0,0,0,76,15,1,0,0,0,6,19,29,49,51,71,75
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
    setState(19);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CkuraParser::String: {
        _localctx = _tracker.createInstance<CkuraParser::StringContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(16);
        match(CkuraParser::String);
        break;
      }

      case CkuraParser::Number: {
        _localctx = _tracker.createInstance<CkuraParser::NumberContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(17);
        match(CkuraParser::Number);
        break;
      }

      case CkuraParser::Id: {
        _localctx = _tracker.createInstance<CkuraParser::IdContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(18);
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

CkuraParser::ExpressionContext* CkuraParser::MinusLevelContext::expression() {
  return getRuleContext<CkuraParser::ExpressionContext>(0);
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
    setState(29);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CkuraParser::Id:
      case CkuraParser::String:
      case CkuraParser::Number: {
        _localctx = _tracker.createInstance<LiteralLevelContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(22);
        literalValue();
        break;
      }

      case CkuraParser::OPEN_PAREN: {
        _localctx = _tracker.createInstance<ParenLevelContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(23);
        match(CkuraParser::OPEN_PAREN);
        setState(24);
        expression(0);
        setState(25);
        match(CkuraParser::CLOSE_PAREN);
        break;
      }

      case CkuraParser::MINUS: {
        _localctx = _tracker.createInstance<MinusLevelContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(27);
        match(CkuraParser::MINUS);
        setState(28);
        expression(4);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(51);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(49);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PowerLevelContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(31);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(32);
          antlrcpp::downCast<PowerLevelContext *>(_localctx)->op = match(CkuraParser::POWER);
          setState(33);
          expression(8);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MultiLevelContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(34);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(35);
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
          setState(36);
          expression(7);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<AddLevelContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(37);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(38);
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
          setState(39);
          expression(6);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<EqLevelContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(40);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(41);
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
          setState(42);
          expression(4);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<AndLevelContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(43);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(44);
          antlrcpp::downCast<AndLevelContext *>(_localctx)->op = match(CkuraParser::AND);
          setState(45);
          expression(3);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<OrLevelContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(46);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(47);
          antlrcpp::downCast<OrLevelContext *>(_localctx)->op = match(CkuraParser::OR);
          setState(48);
          expression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(53);
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
    setState(54);
    expression(0);
    setState(55);
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
    setState(57);
    declareVariable();
    setState(58);
    match(CkuraParser::EQ);
    setState(59);
    expression(0);
   
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

CkuraParser::DefineVariableContext* CkuraParser::StatementContext::defineVariable() {
  return getRuleContext<CkuraParser::DefineVariableContext>(0);
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
  enterRule(_localctx, 8, CkuraParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(61);
    defineVariable();
   
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

tree::TerminalNode* CkuraParser::UnitContext::NEXT_LINE() {
  return getToken(CkuraParser::NEXT_LINE, 0);
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
  enterRule(_localctx, 10, CkuraParser::RuleUnit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(63);
    statement();
    setState(64);
    match(CkuraParser::NEXT_LINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LastUnitContext ------------------------------------------------------------------

CkuraParser::LastUnitContext::LastUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CkuraParser::StatementContext* CkuraParser::LastUnitContext::statement() {
  return getRuleContext<CkuraParser::StatementContext>(0);
}


size_t CkuraParser::LastUnitContext::getRuleIndex() const {
  return CkuraParser::RuleLastUnit;
}


std::any CkuraParser::LastUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CkuraParserVisitor*>(visitor))
    return parserVisitor->visitLastUnit(this);
  else
    return visitor->visitChildren(this);
}

CkuraParser::LastUnitContext* CkuraParser::lastUnit() {
  LastUnitContext *_localctx = _tracker.createInstance<LastUnitContext>(_ctx, getState());
  enterRule(_localctx, 12, CkuraParser::RuleLastUnit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66);
    statement();
   
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

std::vector<CkuraParser::UnitContext *> CkuraParser::ModuleContext::unit() {
  return getRuleContexts<CkuraParser::UnitContext>();
}

CkuraParser::UnitContext* CkuraParser::ModuleContext::unit(size_t i) {
  return getRuleContext<CkuraParser::UnitContext>(i);
}

CkuraParser::LastUnitContext* CkuraParser::ModuleContext::lastUnit() {
  return getRuleContext<CkuraParser::LastUnitContext>(0);
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
  enterRule(_localctx, 14, CkuraParser::RuleModule);
  size_t _la = 0;

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
    setState(71);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(68);
        unit(); 
      }
      setState(73);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
    setState(75);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1879113792) != 0) {
      setState(74);
      lastUnit();
    }
   
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
