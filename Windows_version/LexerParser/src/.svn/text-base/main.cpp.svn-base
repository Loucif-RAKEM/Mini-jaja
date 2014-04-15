#include <stdlib.h>
#include <cstdio>
#include <iostream>

using namespace std;

extern "C" int yyparse();
extern "C" FILE *yyin;
extern "C" int yylineno;
extern "C" const char* yytext;
extern "C" int yydebug;

int main(int argc, char* argv[]){

    yyparse();
    return EXIT_SUCCESS;
}
