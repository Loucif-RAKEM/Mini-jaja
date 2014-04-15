#ifndef IFELSENODE_H
#define IFELSENODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;
class Memory;

class IfElseNode: public Node{

    public:
        IfElseNode(Node* child1, Node* child2, Node* child3);
        ~IfElseNode();
        virtual std::string accept(VisitComp* v, int flag=0);
        virtual string accept(VisitInterp* v, Memory* mem, int flag=0);

};

#endif 
