#ifndef CALLINODE_H
#define CALLINODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;
class Memory;
class TypeChecker;

class CallINode: public Node{

    public:
        CallINode(Node* child1, Node* child2);
        ~CallINode();
        virtual std::string accept(VisitComp* v, int flag=0);
        virtual string accept(VisitInterp* v, Memory* mem, int flag=0);
        virtual std::string accept(TypeChecker* v, Memory* mem);

};

#endif 
