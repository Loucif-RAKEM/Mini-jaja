#-------------------------------------------------
#
# Project created by QtCreator 2013-11-29T17:22:42
#
#-------------------------------------------------

QT       -= gui

TARGET = LibNode
TEMPLATE = lib
CONFIG += staticlib

INCLUDEPATH += includes \
            ../Compile/includes \
            ../Interpreter/includes \
            ../TypeChecker/includes

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}

SOURCES += \
    src/WhileNode.cpp \
    src/VarsNode.cpp \
    src/VarNode.cpp \
    src/UnaryMinusNode.cpp \
    src/TimesNode.cpp \
    src/TernaryArrayNode.cpp \
    src/SumNode.cpp \
    src/ReturnNode.cpp \
    src/PlusNode.cpp \
    src/OrNode.cpp \
    src/NumberNode.cpp \
    src/NotNode.cpp \
    src/Node.cpp \
    src/MethodNode.cpp \
    src/MainNode.cpp \
    src/LeafNode.cpp \
    src/InstrsNode.cpp \
    src/IncrementNode.cpp \
    src/IfNode.cpp \
    src/IfElseNode.cpp \
    src/IdentNode.cpp \
    src/HeadersNode.cpp \
    src/HeaderNode.cpp \
    src/GreaterThanNode.cpp \
    src/ExpListNode.cpp \
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

HEADERS += \
    includes/WhileNode.h \
    includes/VarsNode.h \
    includes/VarNode.h \
    includes/UnaryMinusNode.h \
    includes/TimesNode.h \
    includes/TernaryArrayNode.h \
    includes/SumNode.h \
    includes/ReturnNode.h \
    includes/PlusNode.h \
    includes/OrNode.h \
    includes/NumberNode.h \
    includes/NotNode.h \
    includes/Node.h \
    includes/MethodNode.h \
    includes/MainNode.h \
    includes/LeafNode.h \
    includes/InstrsNode.h \
    includes/IncrementNode.h \
    includes/IfNode.h \
    includes/IfElseNode.h \
    includes/IdentNode.h \
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
    includes/AbstractSyntaxTree.h
