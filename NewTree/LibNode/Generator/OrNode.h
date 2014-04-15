#ifndef ORNODE_H
#define ORNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;

class OrNode: public Node{

	public:
		OrNode(Node* child1, Node* child2);
		~OrNode();
		virtual std::string accept(VisitComp* v);
		virtual string accept(VisitInterp* v);

};

#endif 
