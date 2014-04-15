#ifndef CLASSNODE_H
#define CLASSNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;

class ClassNode: public Node{

	public:
		ClassNode(Node* child1, Node* child2, Node* child3);
		~ClassNode();
		virtual std::string accept(VisitComp* v);
		virtual string accept(VisitInterp* v);

};

#endif 
