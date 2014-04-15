#ifndef TERNARYARRAYNODE_H
#define TERNARYARRAYNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;

class TernaryArrayNode: public Node{

	public:
		TernaryArrayNode(Node* child1, Node* child2, Node* child3);
		~TernaryArrayNode();
		virtual std::string accept(VisitComp* v);
		virtual string accept(VisitInterp* v);

};

#endif 
