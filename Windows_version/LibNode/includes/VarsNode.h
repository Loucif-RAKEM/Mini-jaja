#ifndef VARSNODE_H
#define VARSNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;
class TypeChecker;
class Memory;
class TypeChecker;

class VarsNode: public Node{

    public:
        VarsNode(Node* child1, Node* child2);
        ~VarsNode();
        virtual std::string accept(VisitComp* v, int flag=0);
        virtual string accept(VisitInterp *v, Memory* mem, int flag=0);
        virtual string accept(TypeChecker *v, Memory* mem);

};

#endif 
