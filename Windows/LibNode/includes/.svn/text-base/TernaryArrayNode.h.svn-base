#ifndef TERNARYARRAYNODE_H
#define TERNARYARRAYNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;
class Memory;
class TypeChecker;

class TernaryArrayNode: public Node{

    public:
        TernaryArrayNode(Node* child1, Node* child2, Node* child3);
        ~TernaryArrayNode();
        virtual std::string accept(VisitComp* v, int flag=0);
        virtual string accept(VisitInterp* v, Memory* mem, int flag=0);
        virtual std::string accept(TypeChecker* v, Memory* mem);

};

#endif 
