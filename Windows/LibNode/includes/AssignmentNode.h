#ifndef ASSIGNMENTNODE_H
#define ASSIGNMENTNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;
class Memory;
class TypeChecker;

class AssignmentNode: public Node{

    public:
        AssignmentNode(Node* child1, Node* child2);
        ~AssignmentNode();
        virtual std::string accept(VisitComp* v, int flag=0);
        virtual string accept(VisitInterp* v, Memory* mem, int flag=0);
        virtual std::string accept(TypeChecker* v, Memory* mem);

};

#endif 
