#ifndef GREATERTHANNODE_H
#define GREATERTHANNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;
class Memory;
class TypeChecker;

class GreaterThanNode: public Node{

    public:
        GreaterThanNode(Node* child1, Node* child2);
        ~GreaterThanNode();
        virtual std::string accept(VisitComp* v, int flag=0);
        virtual string accept(VisitInterp* v, Memory* mem, int flag=0);
        virtual std::string accept(TypeChecker* v, Memory* mem);

};

#endif 
