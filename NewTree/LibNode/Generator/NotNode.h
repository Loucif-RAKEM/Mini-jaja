#ifndef NOTNODE_H
#define NOTNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;

class NotNode: public Node{

	public:
		NotNode(Node* child1);
		~NotNode();
		virtual std::string accept(VisitComp* v);
		virtual string accept(VisitInterp* v);

};

#endif 
