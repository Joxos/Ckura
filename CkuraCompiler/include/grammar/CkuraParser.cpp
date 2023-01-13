
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
      "literalValue", "expression", "declareVariable", "defineVariable"
    },
    std::vector<std::string>{
      "", "'_'", "':'", "';'", "'\"'", "','", "'('", "')'", "'{'", "'}'", 
      "'->'", "'='", "'=='", "'!='", "'>'", "'<'", "'-'", "'.'", "'**'", 
      "'*'", "'/'", "'%'", "'+'", "'and'", "'or'"
    },
    std::vector<std::string>{
      "", "UNDERLINE", "COLON", "SEMI_COLON", "QUOTE", "COMMA", "OPEN_PAREN", 
      "CLOSE_PAREN", "OPEN_BRACE", "CLOSE_BRACE", "ARROW", "EQ", "EQUAL", 
      "NOT_EQ", "GREATER_THAN", "LESS_THAN", "MINUS", "DOT", "POWER", "STAR", 
      "DIV", "MOD", "ADD", "AND", "OR", "Comment", "WS", "Id", "String", 
      "Integer", "Decimal"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,30,53,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,1,0,1,0,1,0,1,0,3,0,13,8,0,
  	1,1,1,1,1,1,1,1,1,1,1,1,3,1,21,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,41,8,1,10,1,12,1,44,9,1,1,2,
  	1,2,1,2,1,3,1,3,1,3,1,3,1,3,0,1,2,4,0,2,4,6,0,3,1,0,19,21,2,0,16,16,22,
  	22,1,0,12,15,58,0,12,1,0,0,0,2,20,1,0,0,0,4,45,1,0,0,0,6,48,1,0,0,0,8,
  	13,5,28,0,0,9,13,5,29,0,0,10,13,5,30,0,0,11,13,5,27,0,0,12,8,1,0,0,0,
  	12,9,1,0,0,0,12,10,1,0,0,0,12,11,1,0,0,0,13,1,1,0,0,0,14,15,6,1,-1,0,
  	15,21,3,0,0,0,16,17,5,6,0,0,17,18,3,2,1,0,18,19,5,7,0,0,19,21,1,0,0,0,
  	20,14,1,0,0,0,20,16,1,0,0,0,21,42,1,0,0,0,22,23,10,6,0,0,23,24,5,18,0,
  	0,24,41,3,2,1,7,25,26,10,5,0,0,26,27,7,0,0,0,27,41,3,2,1,6,28,29,10,4,
  	0,0,29,30,7,1,0,0,30,41,3,2,1,5,31,32,10,3,0,0,32,33,7,2,0,0,33,41,3,
  	2,1,4,34,35,10,2,0,0,35,36,5,23,0,0,36,41,3,2,1,3,37,38,10,1,0,0,38,39,
  	5,24,0,0,39,41,3,2,1,2,40,22,1,0,0,0,40,25,1,0,0,0,40,28,1,0,0,0,40,31,
  	1,0,0,0,40,34,1,0,0,0,40,37,1,0,0,0,41,44,1,0,0,0,42,40,1,0,0,0,42,43,
  	1,0,0,0,43,3,1,0,0,0,44,42,1,0,0,0,45,46,3,2,1,0,46,47,5,27,0,0,47,5,
  	1,0,0,0,48,49,3,4,2,0,49,50,5,11,0,0,50,51,3,2,1,0,51,7,1,0,0,0,4,12,
  	20,40,42
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
//----------------- IntegerContext ------------------------------------------------------------------

tree::TerminalNode* CkuraParser::IntegerContext::Integer() {
  return getToken(CkuraParser::Integer, 0);
}

CkuraParser::IntegerContext::IntegerContext(LiteralValueContext *ctx) { copyFrom(ctx); }


std::any CkuraParser::IntegerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CkuraParserVisitor*>(visitor))
    return parserVisitor->visitInteger(this);
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
//----------------- DecimalContext ------------------------------------------------------------------

tree::TerminalNode* CkuraParser::DecimalContext::Decimal() {
  return getToken(CkuraParser::Decimal, 0);
}

CkuraParser::DecimalContext::DecimalContext(LiteralValueContext *ctx) { copyFrom(ctx); }


std::any CkuraParser::DecimalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CkuraParserVisitor*>(visitor))
    return parserVisitor->visitDecimal(this);
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
    setState(12);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CkuraParser::String: {
        _localctx = _tracker.createInstance<CkuraParser::StringContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(8);
        match(CkuraParser::String);
        break;
      }

      case CkuraParser::Integer: {
        _localctx = _tracker.createInstance<CkuraParser::IntegerContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(9);
        match(CkuraParser::Integer);
        break;
      }

      case CkuraParser::Decimal: {
        _localctx = _tracker.createInstance<CkuraParser::DecimalContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(10);
        match(CkuraParser::Decimal);
        break;
      }

      case CkuraParser::Id: {
        _localctx = _tracker.createInstance<CkuraParser::IdContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(11);
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
    setState(20);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CkuraParser::Id:
      case CkuraParser::String:
      case CkuraParser::Integer:
      case CkuraParser::Decimal: {
        _localctx = _tracker.createInstance<LiteralLevelContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(15);
        literalValue();
        break;
      }

      case CkuraParser::OPEN_PAREN: {
        _localctx = _tracker.createInstance<ParenLevelContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(16);
        match(CkuraParser::OPEN_PAREN);
        setState(17);
        expression(0);
        setState(18);
        match(CkuraParser::CLOSE_PAREN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(42);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(40);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PowerLevelContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(22);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(23);
          antlrcpp::downCast<PowerLevelContext *>(_localctx)->op = match(CkuraParser::POWER);
          setState(24);
          expression(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MultiLevelContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(25);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(26);
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
          setState(27);
          expression(6);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<AddLevelContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(28);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(29);
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
          setState(30);
          expression(5);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<EqLevelContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(31);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(32);
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
          setState(33);
          expression(4);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<AndLevelContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(34);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(35);
          antlrcpp::downCast<AndLevelContext *>(_localctx)->op = match(CkuraParser::AND);
          setState(36);
          expression(3);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<OrLevelContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(37);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(38);
          antlrcpp::downCast<OrLevelContext *>(_localctx)->op = match(CkuraParser::OR);
          setState(39);
          expression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(44);
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
    setState(45);
    expression(0);
    setState(46);
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
    setState(48);
    declareVariable();
    setState(49);
    match(CkuraParser::EQ);
    setState(50);
    expression(0);
   
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
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);
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
