#ifndef CLASSNODE_H
#define CLASSNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;
class Memory;

class ClassNode: public Node{

    public:
        ClassNode(Node* child1, Node* child2, Node* child3);
        ~ClassNode();
        virtual std::string accept(VisitComp* v, int flag=0);
        virtual string accept(VisitInterp* v, Memory* mem, int flag=0);

};

#endif 
