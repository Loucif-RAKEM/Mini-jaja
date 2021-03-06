#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QFileInfo>
#include <QDirModel>
#include <QtCore>
#include <QtGui>
#include <iostream>
#include <QPair>
#include "Memory.h"
class Node;

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:
        static MainWindow* getSingleton();
        void showError(string error);
        void readFile(QString fileName);
        void setTreeView();
        LinkedList<QPair<Node*, int> >* liste;
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

        void drawStackFromMemory(Memory* mem);

        void on_actionExecuter_JJC_triggered();

        void on_ExecutePasAPasMJJ_triggered();

        void on_ExecutePasAPasJJC_triggered();

        void on_actionArretMJJ_triggered();

        void on_actionArretJJC_triggered();

        void on_actionAnnuler_triggered();

        void on_actionA_propos_triggered();

        void on_actionRestaurer_triggered();

        void on_action800x600_triggered();

        void on_action1080x720_triggered();

    private:
        explicit MainWindow(QWidget *parent = 0);
        static MainWindow* singleton;
        Ui::MainWindow *ui;
        QDirModel *fileModel;
        QFile *openedFile;
        QFileInfo *fileInfo;
        int mjjStep;
        int jjcFlag;
};

#endif // MAINWINDOW_H
