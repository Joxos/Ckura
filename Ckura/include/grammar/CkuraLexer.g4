lexer grammar CkuraLexer;
options { language=Cpp; }

UNDERLINE: '_';
COLON: ':';
SEMI_COLON: ';';
QUOTE: '"';
COMMA: ',';
OPEN_PAREN: '(';
CLOSE_PAREN: ')';
OPEN_BRACE: '{';
CLOSE_BRACE: '}';
ARROW: '->';
EQ: '=';
EQUAL: '==';
NOT_EQ: '!=';
GREATER_THAN: '>';
LESS_THAN: '<';
MINUS: '-';
DOT: '.';
POWER: '**';
STAR: '*';
DIV: '/';
MOD: '%';
ADD: '+';
AND: 'and';
OR: 'or';

Comment
    : DIV DIV ~[\r\n\f]* -> channel(HIDDEN);
WS
    : [ \r\t\n\f]+ -> channel(HIDDEN);

fragment NonZeroDigit
    : [1-9];
fragment Digit
    : '0'|NonZeroDigit;
fragment Alpha
    : [a-zA-Z];
fragment Char
    : Digit|Alpha;
Id
    : (Alpha|UNDERLINE) (Char|UNDERLINE)*;
String
    : QUOTE ~["\\\r\n]+? QUOTE;
// TODO: MINUS Lex
Integer
    : (NonZeroDigit Digit*)|'0';
Decimal
    : Integer DOT Digit* NonZeroDigit;

