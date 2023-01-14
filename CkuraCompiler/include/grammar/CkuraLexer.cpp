
// Generated from .\CkuraLexer.g4 by ANTLR 4.11.1


#include "CkuraLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct CkuraLexerStaticData final {
  CkuraLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CkuraLexerStaticData(const CkuraLexerStaticData&) = delete;
  CkuraLexerStaticData(CkuraLexerStaticData&&) = delete;
  CkuraLexerStaticData& operator=(const CkuraLexerStaticData&) = delete;
  CkuraLexerStaticData& operator=(CkuraLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag ckuralexerLexerOnceFlag;
CkuraLexerStaticData *ckuralexerLexerStaticData = nullptr;

void ckuralexerLexerInitialize() {
  assert(ckuralexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<CkuraLexerStaticData>(
    std::vector<std::string>{
      "UNDERLINE", "COLON", "SEMI_COLON", "QUOTE", "COMMA", "OPEN_PAREN", 
      "CLOSE_PAREN", "OPEN_BRACE", "CLOSE_BRACE", "ARROW", "EQ", "EQUAL", 
      "NOT_EQ", "GREATER_THAN", "LESS_THAN", "MINUS", "DOT", "POWER", "STAR", 
      "DIV", "MOD", "ADD", "AND", "OR", "INDENT", "RETURN", "Comment", "WS", 
      "NonZeroDigit", "Digit", "Alpha", "Char", "Id", "String", "Integer", 
      "Number"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,31,210,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,
  	1,8,1,8,1,9,1,9,1,9,1,10,1,10,1,11,1,11,1,11,1,12,1,12,1,12,1,13,1,13,
  	1,14,1,14,1,15,1,15,1,16,1,16,1,17,1,17,1,17,1,18,1,18,1,19,1,19,1,20,
  	1,20,1,21,1,21,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,24,1,24,1,24,1,24,
  	1,24,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,26,1,26,1,26,5,26,144,8,26,
  	10,26,12,26,147,9,26,1,26,1,26,1,27,4,27,152,8,27,11,27,12,27,153,1,27,
  	1,27,1,28,1,28,1,29,1,29,3,29,162,8,29,1,30,1,30,1,31,1,31,3,31,168,8,
  	31,1,32,1,32,3,32,172,8,32,1,32,1,32,5,32,176,8,32,10,32,12,32,179,9,
  	32,1,33,1,33,4,33,183,8,33,11,33,12,33,184,1,33,1,33,1,34,1,34,5,34,191,
  	8,34,10,34,12,34,194,9,34,1,34,3,34,197,8,34,1,35,1,35,1,35,5,35,202,
  	8,35,10,35,12,35,205,9,35,1,35,1,35,3,35,209,8,35,1,184,0,36,1,1,3,2,
  	5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,
  	16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,
  	55,28,57,0,59,0,61,0,63,0,65,29,67,30,69,0,71,31,1,0,5,2,0,10,10,12,13,
  	3,0,9,10,12,13,32,32,1,0,49,57,2,0,65,90,97,122,4,0,10,10,13,13,34,34,
  	92,92,216,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,
  	0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,
  	1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,
  	0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,
  	0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,
  	1,0,0,0,0,55,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,71,1,0,0,0,1,73,1,0,
  	0,0,3,75,1,0,0,0,5,77,1,0,0,0,7,79,1,0,0,0,9,81,1,0,0,0,11,83,1,0,0,0,
  	13,85,1,0,0,0,15,87,1,0,0,0,17,89,1,0,0,0,19,91,1,0,0,0,21,94,1,0,0,0,
  	23,96,1,0,0,0,25,99,1,0,0,0,27,102,1,0,0,0,29,104,1,0,0,0,31,106,1,0,
  	0,0,33,108,1,0,0,0,35,110,1,0,0,0,37,113,1,0,0,0,39,115,1,0,0,0,41,117,
  	1,0,0,0,43,119,1,0,0,0,45,121,1,0,0,0,47,125,1,0,0,0,49,128,1,0,0,0,51,
  	133,1,0,0,0,53,140,1,0,0,0,55,151,1,0,0,0,57,157,1,0,0,0,59,161,1,0,0,
  	0,61,163,1,0,0,0,63,167,1,0,0,0,65,171,1,0,0,0,67,180,1,0,0,0,69,196,
  	1,0,0,0,71,198,1,0,0,0,73,74,5,95,0,0,74,2,1,0,0,0,75,76,5,58,0,0,76,
  	4,1,0,0,0,77,78,5,59,0,0,78,6,1,0,0,0,79,80,5,34,0,0,80,8,1,0,0,0,81,
  	82,5,44,0,0,82,10,1,0,0,0,83,84,5,40,0,0,84,12,1,0,0,0,85,86,5,41,0,0,
  	86,14,1,0,0,0,87,88,5,123,0,0,88,16,1,0,0,0,89,90,5,125,0,0,90,18,1,0,
  	0,0,91,92,5,45,0,0,92,93,5,62,0,0,93,20,1,0,0,0,94,95,5,61,0,0,95,22,
  	1,0,0,0,96,97,5,61,0,0,97,98,5,61,0,0,98,24,1,0,0,0,99,100,5,33,0,0,100,
  	101,5,61,0,0,101,26,1,0,0,0,102,103,5,62,0,0,103,28,1,0,0,0,104,105,5,
  	60,0,0,105,30,1,0,0,0,106,107,5,45,0,0,107,32,1,0,0,0,108,109,5,46,0,
  	0,109,34,1,0,0,0,110,111,5,42,0,0,111,112,5,42,0,0,112,36,1,0,0,0,113,
  	114,5,42,0,0,114,38,1,0,0,0,115,116,5,47,0,0,116,40,1,0,0,0,117,118,5,
  	37,0,0,118,42,1,0,0,0,119,120,5,43,0,0,120,44,1,0,0,0,121,122,5,97,0,
  	0,122,123,5,110,0,0,123,124,5,100,0,0,124,46,1,0,0,0,125,126,5,111,0,
  	0,126,127,5,114,0,0,127,48,1,0,0,0,128,129,5,32,0,0,129,130,5,32,0,0,
  	130,131,5,32,0,0,131,132,5,32,0,0,132,50,1,0,0,0,133,134,5,114,0,0,134,
  	135,5,101,0,0,135,136,5,116,0,0,136,137,5,117,0,0,137,138,5,114,0,0,138,
  	139,5,110,0,0,139,52,1,0,0,0,140,141,3,39,19,0,141,145,3,39,19,0,142,
  	144,8,0,0,0,143,142,1,0,0,0,144,147,1,0,0,0,145,143,1,0,0,0,145,146,1,
  	0,0,0,146,148,1,0,0,0,147,145,1,0,0,0,148,149,6,26,0,0,149,54,1,0,0,0,
  	150,152,7,1,0,0,151,150,1,0,0,0,152,153,1,0,0,0,153,151,1,0,0,0,153,154,
  	1,0,0,0,154,155,1,0,0,0,155,156,6,27,0,0,156,56,1,0,0,0,157,158,7,2,0,
  	0,158,58,1,0,0,0,159,162,5,48,0,0,160,162,3,57,28,0,161,159,1,0,0,0,161,
  	160,1,0,0,0,162,60,1,0,0,0,163,164,7,3,0,0,164,62,1,0,0,0,165,168,3,59,
  	29,0,166,168,3,61,30,0,167,165,1,0,0,0,167,166,1,0,0,0,168,64,1,0,0,0,
  	169,172,3,61,30,0,170,172,3,1,0,0,171,169,1,0,0,0,171,170,1,0,0,0,172,
  	177,1,0,0,0,173,176,3,63,31,0,174,176,3,1,0,0,175,173,1,0,0,0,175,174,
  	1,0,0,0,176,179,1,0,0,0,177,175,1,0,0,0,177,178,1,0,0,0,178,66,1,0,0,
  	0,179,177,1,0,0,0,180,182,3,7,3,0,181,183,8,4,0,0,182,181,1,0,0,0,183,
  	184,1,0,0,0,184,185,1,0,0,0,184,182,1,0,0,0,185,186,1,0,0,0,186,187,3,
  	7,3,0,187,68,1,0,0,0,188,192,3,57,28,0,189,191,3,59,29,0,190,189,1,0,
  	0,0,191,194,1,0,0,0,192,190,1,0,0,0,192,193,1,0,0,0,193,197,1,0,0,0,194,
  	192,1,0,0,0,195,197,5,48,0,0,196,188,1,0,0,0,196,195,1,0,0,0,197,70,1,
  	0,0,0,198,208,3,69,34,0,199,203,3,33,16,0,200,202,3,59,29,0,201,200,1,
  	0,0,0,202,205,1,0,0,0,203,201,1,0,0,0,203,204,1,0,0,0,204,206,1,0,0,0,
  	205,203,1,0,0,0,206,207,3,57,28,0,207,209,1,0,0,0,208,199,1,0,0,0,208,
  	209,1,0,0,0,209,72,1,0,0,0,13,0,145,153,161,167,171,175,177,184,192,196,
  	203,208,1,0,1,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  ckuralexerLexerStaticData = staticData.release();
}

}

CkuraLexer::CkuraLexer(CharStream *input) : Lexer(input) {
  CkuraLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *ckuralexerLexerStaticData->atn, ckuralexerLexerStaticData->decisionToDFA, ckuralexerLexerStaticData->sharedContextCache);
}

CkuraLexer::~CkuraLexer() {
  delete _interpreter;
}

std::string CkuraLexer::getGrammarFileName() const {
  return "CkuraLexer.g4";
}

const std::vector<std::string>& CkuraLexer::getRuleNames() const {
  return ckuralexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& CkuraLexer::getChannelNames() const {
  return ckuralexerLexerStaticData->channelNames;
}

const std::vector<std::string>& CkuraLexer::getModeNames() const {
  return ckuralexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& CkuraLexer::getVocabulary() const {
  return ckuralexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CkuraLexer::getSerializedATN() const {
  return ckuralexerLexerStaticData->serializedATN;
}

const atn::ATN& CkuraLexer::getATN() const {
  return *ckuralexerLexerStaticData->atn;
}




void CkuraLexer::initialize() {
  ::antlr4::internal::call_once(ckuralexerLexerOnceFlag, ckuralexerLexerInitialize);
}
