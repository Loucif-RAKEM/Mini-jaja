#ifndef TYPECHECKER_H
#define TYPECHECKER_H

#include <map>
#include "AllNodes.h"
#include "Type.h"

class MJJProgram;
class Quadruplet;

class TypeChecker
{

    public:
        TypeChecker();
        void checkProgram(MJJProgram mjjprogram);
        Type getType(Node* node, Memory* mem);
        int getValue(Node* node, Memory* mem);
        bool errorsFound();
        std::string visit(ClassNode* cn, Memory* mem);
        std::string visit(VarsNode *vsn, Memory *mem);
        std::string visit(WhileNode *wn, Memory *mem);
        std::string visit(VarNode *vn, Memory *mem);
        std::string visit(UnaryMinusNode *umn, Memory *mem);
        std::string visit(TimesNode *umn, Memory *mem);
        std::string visit(TernaryArrayNode *umn, Memory *mem);
        std::string visit(SumNode *sn, Memory *mem);
        std::string visit(ReturnNode *rn, Memory *mem);
        std::string visit(PlusNode *pn, Memory *mem);
        std::string visit(OrNode *on, Memory *mem);
        std::string visit(NumberNode *nn, Memory *mem);
        std::string visit(NotNode *sn, Memory *mem);
        std::string visit(MethodNode *mn, Memory *mem);
        std::string visit(MainNode *mn, Memory *mem);
        std::string visit(LeafNode *sn, Memory *mem);
        std::string visit(InstrsNode *in, Memory *mem);
        std::string visit(IncrementNode *sn, Memory *mem);
        std::string visit(IfNode *in, Memory *mem);
        std::string visit(IfElseNode *ien, Memory *mem);
        std::string visit(IdentNode *in, Memory *mem);
        std::string visit(HeadersNode *hsn, Memory *mem);
        std::string visit(HeaderNode *hn, Memory *mem);
        std::string visit(GreaterThanNode *sn, Memory *mem);
        std::string visit(ExpListNode *sn, Memory *mem);
        std::string visit(EqualityNode *sn, Memory *mem);
        std::string visit(DivideNode *sn, Memory *mem);
        std::string visit(DeclsNode *sn, Memory *mem);
        std::string visit(CstNode *sn, Memory *mem);
        std::string visit(CallINode *sn, Memory *mem);
        std::string visit(CallENode *sn, Memory *mem);
        std::string visit(BinaryMinusNode *sn, Memory *mem);
        std::string visit(BinaryArrayNode *sn, Memory *mem);
        std::string visit(AssignmentNode *sn, Memory *mem);
        std::string visit(AndNode *sn, Memory *mem);

    private:
        map<std::string, Quadruplet*> idInfos;
        bool m_errorsFound;
        void notifyError();
        void notifyError(string error);

};

#endif // TYPECHECKER_H
