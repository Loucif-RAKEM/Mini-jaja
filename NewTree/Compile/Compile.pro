QT       -= gui

TARGET = Compile
TEMPLATE = lib
CONFIG += staticlib

INCLUDEPATH += includes \
            ../Interpreter/includes \
            ../LibNode/includes

SOURCES +=  src/VisitComp.cpp \
    src/Compiler.cpp

HEADERS +=   includes/VisitComp.h \
    includes/Compiler.h

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
