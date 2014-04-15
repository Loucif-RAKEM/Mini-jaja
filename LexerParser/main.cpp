#include <stdlib.h>
#include <cstdio>
#include <iostream>
#include "LibNode/VisitComp.h"

using namespace std;

extern "C" int yyparse();
extern "C" FILE *yyin;
extern "C" int yylineno;
extern "C" const char* yytext;
extern "C" int yydebug;

void yyerror(const char* s){
    cout << "Error : " << s << " at line " << yylineno << " : \"" << yytext << "\" unexpected here." << endl;
}

void onASACompleted(ClassNode* root){
    root->display();
    VisitComp* vc=new VisitComp();
    vc->visitAll(root, "compiled");
}

int main(int argc, char* argv[]){
    //yydebug = 1; // Comment me if you don't want any debug :)
    if(argc >= 2){
        FILE* inputFile = fopen(argv[1], "r");
        if(!inputFile){
            cerr << "Erreur : unable to open file \"" << argv[1] << "\"" << endl;
            return EXIT_FAILURE;
        }else{
            yyin = inputFile;
            yyparse();
            fclose(inputFile);
            inputFile = NULL;
        }
    }else{
        cerr << "Error : too few arguments." << endl; 
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
