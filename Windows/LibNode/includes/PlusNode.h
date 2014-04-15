#ifndef PLUSNODE_H
#define PLUSNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;
class Memory;
class TypeChecker;

class PlusNode: public Node{

    public:
        PlusNode(Node* child1, Node* child2);
        ~PlusNode();
        virtual std::string accept(VisitComp* v, int flag=0);
        virtual string accept(VisitInterp* v, Memory* mem, int flag=0);
        virtual std::string accept(TypeChecker* v, Memory* mem);

};

#endif 
