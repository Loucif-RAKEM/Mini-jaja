#ifndef VARNODE_H
#define VARNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;
class Memory;

class VarNode: public Node{

    public:
        VarNode(Node* child1, Node* child2, Node* child3);
        ~VarNode();
        virtual std::string accept(VisitComp* v, int flag=0);
        virtual string accept(VisitInterp* v, Memory* mem, int flag=0);

};

#endif 
