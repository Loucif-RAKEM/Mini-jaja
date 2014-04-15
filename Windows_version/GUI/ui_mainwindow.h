/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Dec 13 00:41:05 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "codeeditor.h"

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
    QAction *actionExecuter_JJC;
    QAction *ExecutePasAPasMJJ;
    QAction *ExecutePasAPasJJC;
    QAction *actionArretMJJ;
    QAction *actionArretJJC;
    QAction *actionAnnuler;
    QAction *actionRestaurer;
    QAction *actionCompiler_2;
    QAction *actionInterpreter_le_MiniJaJa;
    QAction *actionInterpreter_JaJaCode;
    QAction *actionA_propos;
    QAction *action800x600;
    QAction *action1080x720;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QTreeView *fileTree;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QVBoxLayout *verticalLayout;
    CodeEditor *textZone;
    QWidget *tabJajaCode;
    QVBoxLayout *verticalLayout_2;
    CodeEditor *textZone2;
    QTextBrowser *console;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *textMemo;
    QMenuBar *menuBar;
    QMenu *menufichier;
    QMenu *menuEdition;
    QMenu *menuCompiler;
    QMenu *menuFenetre;
    QMenu *menuRedimmensionner;
    QMenu *menuAide;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(943, 602);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        actionCompiler = new QAction(MainWindow);
        actionCompiler->setObjectName(QString::fromUtf8("actionCompiler"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icons/1386190814_compile.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCompiler->setIcon(icon);
        actionExecuter = new QAction(MainWindow);
        actionExecuter->setObjectName(QString::fromUtf8("actionExecuter"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/icons/1386189852_Play2Hot.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExecuter->setIcon(icon1);
        actionOuvrir = new QAction(MainWindow);
        actionOuvrir->setObjectName(QString::fromUtf8("actionOuvrir"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/icons/1386824145_Open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOuvrir->setIcon(icon2);
        actionSauvegarder = new QAction(MainWindow);
        actionSauvegarder->setObjectName(QString::fromUtf8("actionSauvegarder"));
        actionSauvegarder->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/icons/1386824052_floppy_disk_save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSauvegarder->setIcon(icon3);
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/icons/1386824183_exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuitter->setIcon(icon4);
        actionFermer = new QAction(MainWindow);
        actionFermer->setObjectName(QString::fromUtf8("actionFermer"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/icons/1386824175_cross-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFermer->setIcon(icon5);
        actionSauvegarder_sous = new QAction(MainWindow);
        actionSauvegarder_sous->setObjectName(QString::fromUtf8("actionSauvegarder_sous"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/icons/1386824097_filesaveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSauvegarder_sous->setIcon(icon6);
        actionNouveau_Fichier = new QAction(MainWindow);
        actionNouveau_Fichier->setObjectName(QString::fromUtf8("actionNouveau_Fichier"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/icons/1386824125_document-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNouveau_Fichier->setIcon(icon7);
        actionExecuter_JJC = new QAction(MainWindow);
        actionExecuter_JJC->setObjectName(QString::fromUtf8("actionExecuter_JJC"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/icons/1386189852_Play1Hot.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExecuter_JJC->setIcon(icon8);
        ExecutePasAPasMJJ = new QAction(MainWindow);
        ExecutePasAPasMJJ->setObjectName(QString::fromUtf8("ExecutePasAPasMJJ"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/icons/1386189806_step-forward2.png"), QSize(), QIcon::Normal, QIcon::Off);
        ExecutePasAPasMJJ->setIcon(icon9);
        ExecutePasAPasJJC = new QAction(MainWindow);
        ExecutePasAPasJJC->setObjectName(QString::fromUtf8("ExecutePasAPasJJC"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/icons/1386189806_step-forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        ExecutePasAPasJJC->setIcon(icon10);
        actionArretMJJ = new QAction(MainWindow);
        actionArretMJJ->setObjectName(QString::fromUtf8("actionArretMJJ"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/new/icons/1386189589_gtk-stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionArretMJJ->setIcon(icon11);
        actionArretJJC = new QAction(MainWindow);
        actionArretJJC->setObjectName(QString::fromUtf8("actionArretJJC"));
        actionArretJJC->setIcon(icon11);
        actionAnnuler = new QAction(MainWindow);
        actionAnnuler->setObjectName(QString::fromUtf8("actionAnnuler"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/new/icons/1386824269_Undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAnnuler->setIcon(icon12);
        actionRestaurer = new QAction(MainWindow);
        actionRestaurer->setObjectName(QString::fromUtf8("actionRestaurer"));
        actionRestaurer->setEnabled(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/new/icons/1386824300_Redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRestaurer->setIcon(icon13);
        actionCompiler_2 = new QAction(MainWindow);
        actionCompiler_2->setObjectName(QString::fromUtf8("actionCompiler_2"));
        actionInterpreter_le_MiniJaJa = new QAction(MainWindow);
        actionInterpreter_le_MiniJaJa->setObjectName(QString::fromUtf8("actionInterpreter_le_MiniJaJa"));
        actionInterpreter_JaJaCode = new QAction(MainWindow);
        actionInterpreter_JaJaCode->setObjectName(QString::fromUtf8("actionInterpreter_JaJaCode"));
        actionA_propos = new QAction(MainWindow);
        actionA_propos->setObjectName(QString::fromUtf8("actionA_propos"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/new/icons/1386824446_Information.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionA_propos->setIcon(icon14);
        action800x600 = new QAction(MainWindow);
        action800x600->setObjectName(QString::fromUtf8("action800x600"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/new/icons/1386824597_layer_resize.png"), QSize(), QIcon::Normal, QIcon::Off);
        action800x600->setIcon(icon15);
        action1080x720 = new QAction(MainWindow);
        action1080x720->setObjectName(QString::fromUtf8("action1080x720"));
        action1080x720->setIcon(icon15);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(6, 6, 6, 6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        fileTree = new QTreeView(centralWidget);
        fileTree->setObjectName(QString::fromUtf8("fileTree"));
        fileTree->setMaximumSize(QSize(200, 16777215));
        fileTree->setStyleSheet(QString::fromUtf8("background: white; color:black"));
        fileTree->setProperty("showDropIndicator", QVariant(false));
        fileTree->setDragEnabled(true);
        fileTree->setDragDropMode(QAbstractItemView::DragDrop);

        gridLayout_2->addWidget(fileTree, 1, 0, 2, 1);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::South);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        verticalLayout = new QVBoxLayout(tab1);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textZone = new CodeEditor(tab1);
        textZone->setObjectName(QString::fromUtf8("textZone"));
        textZone->setEnabled(true);
        textZone->setStyleSheet(QString::fromUtf8("background: white; color: black;"));

        verticalLayout->addWidget(textZone);

        tabWidget->addTab(tab1, QString());
        tabJajaCode = new QWidget();
        tabJajaCode->setObjectName(QString::fromUtf8("tabJajaCode"));
        verticalLayout_2 = new QVBoxLayout(tabJajaCode);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        textZone2 = new CodeEditor(tabJajaCode);
        textZone2->setObjectName(QString::fromUtf8("textZone2"));
        textZone2->setStyleSheet(QString::fromUtf8("background: white; color: black;"));

        verticalLayout_2->addWidget(textZone2);

        tabWidget->addTab(tabJajaCode, QString());

        gridLayout_2->addWidget(tabWidget, 1, 1, 1, 1);

        console = new QTextBrowser(centralWidget);
        console->setObjectName(QString::fromUtf8("console"));
        console->setMaximumSize(QSize(16777215, 150));
        console->setStyleSheet(QString::fromUtf8("background: black;\n"
"color: white;\n"
""));

        gridLayout_2->addWidget(console, 2, 1, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(200, 250));
        groupBox->setMaximumSize(QSize(300, 16777215));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setContentsMargins(2, 2, 2, 2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        textMemo = new QTextEdit(groupBox);
        textMemo->setObjectName(QString::fromUtf8("textMemo"));
        textMemo->setStyleSheet(QString::fromUtf8("all{\n"
"background-color:white;\n"
"}\n"
".td{\n"
"border-color: red;\n"
"}"));

        verticalLayout_3->addWidget(textMemo);


        gridLayout_2->addWidget(groupBox, 1, 2, 2, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 943, 21));
        menufichier = new QMenu(menuBar);
        menufichier->setObjectName(QString::fromUtf8("menufichier"));
        menuEdition = new QMenu(menuBar);
        menuEdition->setObjectName(QString::fromUtf8("menuEdition"));
        menuCompiler = new QMenu(menuBar);
        menuCompiler->setObjectName(QString::fromUtf8("menuCompiler"));
        menuFenetre = new QMenu(menuBar);
        menuFenetre->setObjectName(QString::fromUtf8("menuFenetre"));
        menuRedimmensionner = new QMenu(menuFenetre);
        menuRedimmensionner->setObjectName(QString::fromUtf8("menuRedimmensionner"));
        menuRedimmensionner->setIcon(icon15);
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
        menuEdition->addAction(actionAnnuler);
        menuEdition->addAction(actionRestaurer);
        menuCompiler->addAction(actionCompiler);
        menuCompiler->addSeparator();
        menuCompiler->addAction(actionExecuter);
        menuCompiler->addAction(ExecutePasAPasMJJ);
        menuCompiler->addAction(actionArretMJJ);
        menuCompiler->addSeparator();
        menuCompiler->addAction(actionExecuter_JJC);
        menuCompiler->addAction(ExecutePasAPasJJC);
        menuCompiler->addAction(actionArretJJC);
        menuFenetre->addAction(menuRedimmensionner->menuAction());
        menuRedimmensionner->addAction(action800x600);
        menuRedimmensionner->addAction(action1080x720);
        menuAide->addAction(actionA_propos);
        mainToolBar->addAction(actionCompiler);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionExecuter);
        mainToolBar->addAction(ExecutePasAPasMJJ);
        mainToolBar->addAction(actionArretMJJ);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionExecuter_JJC);
        mainToolBar->addAction(ExecutePasAPasJJC);
        mainToolBar->addAction(actionArretJJC);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionCompiler->setText(QApplication::translate("MainWindow", "Compiler", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCompiler->setToolTip(QApplication::translate("MainWindow", "Lancer la compilation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCompiler->setShortcut(QApplication::translate("MainWindow", "Ctrl+B", 0, QApplication::UnicodeUTF8));
        actionExecuter->setText(QApplication::translate("MainWindow", "Executer MJJ", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionExecuter->setToolTip(QApplication::translate("MainWindow", "Lancer l'\303\251xecution", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionExecuter->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", 0, QApplication::UnicodeUTF8));
        actionOuvrir->setText(QApplication::translate("MainWindow", "Ouvrir", 0, QApplication::UnicodeUTF8));
        actionOuvrir->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionSauvegarder->setText(QApplication::translate("MainWindow", "Sauvegarder", 0, QApplication::UnicodeUTF8));
        actionSauvegarder->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", 0, QApplication::UnicodeUTF8));
        actionFermer->setText(QApplication::translate("MainWindow", "Fermer", 0, QApplication::UnicodeUTF8));
        actionFermer->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        actionSauvegarder_sous->setText(QApplication::translate("MainWindow", "Sauvegarder sous ...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSauvegarder_sous->setToolTip(QApplication::translate("MainWindow", "Sauvegarder sous", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionNouveau_Fichier->setText(QApplication::translate("MainWindow", "Nouveau Fichier", 0, QApplication::UnicodeUTF8));
        actionNouveau_Fichier->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionExecuter_JJC->setText(QApplication::translate("MainWindow", "Executer JJC", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionExecuter_JJC->setToolTip(QApplication::translate("MainWindow", "Lancer l'execution du JaJaCode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionExecuter_JJC->setShortcut(QApplication::translate("MainWindow", "Ctrl+T", 0, QApplication::UnicodeUTF8));
        ExecutePasAPasMJJ->setText(QApplication::translate("MainWindow", "pas a pas MJJ", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ExecutePasAPasMJJ->setToolTip(QApplication::translate("MainWindow", "Lancer l'execution pas a pas du MiniJaJa", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ExecutePasAPasJJC->setText(QApplication::translate("MainWindow", "pas a pas JJC", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ExecutePasAPasJJC->setToolTip(QApplication::translate("MainWindow", "Lancer l'execution pas a pas du JaJaCode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionArretMJJ->setText(QApplication::translate("MainWindow", "ArretMJJ", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionArretMJJ->setToolTip(QApplication::translate("MainWindow", "Arrete l'execution du MiniJaJa", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionArretJJC->setText(QApplication::translate("MainWindow", "ArretJJC", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionArretJJC->setToolTip(QApplication::translate("MainWindow", "Arrete l'execution du JaJaCode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAnnuler->setText(QApplication::translate("MainWindow", "Annuler", 0, QApplication::UnicodeUTF8));
        actionRestaurer->setText(QApplication::translate("MainWindow", "Restaurer", 0, QApplication::UnicodeUTF8));
        actionCompiler_2->setText(QApplication::translate("MainWindow", "Compiler", 0, QApplication::UnicodeUTF8));
        actionInterpreter_le_MiniJaJa->setText(QApplication::translate("MainWindow", "Interpreter le MiniJaJa", 0, QApplication::UnicodeUTF8));
        actionInterpreter_JaJaCode->setText(QApplication::translate("MainWindow", "Interpreter JaJaCode", 0, QApplication::UnicodeUTF8));
        actionA_propos->setText(QApplication::translate("MainWindow", "A propos", 0, QApplication::UnicodeUTF8));
        action800x600->setText(QApplication::translate("MainWindow", "800x600", 0, QApplication::UnicodeUTF8));
        action1080x720->setText(QApplication::translate("MainWindow", "1080x720", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QApplication::translate("MainWindow", "MiniJaja", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabJajaCode), QApplication::translate("MainWindow", "JajaCode", 0, QApplication::UnicodeUTF8));
        console->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#11ff00;\">[Console]</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Affichage de la pile", 0, QApplication::UnicodeUTF8));
        textMemo->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"1\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" width=\"100%\" cellspacing=\"2\" cellpadding=\"0\">\n"
"<tr>\n"
"<td>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:8pt;\">sommet de pile </span></p></td></tr>\n"
"<tr>\n"
"<td>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:8pt;\">sommet de pile-1 </span></p></td></tr>\n"
"<tr>\n"
"<td>\n"
"<p style=\" margin-top:0px; "
                        "margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:8pt;\">sommet de pile-2 </span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        menufichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0, QApplication::UnicodeUTF8));
        menuEdition->setTitle(QApplication::translate("MainWindow", "Edition", 0, QApplication::UnicodeUTF8));
        menuCompiler->setTitle(QApplication::translate("MainWindow", "Compiler", 0, QApplication::UnicodeUTF8));
        menuFenetre->setTitle(QApplication::translate("MainWindow", "Fenetre", 0, QApplication::UnicodeUTF8));
        menuRedimmensionner->setTitle(QApplication::translate("MainWindow", "Redimmensionner", 0, QApplication::UnicodeUTF8));
        menuAide->setTitle(QApplication::translate("MainWindow", "Aide", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
