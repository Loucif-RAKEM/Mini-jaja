#-------------------------------------------------
#
# Project created by QtCreator 2013-11-29T17:46:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GUI
TEMPLATE = app

INCLUDEPATH += includes \
            ../LibNode/includes \
            ../Interpreter/includes \
            ../Compile/includes \
            ../TypeChecker/includes

FORMS += \
    src/mainwindow.ui

SOURCES += \
    src/mainwindow.cpp \
    src/main.cpp \
    src/codeeditor.cpp

HEADERS += \
    includes/mainwindow.h \
    includes/codeeditor.h

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../Interpreter/release/ -lInterpreter
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../Interpreter/debug/ -lInterpreter
else:unix: LIBS += -L$$OUT_PWD/../Interpreter/ -lInterpreter

INCLUDEPATH += $$PWD/../Interpreter
DEPENDPATH += $$PWD/../Interpreter

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../Compile/release/ -lCompile
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../Compile/debug/ -lCompile
else:unix: LIBS += -L$$OUT_PWD/../Compile/ -lCompile

INCLUDEPATH += $$PWD/../Compile
DEPENDPATH += $$PWD/../Compile

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../LexerParser/release/ -lLexerParser
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../LexerParser/debug/ -lLexerParser
else:unix: LIBS += -L$$OUT_PWD/../LexerParser/ -lLexerParser

INCLUDEPATH += $$PWD/../LexerParser
DEPENDPATH += $$PWD/../LexerParser

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../LibNode/release/ -lLibNode
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../LibNode/debug/ -lLibNode
else:unix: LIBS += -L$$OUT_PWD/../LibNode/ -lLibNode

INCLUDEPATH += $$PWD/../LibNode
DEPENDPATH += $$PWD/../LibNode

RESOURCES += \
    resources/resource.qrc




win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../TypeChecker/release/ -lTypeChecker
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../TypeChecker/debug/ -lTypeChecker
else:symbian: LIBS += -lTypeChecker
else:unix: LIBS += -L$$OUT_PWD/../TypeChecker/ -lTypeChecker

INCLUDEPATH += $$PWD/../TypeChecker
DEPENDPATH += $$PWD/../TypeChecker
