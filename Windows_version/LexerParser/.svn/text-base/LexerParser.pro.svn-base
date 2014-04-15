#-------------------------------------------------
#
# Project created by QtCreator 2013-11-29T17:36:55
#
#-------------------------------------------------

QT       -= gui

TARGET = LexerParser
TEMPLATE = lib
CONFIG += staticlib

INCLUDEPATH += includes \
            ../LibNode/includes \
            ../Interpreter/includes


unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}

SOURCES += \
    src/parser.cpp \
    src/main.cpp \
    src/lexer.cpp \
    src/error.cpp

HEADERS += \
    includes/parser.h
