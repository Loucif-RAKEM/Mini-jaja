#ifndef CALLENODE_H
#define CALLENODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;
class Memory;

class CallENode: public Node{

    public:
        CallENode(Node* child1, Node* child2);
        ~CallENode();
        virtual std::string accept(VisitComp* v, int flag=0);
        virtual string accept(VisitInterp* v, Memory* mem, int flag=0);

};

#endif 
