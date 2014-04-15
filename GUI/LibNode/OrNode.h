#ifndef ORNODE_H
#define ORNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;
class Memory;

class OrNode: public Node{

    public:
        OrNode(Node* child1, Node* child2);
        ~OrNode();
        virtual std::string accept(VisitComp* v, int flag=0);
        virtual string accept(VisitInterp* v, Memory* mem, int flag=0);

};

#endif 
