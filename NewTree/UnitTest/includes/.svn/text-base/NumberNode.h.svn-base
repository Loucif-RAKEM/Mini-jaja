#ifndef NUMBERNODE_H
#define NUMBERNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;
class Memory;

class NumberNode: public Node{

    public:
        NumberNode(Node* child1);
        ~NumberNode();
        virtual std::string accept(VisitComp* v, int flag=0);
        virtual string accept(VisitInterp* v, Memory* mem, int flag=0);

};

#endif 
