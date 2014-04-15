#-------------------------------------------------
#
# Project created by QtCreator 2013-11-21T11:20:53
#
#-------------------------------------------------

QT       += testlib

QT       += gui

TARGET = tst_comptest
CONFIG   += console
CONFIG += ordered
CONFIG   -= app_bundle

TEMPLATE = app

INCLUDEPATH += includes

SOURCES += tst_comptest.cpp \
    src/WhileNode.cpp \
    src/VisitInterp.cpp \
    src/VisitComp.cpp \
    src/VarsNode.cpp \
    src/VarNode.cpp \
    src/UnaryMinusNode.cpp \
    src/Tuple.cpp \
    src/TimesNode.cpp \
    src/TernaryArrayNode.cpp \
    src/SumNode.cpp \
    src/ReturnNode.cpp \
    src/Quadruplet.cpp \
    src/Program.cpp \
    src/PlusNode.cpp \
    src/parser.cpp \
    src/OrNode.cpp \
    src/NumberNode.cpp \
    src/NotNode.cpp \
    src/Node.cpp \
    src/MJJProgram.cpp \
    src/MethodNode.cpp \
    src/Memory.cpp \
    src/mainwindow.cpp \
    src/MainNode.cpp \
    src/lexer.cpp \
    src/LeafNode.cpp \
    src/Interpreter.cpp \
    src/InstrsNode.cpp \
    src/IncrementNode.cpp \
    src/IfNode.cpp \
    src/IfElseNode.cpp \
    src/IdentNode.cpp \
    src/Heap.cpp \
    src/HeadersNode.cpp \
    src/HeaderNode.cpp \
    src/GreaterThanNode.cpp \
    src/ExpListNode.cpp \
    src/error.cpp \
    src/EqualityNode.cpp \
    src/DivideNode.cpp \
    src/DeclsNode.cpp \
    src/CstNode.cpp \
    src/ClassNode.cpp \
    src/CallINode.cpp \
    src/CallENode.cpp \
    src/BinaryMinusNode.cpp \
    src/BinaryArrayNode.cpp \
    src/AssignmentNode.cpp \
    src/AndNode.cpp \
    src/AbstractSyntaxTree.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"

HEADERS += \
    includes/WhileNode.h \
    includes/VisitInterp.h \
    includes/VisitComp.h \
    includes/VarsNode.h \
    includes/VarNode.h \
    includes/UnaryMinusNode.h \
    includes/ui_mainwindow.h \
    includes/Tuple.h \
    includes/TimesNode.h \
    includes/TernaryArrayNode.h \
    includes/SumNode.h \
    includes/Stack.h \
    includes/ReturnNode.h \
    includes/Quadruplet.h \
    includes/Program.h \
    includes/PlusNode.h \
    includes/parser.h \
    includes/OrNode.h \
    includes/NumberNode.h \
    includes/NotNode.h \
    includes/Node.h \
    includes/MJJProgram.h \
    includes/MethodNode.h \
    includes/Memory.h \
    includes/mainwindow.h \
    includes/MainNode.h \
    includes/LinkedListIterator.h \
    includes/LinkedList.h \
    includes/Link.h \
    includes/LeafNode.h \
    includes/Interpreter.h \
    includes/InstrsNode.h \
    includes/IncrementNode.h \
    includes/IfNode.h \
    includes/IfElseNode.h \
    includes/IdentNode.h \
    includes/Heap.h \
    includes/HeadersNode.h \
    includes/HeaderNode.h \
    includes/GreaterThanNode.h \
    includes/ExpListNode.h \
    includes/EqualityNode.h \
    includes/DivideNode.h \
    includes/DeclsNode.h \
    includes/CstNode.h \
    includes/ClassNode.h \
    includes/CallINode.h \
    includes/CallENode.h \
    includes/BinaryMinusNode.h \
    includes/BinaryArrayNode.h \
    includes/AssignmentNode.h \
    includes/AndNode.h \
    includes/AllNodes.h \
    includes/All.h \
    includes/AbstractSyntaxTree.h
