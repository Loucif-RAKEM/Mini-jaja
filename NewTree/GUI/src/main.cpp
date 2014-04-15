#include "mainwindow.h"
#include <QApplication>
#include <iostream>

extern "C" int yylineno;
extern "C" const char* yytext;

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
