#ifndef EXPLISTNODE_H
#define EXPLISTNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;
class Memory;
class TypeChecker;

class ExpListNode: public Node{

    public:
        ExpListNode(Node* child1, Node* child2);
        ~ExpListNode();
        virtual std::string accept(VisitComp* v, int flag=0);
        virtual string accept(VisitInterp* v, Memory* mem, int flag=0);
        virtual std::string accept(TypeChecker* v, Memory* mem);

};

#endif 
