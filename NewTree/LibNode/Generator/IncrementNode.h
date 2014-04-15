#ifndef INCREMENTNODE_H
#define INCREMENTNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;

class IncrementNode: public Node{

	public:
		IncrementNode(Node* child1);
		~IncrementNode();
		virtual std::string accept(VisitComp* v);
		virtual string accept(VisitInterp* v);

};

#endif 
