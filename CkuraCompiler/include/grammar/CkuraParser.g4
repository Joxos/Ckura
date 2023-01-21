parser grammar CkuraParser;
options {
    language = Cpp;
    tokenVocab = CkuraLexer;
}

// expression part
literalValue
    : String  # string
    | Number # number
    | Id  # id
    ;
expression
    : functionCall  # funcCallLevel
    | literalValue # literalLevel
    | OPEN_PAREN expression CLOSE_PAREN  # parenLevel
    | expression op=POWER expression  # powerLevel
    | expression op=(STAR|DIV|MOD) expression  # multiLevel
    | expression op=(ADD|MINUS) expression # addLevel
    | MINUS literalValue # minusLevel
    | expression op=(EQUAL|NOT_EQ|GREATER_THAN|LESS_THAN) expression  # eqLevel
    | expression op=AND expression  # andLevel
    | expression op=OR expression  # orLevel
    ;

// variable part
declareVariable
    : expression Id;
defineVariable
    : declareVariable EQ expression;

// function part
functionBody
    : unit*;
functionDeclareVariable
    : Id;
functionArgument
    : functionDeclareVariable;
functionHead
    : returnType=Id functionName=Id OPEN_PAREN (functionArgument COMMA)* functionArgument CLOSE_PAREN;
functionReturn
    : RETURN expression;
defineFunction
    : functionHead OPEN_BRACE functionBody CLOSE_BRACE;
functionCall
    : Id OPEN_PAREN (expression COMMA)* expression CLOSE_PAREN;

// top-level parser
statement
    :
    (defineVariable
    | functionReturn
    | functionCall)
    SEMI_COLON
    ;
block: defineFunction;
unit: statement|block;
module: unit* EOF;
