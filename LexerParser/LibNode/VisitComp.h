#ifndef VISITCOMP_H
#define VISITCOMP_H

#include "All.h"

class Node;

class VisitComp{

	private:
		int compteurMeth;
		int compteurClass;

    public:
        VisitComp();
        ~VisitComp();
        void visitAll(ClassNode*, std::string);
        std::string visit(AndNode*);
        std::string visit(AssignmentNode*);
        std::string visit(BinaryArrayNode*);
        std::string visit(BinaryMinusNode*);
        std::string visit(CallENode*);
        std::string visit(CallINode*);
        std::string visit(ClassNode*);
        std::string visit(CstNode*);
        std::string visit(DeclsNode*);
        std::string visit(DivideNode*);
        std::string visit(EqualityNode*);
        std::string visit(ExpListNode*);
        std::string visit(GreaterThanNode*);
        std::string visit(HeaderNode*);
        std::string visit(HeadersNode*);
        std::string visit(IdentNode*);
        std::string visit(IfElseNode*);
        std::string visit(IfNode*);
        std::string visit(IncrementNode*);
        std::string visit(InstrsNode*);
        std::string visit(LeafNode*);
        std::string visit(MainNode*);
        std::string visit(MethodNode*);
        std::string visit(NotNode*);
        std::string visit(NumberNode*);
        std::string visit(OrNode*);
        std::string visit(PlusNode*);
        std::string visit(ReturnNode*);
        std::string visit(SumNode*);
        std::string visit(TernaryArrayNode*);
        std::string visit(TimesNode*);
        std::string visit(UnaryMinusNode*);
        std::string visit(VarNode*);
        std::string visit(VarsNode*);
        std::string visit(WhileNode*);

};

#endif
