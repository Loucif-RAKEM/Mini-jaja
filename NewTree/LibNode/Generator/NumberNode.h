#ifndef NUMBERNODE_H
#define NUMBERNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;

class NumberNode: public Node{

	public:
		NumberNode(Node* child1);
		~NumberNode();
		virtual std::string accept(VisitComp* v);
		virtual string accept(VisitInterp* v);

};

#endif 
