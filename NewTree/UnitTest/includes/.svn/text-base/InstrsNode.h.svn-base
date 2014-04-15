#ifndef INSTRSNODE_H
#define INSTRSNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;
class Memory;

class InstrsNode: public Node{

    public:
        InstrsNode(Node* child1, Node* child2);
        ~InstrsNode();
        virtual std::string accept(VisitComp* v, int flag=0);
        virtual string accept(VisitInterp* v, Memory* mem, int flag=0);

};

#endif 
