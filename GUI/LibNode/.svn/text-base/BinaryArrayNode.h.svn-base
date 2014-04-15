#ifndef BINARYARRAYNODE_H
#define BINARYARRAYNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;
class Memory;

class BinaryArrayNode: public Node{

    public:
        BinaryArrayNode(Node* child1, Node* child2);
        ~BinaryArrayNode();
        virtual std::string accept(VisitComp* v, int flag=0);
        virtual string accept(VisitInterp* v, Memory* mem, int flag=0);

};

#endif 
