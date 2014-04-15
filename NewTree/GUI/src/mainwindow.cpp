#include <stdlib.h>
#include <cstdio>
#include <iostream>
#include <fstream>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "AbstractSyntaxTree.h"
#include "MJJProgram.h"
#include "Interpreter.h"
#include "Compiler.h"

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
    if(openedFile->isOpen()) openedFile->close();

    openedFile->setFileName(fileName);
    openedFile->open(QIODevice::ReadWrite | QIODevice::Text);
    ui->console->append("Opening file " + fileInfo->fileName());

    QTextStream readFile(openedFile);
    ui->textZone->setText(readFile.readAll());
}

void MainWindow::setTreeView()
{
}

void MainWindow::on_fileTree_doubleClicked(const QModelIndex &index)
{
}

void MainWindow::on_actionOuvrir_triggered()
{
    if(openedFile->isOpen()) {
        openedFile->close();
    }

    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::AnyFile);
    dialog.setAcceptMode(QFileDialog::AcceptOpen);
    if(dialog.exec()) {
        ui->actionSauvegarder->setEnabled(true);

        QString selectedFile = dialog.selectedFiles().first();
        openedFile->setFileName(selectedFile);
        fileInfo->setFile(*openedFile);
        openedFile->open(QIODevice::ReadWrite | QIODevice::Text);
        setTreeView();
        readFile(selectedFile);
    }
}

void MainWindow::on_actionQuitter_triggered()
{
    this->close();
}

void MainWindow::on_actionCompiler_triggered()
{
    if(openedFile->exists() && openedFile->isOpen()){
        ui->console->append("Compilation de " + fileInfo->fileName());
        // QProcess process = new QProcess();
        // http://www.qtfr.org/viewtopic.php?id=9275
        /*int fileHandle = openedFile->handle();
          FILE* file = fdopen(fileHandle, "r");*/
        const char* filename = fileInfo->absoluteFilePath().toStdString().c_str();
        FILE* file = fopen(filename, "r");
        if(!file){
            ui->console->append("Err: Le fichier " + fileInfo->absoluteFilePath() + " n'existe pas.");
        }else{
            MJJProgram mjjprogram(filename);
            Compiler::compile(mjjprogram, "compiled");
            FILE* file2 = fopen("compiled.jjc", "r");
            if(file2) {
                QTextStream fileStream(file2);
                ui->textZone2->setText(fileStream.readAll());
            }
            fclose(file2);
        }
        fclose(file);
    } else {
        ui->console->append("Err: Veuillez ouvrir un fichier.");
        return;
    }
}

void MainWindow::on_actionExecuter_triggered()
{
    MJJProgram mjjprogram("program.mjj");
    Interpreter::interpretProgram(mjjprogram);
}


void MainWindow::on_actionFermer_triggered()
{
    if(openedFile->exists() && openedFile->isOpen()) {
        openedFile->close();
        ui->actionSauvegarder->setDisabled(true);
        ui->textZone->clear();
        ui->console->append("Fermeture de " + fileInfo->fileName());
    }
}

void MainWindow::on_actionSauvegarder_sous_triggered()
{
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::AnyFile);
    dialog.setAcceptMode(QFileDialog::AcceptSave);
    //QString selectedFile = dialog.getSaveFileName();
    if(dialog.exec()) {
        ui->actionSauvegarder->setEnabled(true);

        if(openedFile->isOpen()) openedFile->close();
        openedFile->setFileName(dialog.selectedFiles().first());
        if(openedFile->open(QIODevice::ReadWrite | QIODevice::Text)) {
            QString contentFile = ui->textZone->toPlainText();
            openedFile->write(contentFile.toStdString().c_str());
            ui->console->append("Fichier sauvegarde");
        } else {
            ui->console->append("Impossible de sauvegarder");
        }
    }
}

void MainWindow::on_actionSauvegarder_triggered()
{
    if(openedFile->isOpen()) openedFile->close();
    openedFile->open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text);
    QString contentFile = ui->textZone->toPlainText();
    openedFile->reset();
    if(openedFile->write(contentFile.toStdString().c_str())){
        ui->console->append("Fichier sauvegarde");
    }else{
        ui->console->append("Failed to write");
    }
}


void MainWindow::on_actionNouveau_Fichier_triggered()
{
    ui->textZone->clear();
    ui->actionSauvegarder->setDisabled(true);
    ui->console->append("Creation d'un nouveau fichier");
    QString contentFile = ui->textZone->toPlainText();
}

void MainWindow::drawStackFromMemory(Memory mem) {
    // En théorie il reste plus qu'a link a la textView
    Stack<Quadruplet*>* stack = mem.getStack();
    string openTable = "<table border=\"1\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" width=\"100%\" cellspacing=\"2\" cellpadding=\"0\">";
    string topTableRow = "<tr><td><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">";
    string botTableRow = "</span></p></td></tr>";
    string closeTable = "</table>";

    string finalHTML = "";
    finalHTML += openTable;

    LinkedList<Quadruplet*>* ll = stack->getLinkedList();
    int llLength = ll->getLength();

    for (int i = 0; i < llLength; ++i) {
        Quadruplet* current = ll->elementAt(i)->getValue();
        finalHTML += topTableRow;
        finalHTML += "<" + current->getIdentifier();
        finalHTML += ", " + current->getValue();
        finalHTML += ", " + current->getKind();
        finalHTML += ", " + current->getType();
        finalHTML += ">";
        finalHTML += botTableRow +"\n";
    }

    finalHTML += closeTable;

}
