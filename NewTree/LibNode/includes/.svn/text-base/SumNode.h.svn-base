#ifndef SUMNODE_H
#define SUMNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;
class Memory;

class SumNode: public Node{

    public:
        SumNode(Node* child1, Node* child2);
        ~SumNode();
        virtual std::string accept(VisitComp* v, int flag=0);
        virtual string accept(VisitInterp* v, Memory* mem, int flag=0);

};

#endif 
