#ifndef UNARYMINUSNODE_H
#define UNARYMINUSNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;
class Memory;

class UnaryMinusNode: public Node{

    public:
        UnaryMinusNode(Node* child1);
        ~UnaryMinusNode();
        virtual std::string accept(VisitComp* v, int flag=0);
        virtual string accept(VisitInterp* v, Memory* mem, int flag=0);

};

#endif 
