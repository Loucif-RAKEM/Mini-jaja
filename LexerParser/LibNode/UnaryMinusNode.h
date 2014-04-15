#ifndef UNARYMINUSNODE_H
#define UNARYMINUSNODE_H

#include "Node.h"
class VisitComp;

class UnaryMinusNode: public Node{

	public:
		UnaryMinusNode(Node* child1);
		~UnaryMinusNode();
		virtual std::string accept(VisitComp* v);

};

#endif 
