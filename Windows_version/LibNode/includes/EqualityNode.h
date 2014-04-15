#ifndef EQUALITYNODE_H
#define EQUALITYNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;
class Memory;
class TypeChecker;

class EqualityNode: public Node{

    public:
        EqualityNode(Node* child1, Node* child2);
        ~EqualityNode();
        virtual std::string accept(VisitComp* v, int flag=0);
        virtual string accept(VisitInterp* v, Memory* mem, int flag=0);
        virtual std::string accept(TypeChecker* v, Memory* mem);

};

#endif 
