#-------------------------------------------------
#
# Project created by QtCreator 2013-11-20T18:57:56
#
#-------------------------------------------------

QT       -= gui

TARGET = Interpreter
TEMPLATE = lib
CONFIG += staticlib

INCLUDEPATH += includes \
            ../LibNode/includes

SOURCES += \
    src/VisitInterp.cpp \
    src/Tuple.cpp \
    src/Quadruplet.cpp \
    src/Memory.cpp \
    src/Interpreter.cpp \
    src/Heap.cpp \
    src/VisitComp.cpp \
    src/Program.cpp \
    src/MJJProgram.cpp \
    src/Row.cpp

HEADERS += \
    includes/Tuple.h \
    includes/Stack.h \
    includes/Quadruplet.h \
    includes/Memory.h \
    includes/LinkedListIterator.h \
    includes/LinkedList.h \
    includes/Link.h \
    includes/Interpreter.h \
    includes/Heap.h \
    includes/VisitComp.h \
    includes/VisitInterp.h \
    includes/Program.h \
    includes/MJJProgram.h \
    includes/Row.h \
    includes/BinarySearchTreeNode.h \
    includes/BinarySearchTree.h

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
