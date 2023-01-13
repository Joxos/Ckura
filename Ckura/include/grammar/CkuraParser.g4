parser grammar CkuraParser;
options {
    language = Cpp;
    tokenVocab = CkuraLexer;
}

literalValue
    : String  # string
    | Integer  # integer
    | Decimal  # decimal
    | Id  # id
    ;
expression
    : literalValue # literalLevel
    | OPEN_PAREN expression CLOSE_PAREN  # parenLevel
    | expression op=POWER expression  # powerLevel
    | expression op=(STAR|DIV|MOD) expression  # multiLevel
    | expression op=(ADD|MINUS) expression # addLevel
    | expression op=(EQUAL|NOT_EQ|GREATER_THAN|LESS_THAN) expression  # eqLevel
    | expression op=AND expression  # andLevel
    | expression op=OR expression  # orLevel
    ;
declareVariable
    : expression Id;
defineVariable
    : declareVariable EQ expression;
// statement
//     :
//     ( defineVariable
//     | assignVariable)
//     SEMI_COLON;
// block
//     : defineFunction;
// assignVariable
//     : Id EQ expression;
// defineFunction
//     : Id OPEN_PAREN (argument (COMMA argument)*)? CLOSE_PAREN (ARROW expression)? body;
// argument
//     : defineVariable|declareVariable;
// body
//     : OPEN_BRACE (block|statement)* CLOSE_BRACE;
