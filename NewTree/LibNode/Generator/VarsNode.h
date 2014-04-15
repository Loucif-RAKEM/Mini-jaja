#ifndef VARSNODE_H
#define VARSNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;

class VarsNode: public Node{

	public:
		VarsNode(Node* child1, Node* child2);
		~VarsNode();
		virtual std::string accept(VisitComp* v);
		virtual string accept(VisitInterp* v);

};

#endif 
