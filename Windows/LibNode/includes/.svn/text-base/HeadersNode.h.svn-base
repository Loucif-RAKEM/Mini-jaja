#ifndef HEADERSNODE_H
#define HEADERSNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;
class Memory;
class TypeChecker;

class HeadersNode: public Node{

    public:
        HeadersNode(Node* child1, Node* child2);
        ~HeadersNode();
        virtual std::string accept(VisitComp* v, int flag=0);
        virtual string accept(VisitInterp* v, Memory* mem, int flag=0);
        virtual std::string accept(TypeChecker* v, Memory* mem);

};

#endif 
