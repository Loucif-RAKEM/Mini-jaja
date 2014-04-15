#ifndef VARNODE_H
#define VARNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;

class VarNode: public Node{

	public:
		VarNode(Node* child1, Node* child2, Node* child3);
		~VarNode();
		virtual std::string accept(VisitComp* v);
		virtual string accept(VisitInterp* v);

};

#endif 
