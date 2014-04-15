#ifndef EQUALITYNODE_H
#define EQUALITYNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;

class EqualityNode: public Node{

	public:
		EqualityNode(Node* child1, Node* child2);
		~EqualityNode();
		virtual std::string accept(VisitComp* v);
		virtual string accept(VisitInterp* v);

};

#endif 
