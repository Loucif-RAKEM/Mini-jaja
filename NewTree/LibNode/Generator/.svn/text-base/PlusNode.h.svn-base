#ifndef PLUSNODE_H
#define PLUSNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;

class PlusNode: public Node{

	public:
		PlusNode(Node* child1, Node* child2);
		~PlusNode();
		virtual std::string accept(VisitComp* v);
		virtual string accept(VisitInterp* v);

};

#endif 
