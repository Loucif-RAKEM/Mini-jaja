#ifndef NOTNODE_H
#define NOTNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;
class Memory;

class NotNode: public Node{

    public:
        NotNode(Node* child1);
        ~NotNode();
        virtual std::string accept(VisitComp* v, int flag=0);
        virtual string accept(VisitInterp* v, Memory* mem, int flag=0);

};

#endif 
