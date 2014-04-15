#ifndef VISITCOMP_H
#define VISITCOMP_H

#include "AllNodes.h"

class Node;

class VisitComp{

	private:
        int ligneCourante;

    public:
        VisitComp();
        ~VisitComp();
        void visitAll(ClassNode*, std::string);
        std::string visit(AndNode*, int flag);
        std::string visit(AssignmentNode*, int flag);
        std::string visit(BinaryArrayNode*, int flag);
        std::string visit(BinaryMinusNode*, int flag);
        std::string visit(CallENode*, int flag);
        std::string visit(CallINode*, int flag);
        std::string visit(ClassNode*, int flag);
        std::string visit(CstNode*, int flag);
        std::string visit(DeclsNode*, int flag);
        std::string visit(DivideNode*, int flag);
        std::string visit(EqualityNode*, int flag);
        std::string visit(ExpListNode*, int flag);
        std::string visit(GreaterThanNode*, int flag);
        std::string visit(HeaderNode*, int flag);
        std::string visit(HeadersNode*, int flag);
        std::string visit(IdentNode*, int flag);
        std::string visit(IfElseNode*, int flag);
        std::string visit(IfNode*, int flag);
        std::string visit(IncrementNode*, int flag);
        std::string visit(InstrsNode*, int flag);
        std::string visit(LeafNode*, int flag);
        std::string visit(MainNode*, int flag);
        std::string visit(MethodNode*, int flag);
        std::string visit(NotNode*, int flag);
        std::string visit(NumberNode*, int flag);
        std::string visit(OrNode*, int flag);
        std::string visit(PlusNode*, int flag);
        std::string visit(ReturnNode*, int flag);
        std::string visit(SumNode*, int flag);
        std::string visit(TernaryArrayNode*, int flag);
        std::string visit(TimesNode*, int flag);
        std::string visit(UnaryMinusNode*, int flag);
        std::string visit(VarNode*, int flag);
        std::string visit(VarsNode*, int flag);
        std::string visit(WhileNode*, int flag);

};

#endif
