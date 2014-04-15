#ifndef WHILENODE_H
#define WHILENODE_H

#include "Node.h"
#include <iostream>

class TypeChecker;
class VisitComp;
class VisitInterp;
class Memory;

class WhileNode: public Node{

    public:
        WhileNode(Node* child1, Node* child2);
        ~WhileNode();
        virtual std::string accept(VisitComp* v, int flag=0);
        virtual string accept(VisitInterp* v, Memory* mem, int flag=0);
        virtual string accept(TypeChecker* v, Memory* mem);

};

#endif 
