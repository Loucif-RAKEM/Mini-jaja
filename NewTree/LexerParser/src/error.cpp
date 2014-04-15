#include <iostream>

extern "C" int yylineno;
extern "C" const char* yytext;

using namespace std;

void yyerror(const char* s){
    cout << "Error : " << s << " at line " << yylineno << " : \"" << yytext << "\" unexpected here." << endl;
}
