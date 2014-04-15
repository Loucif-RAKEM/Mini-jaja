#-------------------------------------------------
#
# Project created by QtCreator 2013-11-11T23:00:38
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GUI
TEMPLATE = app

INCLUDEPATH += includes \
        ../LibNode/includes \
        ../Interpreter/includes \
        ../Compile/includes

SOURCES += \
        src/mainwindow.cpp \
        src/main.cpp

HEADERS  += \
        includes/mainwindow.h

FORMS    += \
        src/mainwindow.ui

OTHER_FILES += \
    program.mjj

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../Interpreter/release/ -lInterpreter
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../Interpreter/debug/ -lInterpreter
else:symbian: LIBS += -lInterpreter
else:unix: LIBS += -L$$OUT_PWD/../Interpreter/ -lInterpreter

INCLUDEPATH += $$PWD/../Interpreter
DEPENDPATH += $$PWD/../Interpreter

win32:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../Interpreter/release/Interpreter.lib
else:win32:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../Interpreter/debug/Interpreter.lib
else:unix:!symbian: PRE_TARGETDEPS += $$OUT_PWD/../Interpreter/libInterpreter.a

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../Compile/release/ -lCompile
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../Compile/debug/ -lCompile
else:symbian: LIBS += -lCompile
else:unix: LIBS += -L$$OUT_PWD/../Compile/ -lCompile

INCLUDEPATH += $$PWD/../Compile
DEPENDPATH += $$PWD/../Compile

win32:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../Compile/release/Compile.lib
else:win32:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../Compile/debug/Compile.lib
else:unix:!symbian: PRE_TARGETDEPS += $$OUT_PWD/../Compile/libCompile.a

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../LexerParser/release/ -lLexerParser
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../LexerParser/debug/ -lLexerParser
else:symbian: LIBS += -lLexerParser
else:unix: LIBS += -L$$OUT_PWD/../LexerParser/ -lLexerParser

INCLUDEPATH += $$PWD/../LexerParser
DEPENDPATH += $$PWD/../LexerParser

win32:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../LexerParser/release/LexerParser.lib
else:win32:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../LexerParser/debug/LexerParser.lib
else:unix:!symbian: PRE_TARGETDEPS += $$OUT_PWD/../LexerParser/libLexerParser.a


win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../LibNode/release/ -lLibNode
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../LibNode/debug/ -lLibNode
else:symbian: LIBS += -lLibNode
else:unix: LIBS += -L$$OUT_PWD/../LibNode/ -lLibNode

INCLUDEPATH += $$PWD/../LibNode
DEPENDPATH += $$PWD/../LibNode

win32:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../LibNode/release/LibNode.lib
else:win32:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../LibNode/debug/LibNode.lib
else:unix:!symbian: PRE_TARGETDEPS += $$OUT_PWD/../LibNode/libLibNode.a
