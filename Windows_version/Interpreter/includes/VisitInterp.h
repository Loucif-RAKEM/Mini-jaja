#ifndef VisitInterp_H
#define VisitInterp_H

#include "LinkedList.h"
#include <map>
#include <QPair>
#include "AllNodes.h"
#include "Quadruplet.h"


class Node;

class VisitInterp{

	private:
		int compteurMeth;
		int compteurClass;
        LinkedList<QPair<Node*, int> >* liste;
        
    public:
        VisitInterp();
        ~VisitInterp();
        void visitAll(ClassNode*, Memory*, int flag);
        void visitNode(Node* root, Memory* mem, int flag);
        int getValue(Node* node, Memory* mem);
        LinkedList<QPair<Node*, int> >* getListe();
        string visit(AndNode*, Memory*, int flag);
        string visit(AssignmentNode*, Memory*, int flag);
        string visit(BinaryArrayNode*, Memory*, int flag);
        string visit(BinaryMinusNode*, Memory*, int flag);
        string visit(CallENode*, Memory*, int flag);
        string visit(CallINode*, Memory*, int flag);
        string visit(ClassNode*, Memory*, int flag);
        string visit(CstNode*, Memory*, int flag);
        string visit(DeclsNode*, Memory*, int flag);
        string visit(DivideNode*, Memory*, int flag);
        string visit(EqualityNode*, Memory*, int flag);
        string visit(ExpListNode*, Memory*, int flag);
        string visit(GreaterThanNode*, Memory*, int flag);
        string visit(HeaderNode*, Memory*, int flag);
        string visit(HeadersNode*, Memory*, int flag);
        string visit(IdentNode*, Memory*, int flag);
        string visit(IfElseNode*, Memory*, int flag);
        string visit(IfNode*, Memory*, int flag);
        string visit(IncrementNode*, Memory*, int flag);
        string visit(InstrsNode*, Memory*, int flag);
        string visit(LeafNode*, Memory*, int flag);
        string visit(MainNode*, Memory*, int flag);
        string visit(MethodNode*, Memory*, int flag);
        string visit(NotNode*, Memory*, int flag);
        string visit(NumberNode*, Memory*, int flag);
        string visit(OrNode*, Memory*, int flag);
        string visit(PlusNode*, Memory*, int flag);
        string visit(ReturnNode*, Memory*, int flag);
        string visit(SumNode*, Memory*, int flag);
        string visit(TernaryArrayNode*, Memory*, int flag);
        string visit(TimesNode*, Memory*, int flag);
        string visit(UnaryMinusNode*, Memory*, int flag);
        string visit(VarNode*, Memory*, int flag);
        string visit(VarsNode*, Memory*, int flag);
        string visit(WhileNode*, Memory*, int flag);

};

#endif
