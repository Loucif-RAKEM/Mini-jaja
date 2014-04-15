#ifndef IDENTNODE_H
#define IDENTNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;
class Memory;

class IdentNode: public Node{

    public:
        IdentNode(Node* child1);
        ~IdentNode();
        virtual std::string accept(VisitComp* v, int flag=0);
        virtual string accept(VisitInterp* v, Memory* mem, int flag=0);

};

#endif 
