#ifndef HEADERSNODE_H
#define HEADERSNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;

class HeadersNode: public Node{

	public:
		HeadersNode(Node* child1, Node* child2);
		~HeadersNode();
		virtual std::string accept(VisitComp* v);
		virtual string accept(VisitInterp* v);

};

#endif 
