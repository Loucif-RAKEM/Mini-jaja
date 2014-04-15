#ifndef LEAFNODE_H
#define LEAFNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;
class Memory;

class LeafNode: public Node{

    public:
        LeafNode(const char* label);
        ~LeafNode();
        virtual std::string accept(VisitComp* v, int flag=0);
        virtual string accept(VisitInterp* v, Memory* mem, int flag=0);

};

#endif 
