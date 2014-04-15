#ifndef BINARYMINUSNODE_H
#define BINARYMINUSNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;
class Memory;
class TypeChecker;

class BinaryMinusNode: public Node{

    public:
        BinaryMinusNode(Node* child1, Node* child2);
        ~BinaryMinusNode();
        virtual std::string accept(VisitComp* v, int flag=0);
        virtual string accept(VisitInterp* v, Memory* mem, int flag=0);
        virtual std::string accept(TypeChecker* v, Memory* mem);

};

#endif 
