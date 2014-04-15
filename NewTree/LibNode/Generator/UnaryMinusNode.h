#ifndef UNARYMINUSNODE_H
#define UNARYMINUSNODE_H

#include "Node.h"
class VisitComp;
class VisitInterp;

class UnaryMinusNode: public Node{

	public:
		UnaryMinusNode(Node* child1);
		~UnaryMinusNode();
		virtual std::string accept(VisitComp* v);
		virtual string accept(VisitInterp* v);

};

#endif 
