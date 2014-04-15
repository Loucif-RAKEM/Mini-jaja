#ifndef TIMESNODE_H
#define TIMESNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;
class Memory;
class TypeChecker;

class TimesNode: public Node{

    public:
        TimesNode(Node* child1, Node* child2);
        ~TimesNode();
        virtual std::string accept(VisitComp* v, int flag=0);
        virtual std::string accept(VisitInterp* v, Memory* mem, int flag=0);
        virtual std::string accept(TypeChecker *tc, Memory *mem);
};

#endif 
