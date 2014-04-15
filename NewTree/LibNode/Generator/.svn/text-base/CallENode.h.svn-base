#ifndef CALLENODE_H
#define CALLENODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;

class CallENode: public Node{

	public:
		CallENode(Node* child1, Node* child2);
		~CallENode();
		virtual std::string accept(VisitComp* v);
		virtual string accept(VisitInterp* v);

};

#endif 
