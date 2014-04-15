/*#include <stdlib.h>
#include <cstdio>
#include <iostream>
#include <fstream>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "AbstractSyntaxTree.h"
#include "MJJProgram.h"
#include "Interpreter.h"

extern "C" int yyparse();
extern "C++" void yyerror();
extern "C" FILE *yyin;
extern "C" const char* yytext;
extern "C" int yydebug;

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    openedFile = new QFile();
    fileInfo = new QFileInfo();

    fileModel = new QDirModel(this);
    fileModel->setSorting(QDir::DirsFirst | QDir::IgnoreCase | QDir::Name);
}

MainWindow::~MainWindow()
{
    openedFile->close();
    delete ui;
    delete openedFile;
    delete fileInfo;
    delete fileModel;
}

void MainWindow::readFile(QString fileName)
{
}

void MainWindow::setTreeView()
{
}

void MainWindow::on_fileTree_doubleClicked(const QModelIndex &index)
{
}

void MainWindow::on_actionOuvrir_triggered()
{
}

void MainWindow::on_actionQuitter_triggered()
{
    this->close();
}

void MainWindow::on_actionCompiler_triggered()
{
    FILE* file = fopen("fich.mjj", "r");
    yyin = file;
    yyparse();
}

void MainWindow::on_actionExecuter_triggered()
{
    MJJProgram mjjprogram("/home/stratosphr/Programming/C++/Comp/SVN/NewTree/GUI/program.mjj");
    Interpreter::interpretProgram(mjjprogram);
}


void MainWindow::on_actionFermer_triggered()
{
}

void MainWindow::on_actionSauvegarder_sous_triggered()
{
}

void MainWindow::on_actionSauvegarder_triggered()
{
}


void MainWindow::on_actionNouveau_Fichier_triggered()
{
}
*/
