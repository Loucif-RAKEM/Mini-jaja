%{
    #define YY_DECL extern "C" int yylex()

    #include <iostream>
    #include <cstring>
    #include "parser.tab.h"

    using namespace std; 

%}

%option yylineno

LETTER      [a-zA-Z]
DIGIT       [0-9]
NUMBER      {DIGIT}+
CHARACTER   {LETTER}|{NUMBER}|_

%%

[ \t\n]                 {}
"class"                 {return CLASS;}
"{"                     {return O_C_BRACE;}
"}"                     {return C_C_BRACE;}
";"                     {return SEMICOLON;}
"["                     {return O_S_BRACKET;}
"]"                     {return C_S_BRACKET;}
"final"                 {return FINAL;}
"="                     {return EQUAL;}
"("                     {return O_BRACKET;}
")"                     {return C_BRACKET;}
"main"                  {return MAIN;}
","                     {return COMMA;}
"+="                    {return PLUS_EQUAL;}
"++"                    {return INC;}
"return"                {return RETURN;}
"if"                    {return IF;}
"else"                  {return ELSE;}
"while"                 {return WHILE;}
"!"                     {return NOT;}
"&&"                    {return AND;}
"||"                    {return OR;}
"=="                    {return EQUAL_EQUAL;}
">"                     {return GREATER;}
"+"                     {return PLUS;}
"-"                     {return MINUS;}
"*"                     {return TIMES;}
"/"                     {return DIV;}
"true"                  {return TRUE;}
"false"                 {return FALSE;}
"void"                  {return VOID;}
"int"                   {return INT;}
"boolean"               {return BOOLEAN;}
{LETTER}{CHARACTER}*    {yylval.sval = strdup(yytext); return IDENTIFIER;}
{NUMBER}                {yylval.ival = atoi(yytext); return NUMBER;}
.                       {return OTHER;}

%%
