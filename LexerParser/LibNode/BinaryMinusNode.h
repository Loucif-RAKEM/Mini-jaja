#ifndef BINARYMINUSNODE_H
#define BINARYMINUSNODE_H

#include "Node.h"
class VisitComp;

class BinaryMinusNode: public Node{

	public:
		BinaryMinusNode(Node* child1, Node* child2);
		~BinaryMinusNode();
		virtual std::string accept(VisitComp* v);

};

#endif 
