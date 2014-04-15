#ifndef MAINNODE_H
#define MAINNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;
class Memory;

class MainNode: public Node{

    public:
        MainNode(Node* child1, Node* child2);
        ~MainNode();
        virtual std::string accept(VisitComp* v, int flag=0);
        virtual string accept(VisitInterp* v, Memory* mem, int flag=0);

};

#endif 
