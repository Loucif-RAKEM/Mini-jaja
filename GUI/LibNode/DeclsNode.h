#ifndef DECLSNODE_H
#define DECLSNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;
class Memory;

class DeclsNode: public Node{

    public:
        DeclsNode(Node* child1, Node* child2);
        ~DeclsNode();
        virtual std::string accept(VisitComp* v, int flag=0);
        virtual string accept(VisitInterp* v, Memory* mem, int flag=0);

};

#endif 
