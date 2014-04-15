#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include "LibNode/VisitComp.h"

extern "C" int yylineno;
extern "C" const char* yytext;

using namespace std;

void yyerror(const char* s){
    cout << "Error : " << s << " at line " << yylineno << " : \"" << yytext << "\" unexpected here." << endl;
}

void die(const std::string error){
    cerr << error << endl;
    exit(1);
}

void onASACompleted(ClassNode* root){
    root->display();
    VisitComp* vc = new VisitComp();
    vc->visitAll(root, "compiled");
    delete vc;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
