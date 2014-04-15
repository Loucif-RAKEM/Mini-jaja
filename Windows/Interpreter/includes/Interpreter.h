#ifndef INTERPRETER_H
#define INTERPRETER_H

#include <iostream>
#include <sstream>
#include <QString>
#include <QRegExp>
#include "Stack.h"
#include "Quadruplet.h"
#include "JJCProgram.h"
#include "LinkedList.h"
#include <QPair>

class Tuple;
class MJJProgram;
class Memory;
class MethodNode;
class Node;
class JJCProgram;

void die(std::string error);

namespace Interpreter{

    void interpretProgram(MJJProgram mjjprogram);

    void interpretProgram(JJCProgram jjcprogram);

    int interpretProgramSS(JJCProgram jjcprogram, int stop);
    
    LinkedList<QPair<Node*, int> >* interpretNode(Node* node, int flag);

    void affecterVal(const std::string identifier, const int value, Memory* mem);

    void affecterValT(const std::string identifier, const int value, const int index, Memory* mem);

    void declVar(const std::string identifier, const int value, const Type type, Memory* mem);
    
    void declMeth(string identifier, MethodNode* method, Type type, Memory* mem);

    void declMethJJC(string identifier, int value, Type type, Memory* mem);

    void declTab(const string identifier, const int size, const Type type, Memory* mem);

    void declCst(const string identifier, const int value, const Type type, Memory* mem);

    void declVCst(const string identifier, const int value, const Type type, Memory* mem);

    void identVal(const string identifier, const Type type, Memory* mem,int addr);

    int val(const std::string identifier, Memory* mem);

    int valT(const std::string identifier, const int index, Memory* mem);

    Node* parametre(const string methodName, Memory* mem);

    void expParam(Node* expList, Node* headers, Memory* mem);

    Node* declaration(const string identifier, Memory* mem);

    Node* corps(const string identifier, Memory* mem);

    const string variableClasse(Memory* mem);

    Memory* getMemory();

    static Memory* m;

    void retirerDecl(const string identifier, Memory* mem);

}

#endif
