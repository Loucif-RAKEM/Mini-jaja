#ifndef RETURNNODE_H
#define RETURNNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;

class ReturnNode: public Node{

	public:
		ReturnNode(Node* child1);
		~ReturnNode();
		virtual std::string accept(VisitComp* v);
		virtual string accept(VisitInterp* v);

};

#endif 
