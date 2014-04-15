/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu Nov 21 17:43:24 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

/*#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QTreeView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCompiler;
    QAction *actionExecuter;
    QAction *actionOuvrir;
    QAction *actionSauvegarder;
    QAction *actionQuitter;
    QAction *actionFermer;
    QAction *actionSauvegarder_sous;
    QAction *actionNouveau_Fichier;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QTextEdit *textZone;
    QTreeView *fileTree;
    QTextBrowser *console;
    QMenuBar *menuBar;
    QMenu *menufichier;
    QMenu *menuEdition;
    QMenu *menuCompiler;
    QMenu *menuOutils;
    QMenu *menuFenetre;
    QMenu *menuAide;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        actionCompiler = new QAction(MainWindow);
        actionCompiler->setObjectName(QString::fromUtf8("actionCompiler"));
        actionExecuter = new QAction(MainWindow);
        actionExecuter->setObjectName(QString::fromUtf8("actionExecuter"));
        actionOuvrir = new QAction(MainWindow);
        actionOuvrir->setObjectName(QString::fromUtf8("actionOuvrir"));
        actionSauvegarder = new QAction(MainWindow);
        actionSauvegarder->setObjectName(QString::fromUtf8("actionSauvegarder"));
        actionSauvegarder->setEnabled(false);
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionFermer = new QAction(MainWindow);
        actionFermer->setObjectName(QString::fromUtf8("actionFermer"));
        actionSauvegarder_sous = new QAction(MainWindow);
        actionSauvegarder_sous->setObjectName(QString::fromUtf8("actionSauvegarder_sous"));
        actionNouveau_Fichier = new QAction(MainWindow);
        actionNouveau_Fichier->setObjectName(QString::fromUtf8("actionNouveau_Fichier"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(6, 6, 6, 6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        textZone = new QTextEdit(centralWidget);
        textZone->setObjectName(QString::fromUtf8("textZone"));
        textZone->setEnabled(true);
        textZone->setStyleSheet(QString::fromUtf8("background: white; color: black;"));

        gridLayout_2->addWidget(textZone, 0, 2, 1, 1);

        fileTree = new QTreeView(centralWidget);
        fileTree->setObjectName(QString::fromUtf8("fileTree"));
        fileTree->setMaximumSize(QSize(200, 16777215));
        fileTree->setStyleSheet(QString::fromUtf8("background: white; color:black"));
        fileTree->setProperty("showDropIndicator", QVariant(false));
        fileTree->setDragEnabled(true);
        fileTree->setDragDropMode(QAbstractItemView::DragDrop);

        gridLayout_2->addWidget(fileTree, 0, 0, 2, 1);

        console = new QTextBrowser(centralWidget);
        console->setObjectName(QString::fromUtf8("console"));
        console->setMaximumSize(QSize(16777215, 150));
        console->setStyleSheet(QString::fromUtf8("background: black;"));

        gridLayout_2->addWidget(console, 1, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menufichier = new QMenu(menuBar);
        menufichier->setObjectName(QString::fromUtf8("menufichier"));
        menuEdition = new QMenu(menuBar);
        menuEdition->setObjectName(QString::fromUtf8("menuEdition"));
        menuCompiler = new QMenu(menuBar);
        menuCompiler->setObjectName(QString::fromUtf8("menuCompiler"));
        menuOutils = new QMenu(menuBar);
        menuOutils->setObjectName(QString::fromUtf8("menuOutils"));
        menuFenetre = new QMenu(menuBar);
        menuFenetre->setObjectName(QString::fromUtf8("menuFenetre"));
        menuAide = new QMenu(menuBar);
        menuAide->setObjectName(QString::fromUtf8("menuAide"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menufichier->menuAction());
        menuBar->addAction(menuEdition->menuAction());
        menuBar->addAction(menuCompiler->menuAction());
        menuBar->addAction(menuOutils->menuAction());
        menuBar->addAction(menuFenetre->menuAction());
        menuBar->addAction(menuAide->menuAction());
        menufichier->addAction(actionOuvrir);
        menufichier->addAction(actionNouveau_Fichier);
        menufichier->addAction(actionSauvegarder);
        menufichier->addAction(actionSauvegarder_sous);
        menufichier->addSeparator();
        menufichier->addAction(actionFermer);
        menufichier->addSeparator();
        menufichier->addAction(actionQuitter);
        mainToolBar->addAction(actionCompiler);
        mainToolBar->addAction(actionExecuter);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionCompiler->setText(QApplication::translate("MainWindow", "Compiler", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCompiler->setToolTip(QApplication::translate("MainWindow", "Lancer la compilation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionExecuter->setText(QApplication::translate("MainWindow", "Executer", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionExecuter->setToolTip(QApplication::translate("MainWindow", "Lancer l'\303\251xecution", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionOuvrir->setText(QApplication::translate("MainWindow", "Ouvrir", 0, QApplication::UnicodeUTF8));
        actionSauvegarder->setText(QApplication::translate("MainWindow", "Sauvegarder", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", 0, QApplication::UnicodeUTF8));
        actionFermer->setText(QApplication::translate("MainWindow", "Fermer", 0, QApplication::UnicodeUTF8));
        actionSauvegarder_sous->setText(QApplication::translate("MainWindow", "Sauvegarder sous ...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSauvegarder_sous->setToolTip(QApplication::translate("MainWindow", "Sauvegarder sous", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionNouveau_Fichier->setText(QApplication::translate("MainWindow", "Nouveau Fichier", 0, QApplication::UnicodeUTF8));
        console->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Liberation Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#11ff00;\">[Console]</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        menufichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0, QApplication::UnicodeUTF8));
        menuEdition->setTitle(QApplication::translate("MainWindow", "Edition", 0, QApplication::UnicodeUTF8));
        menuCompiler->setTitle(QApplication::translate("MainWindow", "Compiler", 0, QApplication::UnicodeUTF8));
        menuOutils->setTitle(QApplication::translate("MainWindow", "Outils", 0, QApplication::UnicodeUTF8));
        menuFenetre->setTitle(QApplication::translate("MainWindow", "Fenetre", 0, QApplication::UnicodeUTF8));
        menuAide->setTitle(QApplication::translate("MainWindow", "Aide", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
*/
