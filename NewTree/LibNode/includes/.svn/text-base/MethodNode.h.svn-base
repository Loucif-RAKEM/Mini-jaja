#ifndef METHODNODE_H
#define METHODNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;
class Memory;

class MethodNode: public Node{

    public:
        MethodNode(Node* child1, Node* child2, Node* child3, Node* child4, Node* child5);
        ~MethodNode();
        virtual std::string accept(VisitComp* v, int flag=0);
        virtual string accept(VisitInterp* v, Memory* mem, int flag=0);

};

#endif 
