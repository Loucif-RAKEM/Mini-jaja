/*#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QFileInfo>
#include <QDirModel>
#include <QtCore>
#include <QtGui>
#include <iostream>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void readFile(QString fileName);
    void setTreeView();
    ~MainWindow();

private slots:
    void on_actionOuvrir_triggered();

    void on_fileTree_doubleClicked(const QModelIndex &index);

    void on_actionQuitter_triggered();

    void on_actionCompiler_triggered();

    void on_actionExecuter_triggered();

    void on_actionFermer_triggered();

    void on_actionSauvegarder_triggered();

    void on_actionSauvegarder_sous_triggered();

    void on_actionNouveau_Fichier_triggered();

private:
    Ui::MainWindow *ui;
    QDirModel *fileModel;
    QFile *openedFile;
    QFileInfo *fileInfo;
};

#endif // MAINWINDOW_H
*/
