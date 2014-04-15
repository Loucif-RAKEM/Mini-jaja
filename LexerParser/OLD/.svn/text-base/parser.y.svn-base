%{
    #include <cstdio>
    #include <iostream>

    #define YYDEBUG 1

    extern "C" int yylex();
    extern "C" int yyparse();
    extern "C" FILE *yyin;
    extern "C" int yylineno;
    extern "C" const char* yytext;

    using namespace std;

    void yyerror(const char *s);

%}

%union{
    int ival;
    const char* sval;
}

%token CLASS FINAL MAIN IF ELSE WHILE TRUE FALSE RETURN
%token VOID INT BOOLEAN
%token EQUAL PLUS_EQUAL INC NOT AND OR EQUAL_EQUAL GREATER PLUS MINUS TIMES DIV
%token O_C_BRACE C_C_BRACE SEMICOLON O_S_BRACKET C_S_BRACKET O_BRACKET C_BRACKET COMMA
%token <ival> NUMBER
%token <sval> IDENTIFIER OTHER

%type<sval> ident;

%%

start:
     classe
    ;

classe:
        CLASS ident O_C_BRACE decls methmain C_C_BRACE
    ;

ident:
        IDENTIFIER
    ;

decls:
        decl SEMICOLON decls
    |
    ; 

decl:
        var
    |   methode
    ;

vars:
        var SEMICOLON vars
    |
    ;

var:
        typemeth ident vexp
    |   typemeth ident O_S_BRACKET exp C_S_BRACKET
    |   FINAL type ident vexp
    ;

vexp:
        EQUAL exp
    |
    ;

methode:
        typemeth ident O_BRACKET entetes C_BRACKET O_C_BRACE vars instrs C_C_BRACE
    ;

methmain:
        MAIN O_C_BRACE vars instrs C_C_BRACE
    ;

entetes:
        entete COMMA entetes
    |   entete
    |
    ;

entete:
        type ident
    ;

instrs:
        instr SEMICOLON instrs
    |
    ;

instr:
        ident1 EQUAL exp
    |   ident1 PLUS_EQUAL exp
    |   ident1 INC
    |   ident O_BRACKET listexp C_BRACKET
    |   RETURN exp
    |   IF exp O_C_BRACE instrs C_C_BRACE ELSE O_C_BRACE instrs C_C_BRACE
    |   IF exp O_C_BRACE instrs C_C_BRACE
    |   WHILE O_BRACKET exp C_BRACKET O_C_BRACE instrs C_C_BRACE
    ;

listexp:
        exp COMMA listexp
    |   exp
    |
    ;

exp:
        NOT exp1
    |   exp AND exp1
    |   exp OR exp1
    |   exp1
    ;

exp1:
        exp1 EQUAL_EQUAL exp2
    |   exp1 GREATER exp2
    |   exp2
    ;

exp2:
        exp2 PLUS terme
    |   exp2 MINUS terme
    |   MINUS terme
    |   terme
    ;

terme:
        terme TIMES fact
    |   terme DIV fact
    |   fact
    ;

fact:
        ident1
    |   ident O_BRACKET listexp C_BRACKET
    |   TRUE
    |   FALSE
    |   NUMBER
    |   O_BRACKET exp C_BRACKET
    ;

ident1:
        ident
    |   ident O_S_BRACKET exp C_S_BRACKET
    ;

typemeth:
        VOID
    |   type
    ;

type:
        INT
    |   BOOLEAN
    ;

%%

void yyerror(const char* s){
	cout << "Error : " << s << " at line " << yylineno << " : \"" << yytext << "\" unexpected here. If \"" << yytext << "\" is what you meant, probably the previous token is erroneous or something is missing just before \"" << yytext << "\"." << endl;
}

int main(int argc, char* argv[]){
    //yydebug = true; // Comment me to disable debugging
	FILE* inputFile = fopen(argv[1], "r");
	if(!inputFile) cout << "Error : unable to open " << argv[1] << endl;	
	yyin = inputFile;
	yyparse();

    return 0;
}
