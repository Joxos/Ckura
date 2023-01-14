// antlr4.exe -no-listener -visitor .\CkuraLexer.g4 .\CkuraParser.g4
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
INDENT: '    ';
RETURN: 'return';

Comment
    : DIV DIV ~[\r\n\f]* -> channel(HIDDEN);
WS
    : [ \r\n\t\f]+ -> channel(HIDDEN);

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
fragment Integer
    : (NonZeroDigit Digit*)|'0';
Number
    : Integer (DOT Digit* NonZeroDigit)?;
