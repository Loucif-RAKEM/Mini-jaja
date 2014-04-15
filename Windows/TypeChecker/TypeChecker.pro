#-------------------------------------------------
#
# Project created by QtCreator 2013-12-04T20:12:30
#
#-------------------------------------------------

QT       += gui

TARGET = TypeChecker
TEMPLATE = lib
CONFIG += staticlib

INCLUDEPATH += includes \
            ../Interpreter/includes \
            ../LibNode/includes \
            ../GUI/includes

SOURCES += src/TypeChecker.cpp

HEADERS += includes/TypeChecker.h

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
