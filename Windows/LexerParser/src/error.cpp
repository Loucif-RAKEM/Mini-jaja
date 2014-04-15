#include <iostream>

extern "C" int yylineno;
extern "C" const char* yytext;
extern "C" int errorsCounter;

using namespace std;

void yyerror(const char* s){
    if(string(s) != "syntax error"){
        cerr << "Erreur lors de l'analyse syntaxique." << s << endl;
    }
    cerr << "Ligne " << yylineno << " : le symbole \"" << yytext << "\" n'était pas attendu ici." << endl;
    ++errorsCounter;
}
