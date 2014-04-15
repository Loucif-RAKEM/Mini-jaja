#ifndef INCREMENTNODE_H
#define INCREMENTNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;
class Memory;
class TypeChecker;

class IncrementNode: public Node{

    public:
        IncrementNode(Node* child1);
        ~IncrementNode();
        virtual std::string accept(VisitComp* v, int flag=0);
        virtual string accept(VisitInterp* v, Memory* mem, int flag=0);
        virtual std::string accept(TypeChecker* v, Memory* mem);

};

#endif 
