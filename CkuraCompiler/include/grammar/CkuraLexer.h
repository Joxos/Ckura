
// Generated from .\CkuraLexer.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  CkuraLexer : public antlr4::Lexer {
public:
  enum {
    UNDERLINE = 1, COLON = 2, SEMI_COLON = 3, QUOTE = 4, COMMA = 5, OPEN_PAREN = 6, 
    CLOSE_PAREN = 7, OPEN_BRACE = 8, CLOSE_BRACE = 9, ARROW = 10, EQ = 11, 
    EQUAL = 12, NOT_EQ = 13, GREATER_THAN = 14, LESS_THAN = 15, MINUS = 16, 
    DOT = 17, POWER = 18, STAR = 19, DIV = 20, MOD = 21, ADD = 22, AND = 23, 
    OR = 24, Comment = 25, WS = 26, Id = 27, String = 28, Integer = 29, 
    Decimal = 30
  };

  explicit CkuraLexer(antlr4::CharStream *input);

  ~CkuraLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

