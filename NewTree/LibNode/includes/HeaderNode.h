#ifndef HEADERNODE_H
#define HEADERNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;
class Memory;

class HeaderNode: public Node{

    public:
        HeaderNode(Node* child1, Node* child2);
        ~HeaderNode();
        virtual std::string accept(VisitComp* v, int flag=0);
        virtual string accept(VisitInterp* v, Memory* mem, int flag=0);

};

#endif 
