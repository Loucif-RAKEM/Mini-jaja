#ifndef EXPLISTNODE_H
#define EXPLISTNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;

class ExpListNode: public Node{

	public:
		ExpListNode(Node* child1, Node* child2);
		~ExpListNode();
		virtual std::string accept(VisitComp* v);
		virtual string accept(VisitInterp* v);

};

#endif 
