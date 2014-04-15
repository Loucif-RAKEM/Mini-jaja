#include <QtCore/QString>
#include <QtTest/QtTest>
#include "All.h"

class CompTest : public QObject
{
    Q_OBJECT

    public:
        CompTest();

    private Q_SLOTS:
        void leafNodeTest();
        void identNodeTest();
        void numberNodeTest();
        void unaryMinusNodeTest();
        void returnNodeTest();
        void incrementNodeTest();
        void timesNodeTest();
        void plusNodeTest();
        void divideNodeTest();
        void sumNodeTest();
        void binaryMinusNodeTest();
        void assignmentNodeTest();
        void equalityNodeTest();
        void greaterThanNodeTest();
        void instrsNodeTest();
        void andNodeTest();
        void orNodeTest();
        void headerNodeTest();
        void headersNodeTest();
        void expListNodeTest();
        void notNodeTest();
        void varNodeTest();
        void varsNodeTest();
        void methodNodeTest();
        void mainNodeTest();
        void ifNodeTest();
        void ifElseNodeTest();
        void whileNodeTest();
        void declsNodeTest();
        void callINodeTest();
        void callENodeTest();
        void classNodeTest();
        void cstNodeTest();
};

CompTest::CompTest()
{
}

void CompTest::leafNodeTest()
{

    LeafNode* myNode = new LeafNode("test");
    std::string testValue = "test";


    QCOMPARE(testValue, myNode->getLabel());
   //QCOMPARE(testValue2, myNode->getLabel());
}


void CompTest::identNodeTest()
{
    LeafNode* myLeafNode = new LeafNode("test");
    IdentNode* myIdentNode= new IdentNode(myLeafNode);
    std::string testValue = "ident";
    std::string testValue2 = "test";

    QCOMPARE(testValue, myIdentNode->getLabel());
    QCOMPARE(testValue2, myIdentNode->getChildren()[0]->getLabel());
}

void CompTest::numberNodeTest()
{

    LeafNode* myLeafNode = new LeafNode("1");
    NumberNode* myNumberNode = new NumberNode (myLeafNode);
    std::string testValue = "number";
    std::string testValue2 = "1";

    QCOMPARE(testValue, myNumberNode->getLabel());
    QCOMPARE(testValue2, myNumberNode->getChildren()[0]->getLabel());
}

void CompTest::unaryMinusNodeTest()
{

    LeafNode* myLeafNode = new LeafNode("1");
    NumberNode* myNumberNode =new NumberNode(myLeafNode);
    UnaryMinusNode* myunaryMinusNode = new UnaryMinusNode(myNumberNode);

    std::string testValue1 = "unaryminus";
    std::string testValue2 = "number";
    std::string testValue3 = "1";

    QCOMPARE(testValue1, myunaryMinusNode->getLabel());
    QCOMPARE(testValue2, myunaryMinusNode->getChildren()[0]->getLabel());
    QCOMPARE(testValue3, myunaryMinusNode->getChildren()[0]->getChildren()[0]->getLabel());

}

void CompTest::returnNodeTest()
{

    LeafNode* myLeafNode = new LeafNode("1");
    NumberNode* myNumberNode = new NumberNode(myLeafNode);
    ReturnNode* myreturnNode = new ReturnNode(myNumberNode);

    std::string testValue1 = "return";
    std::string testValue2 = "number";
    std::string testValue3 = "1";

    QCOMPARE(testValue1, myreturnNode->getLabel());
    QCOMPARE(testValue2, myreturnNode->getChildren()[0]->getLabel());
    QCOMPARE(testValue3, myreturnNode->getChildren()[0]->getChildren()[0]->getLabel());

}

void CompTest::incrementNodeTest()
{

    LeafNode* myLeafNode = new LeafNode("i");
    IdentNode* myIdentNode = new IdentNode(myLeafNode);
    IncrementNode* myIncrementNode = new IncrementNode(myIdentNode);

    std::string testValue1 = "increment";
    std::string testValue2 = "ident";
    std::string testValue3 = "i";

    QCOMPARE(testValue1, myIncrementNode->getLabel());
    QCOMPARE(testValue2, myIncrementNode->getChildren()[0]->getLabel());
    QCOMPARE(testValue3, myIncrementNode->getChildren()[0]->getChildren()[0]->getLabel());

}

void CompTest::timesNodeTest()
{

    LeafNode* myLeafNode1 = new LeafNode("i");
    IdentNode* myIdentNode = new IdentNode(myLeafNode1);
    LeafNode* myLeafNode2 = new LeafNode("1");
    NumberNode* myNumberNode = new NumberNode (myLeafNode2);
    TimesNode* myTimesNode = new TimesNode(myIdentNode, myNumberNode);

    std::string testValue1 = "times";
    std::string testValue2 = "ident";
    std::string testValue3 = "number";
    std::string testValue4 = "i";
    std::string testValue5 = "1";

    QCOMPARE(testValue1, myTimesNode->getLabel());
    QCOMPARE(testValue2, myTimesNode->getChildren()[0]->getLabel());
    QCOMPARE(testValue3, myTimesNode->getChildren()[1]->getLabel());
    QCOMPARE(testValue4, myTimesNode->getChildren()[0]->getChildren()[0]->getLabel());
    QCOMPARE(testValue5, myTimesNode->getChildren()[1]->getChildren()[0]->getLabel());

}

void CompTest::plusNodeTest()
{

    LeafNode* myLeafNode1 = new LeafNode("i");
    IdentNode* myIdentNode = new IdentNode(myLeafNode1);
    LeafNode* myLeafNode2 = new LeafNode("1");
    NumberNode* myNumberNode = new NumberNode (myLeafNode2);
    PlusNode* myPlusNode = new PlusNode(myIdentNode, myNumberNode);

    std::string testValue1 = "plus";
    std::string testValue2 = "ident";
    std::string testValue3 = "number";
    std::string testValue4 = "i";
    std::string testValue5 = "1";

    QCOMPARE(testValue1, myPlusNode->getLabel());
    QCOMPARE(testValue2, myPlusNode->getChildren()[0]->getLabel());
    QCOMPARE(testValue3, myPlusNode->getChildren()[1]->getLabel());
    QCOMPARE(testValue4, myPlusNode->getChildren()[0]->getChildren()[0]->getLabel());
    QCOMPARE(testValue5, myPlusNode->getChildren()[1]->getChildren()[0]->getLabel());

}

void CompTest::divideNodeTest()
{

    LeafNode* myLeafNode1 = new LeafNode("i");
    IdentNode* myIdentNode = new IdentNode(myLeafNode1);
    LeafNode* myLeafNode2 = new LeafNode("1");
    NumberNode* myNumberNode = new NumberNode (myLeafNode2);
    DivideNode* myDivideNode = new DivideNode(myIdentNode, myNumberNode);

    std::string testValue1 = "divide";
    std::string testValue2 = "ident";
    std::string testValue3 = "number";
    std::string testValue4 = "i";
    std::string testValue5 = "1";

    QCOMPARE(testValue1, myDivideNode->getLabel());
    QCOMPARE(testValue2, myDivideNode->getChildren()[0]->getLabel());
    QCOMPARE(testValue3, myDivideNode->getChildren()[1]->getLabel());
    QCOMPARE(testValue4, myDivideNode->getChildren()[0]->getChildren()[0]->getLabel());
    QCOMPARE(testValue5, myDivideNode->getChildren()[1]->getChildren()[0]->getLabel());

}

void CompTest::sumNodeTest()
{

    LeafNode* myLeafNode1 = new LeafNode("i");
    IdentNode* myIdentNode = new IdentNode(myLeafNode1);
    LeafNode* myLeafNode2 = new LeafNode("1");
    NumberNode* myNumberNode = new NumberNode (myLeafNode2);
    SumNode* mySumNode = new SumNode(myIdentNode, myNumberNode);

    std::string testValue1 = "sum";
    std::string testValue2 = "ident";
    std::string testValue3 = "number";
    std::string testValue4 = "i";
    std::string testValue5 = "1";

    QCOMPARE(testValue1, mySumNode->getLabel());
    QCOMPARE(testValue2, mySumNode->getChildren()[0]->getLabel());
    QCOMPARE(testValue3, mySumNode->getChildren()[1]->getLabel());
    QCOMPARE(testValue4, mySumNode->getChildren()[0]->getChildren()[0]->getLabel());
    QCOMPARE(testValue5, mySumNode->getChildren()[1]->getChildren()[0]->getLabel());

}

void CompTest::binaryMinusNodeTest()
{

    LeafNode* myLeafNode1 = new LeafNode("i");
    IdentNode* myIdentNode = new IdentNode(myLeafNode1);
    LeafNode* myLeafNode2 = new LeafNode("1");
    NumberNode* myNumberNode = new NumberNode (myLeafNode2);
    BinaryMinusNode* myBinaryMinusNode = new BinaryMinusNode(myIdentNode, myNumberNode);

    std::string testValue1 = "binaryminus";
    std::string testValue2 = "ident";
    std::string testValue3 = "number";
    std::string testValue4 = "i";
    std::string testValue5 = "1";

    QCOMPARE(testValue1, myBinaryMinusNode->getLabel());
    QCOMPARE(testValue2, myBinaryMinusNode->getChildren()[0]->getLabel());
    QCOMPARE(testValue3, myBinaryMinusNode->getChildren()[1]->getLabel());
    QCOMPARE(testValue4, myBinaryMinusNode->getChildren()[0]->getChildren()[0]->getLabel());
    QCOMPARE(testValue5, myBinaryMinusNode->getChildren()[1]->getChildren()[0]->getLabel());

}

void CompTest::assignmentNodeTest()
{

    LeafNode* myLeafNode1 = new LeafNode("i");
    IdentNode* myIdentNode = new IdentNode(myLeafNode1);
    LeafNode* myLeafNode2 = new LeafNode("1");
    NumberNode* myNumberNode = new NumberNode (myLeafNode2);
    AssignmentNode* myAssignmentNode = new AssignmentNode(myIdentNode, myNumberNode);

    std::string testValue1 = "assignment";
    std::string testValue2 = "ident";
    std::string testValue3 = "number";
    std::string testValue4 = "i";
    std::string testValue5 = "1";

    QCOMPARE(testValue1, myAssignmentNode->getLabel());
    QCOMPARE(testValue2, myAssignmentNode->getChildren()[0]->getLabel());
    QCOMPARE(testValue3, myAssignmentNode->getChildren()[1]->getLabel());
    QCOMPARE(testValue4, myAssignmentNode->getChildren()[0]->getChildren()[0]->getLabel());
    QCOMPARE(testValue5, myAssignmentNode->getChildren()[1]->getChildren()[0]->getLabel());

}

void CompTest::equalityNodeTest()
{

    LeafNode* myLeafNode1 = new LeafNode("i");
    IdentNode* myIdentNode = new IdentNode(myLeafNode1);
    LeafNode* myLeafNode2 = new LeafNode("1");
    NumberNode* myNumberNode = new NumberNode (myLeafNode2);
    EqualityNode* myEqualityNode = new EqualityNode(myIdentNode, myNumberNode);

    std::string testValue1 = "equality";
    std::string testValue2 = "ident";
    std::string testValue3 = "number";
    std::string testValue4 = "i";
    std::string testValue5 = "1";

    QCOMPARE(testValue1, myEqualityNode->getLabel());
    QCOMPARE(testValue2, myEqualityNode->getChildren()[0]->getLabel());
    QCOMPARE(testValue3, myEqualityNode->getChildren()[1]->getLabel());
    QCOMPARE(testValue4, myEqualityNode->getChildren()[0]->getChildren()[0]->getLabel());
    QCOMPARE(testValue5, myEqualityNode->getChildren()[1]->getChildren()[0]->getLabel());

}

void CompTest::greaterThanNodeTest()
{

    LeafNode* myLeafNode1 = new LeafNode("i");
    IdentNode* myIdentNode = new IdentNode(myLeafNode1);
    LeafNode* myLeafNode2 = new LeafNode("1");
    NumberNode* myNumberNode = new NumberNode (myLeafNode2);
    GreaterThanNode* myGreaterNode = new GreaterThanNode(myIdentNode, myNumberNode);

    std::string testValue1 = "greaterthan";
    std::string testValue2 = "ident";
    std::string testValue3 = "number";
    std::string testValue4 = "i";
    std::string testValue5 = "1";

    QCOMPARE(testValue1, myGreaterNode->getLabel());
    QCOMPARE(testValue2, myGreaterNode->getChildren()[0]->getLabel());
    QCOMPARE(testValue3, myGreaterNode->getChildren()[1]->getLabel());
    QCOMPARE(testValue4, myGreaterNode->getChildren()[0]->getChildren()[0]->getLabel());
    QCOMPARE(testValue5, myGreaterNode->getChildren()[1]->getChildren()[0]->getLabel());

}

void CompTest::instrsNodeTest()
{

    LeafNode* myLeafNode1 = new LeafNode("i");
    IdentNode* myIdentNode = new IdentNode(myLeafNode1);
    LeafNode* myLeafNode2 = new LeafNode("1");
    NumberNode* myNumberNode = new NumberNode (myLeafNode2);
    PlusNode* myPlusNode = new PlusNode(myIdentNode, myNumberNode);
    LeafNode* myLeafNode3 = new LeafNode("inil");
    InstrsNode* myInstrsNode = new InstrsNode(myPlusNode, myLeafNode3);

    std::string testValue1 = "instrs";
    std::string testValue2 = "plus";
    std::string testValue3 = "inil";
    std::string testValue4 = "ident";
    std::string testValue5 = "number";
    std::string testValue6 = "i";
    std::string testValue7 = "1";

    QCOMPARE(testValue1, myInstrsNode->getLabel());
    QCOMPARE(testValue2, myInstrsNode->getChildren()[0]->getLabel());
    QCOMPARE(testValue3, myInstrsNode->getChildren()[1]->getLabel());
    QCOMPARE(testValue4, myInstrsNode->getChildren()[0]->getChildren()[0]->getLabel());
    QCOMPARE(testValue5, myInstrsNode->getChildren()[0]->getChildren()[1]->getLabel());
    QCOMPARE(testValue6, myInstrsNode->getChildren()[0]->getChildren()[0]->getChildren()[0]->getLabel());
    QCOMPARE(testValue7, myInstrsNode->getChildren()[0]->getChildren()[1]->getChildren()[0]->getLabel());

}

void CompTest::notNodeTest()
{

    LeafNode* myLeafNode11 = new LeafNode("i");
    IdentNode* myIdentNode1 = new IdentNode(myLeafNode11);
    LeafNode* myLeafNode12 = new LeafNode("1");
    NumberNode* myNumberNode1 = new NumberNode (myLeafNode12);
    EqualityNode* myEqualityNode1 = new EqualityNode(myIdentNode1, myNumberNode1);
    LeafNode* myLeafNode21 = new LeafNode("a");
    IdentNode* myIdentNode2 = new IdentNode(myLeafNode21);
    LeafNode* myLeafNode22 = new LeafNode("2");
    NumberNode* myNumberNode2 = new NumberNode (myLeafNode22);
    GreaterThanNode* myEqualityNode2 = new GreaterThanNode(myIdentNode2, myNumberNode2);
    AndNode* myAndNode = new AndNode(myEqualityNode1, myEqualityNode2);
    NotNode* myNotNode = new NotNode(myAndNode);

    std::string testValue0 = "not";
    std::string testValue1 = "and";
    std::string testValue2 = "equality";
    std::string testValue3 = "greaterthan";
    std::string testValue4 = "ident";
    std::string testValue5 = "number";
    std::string testValue6 = "ident";
    std::string testValue7 = "number";
    std::string testValue8 = "i";
    std::string testValue9 = "1";
    std::string testValue10 = "a";
    std::string testValue11 = "2";

    QCOMPARE(testValue0, myNotNode->getLabel());
    QCOMPARE(testValue1, myNotNode->getChildren()[0]->getLabel());
    QCOMPARE(testValue2, myNotNode->getChildren()[0]->getChildren()[0]->getLabel());
    QCOMPARE(testValue3, myNotNode->getChildren()[0]->getChildren()[1]->getLabel());
    QCOMPARE(testValue4, myNotNode->getChildren()[0]->getChildren()[0]->getChildren()[0]->getLabel());
    QCOMPARE(testValue5, myNotNode->getChildren()[0]->getChildren()[0]->getChildren()[1]->getLabel());
    QCOMPARE(testValue6, myNotNode->getChildren()[0]->getChildren()[1]->getChildren()[0]->getLabel());
    QCOMPARE(testValue7, myNotNode->getChildren()[0]->getChildren()[1]->getChildren()[1]->getLabel());
    QCOMPARE(testValue8, myNotNode->getChildren()[0]->getChildren()[0]->getChildren()[0]->getChildren()[0]->getLabel());
    QCOMPARE(testValue9, myNotNode->getChildren()[0]->getChildren()[0]->getChildren()[1]->getChildren()[0]->getLabel());
    QCOMPARE(testValue10,myNotNode->getChildren()[0]->getChildren()[1]->getChildren()[0]->getChildren()[0]->getLabel());
    QCOMPARE(testValue11,myNotNode->getChildren()[0]->getChildren()[1]->getChildren()[1]->getChildren()[0]->getLabel());
}

void CompTest::andNodeTest()
{

    LeafNode* myLeafNode11 = new LeafNode("i");
    IdentNode* myIdentNode1 = new IdentNode(myLeafNode11);
    LeafNode* myLeafNode12 = new LeafNode("1");
    NumberNode* myNumberNode1 = new NumberNode (myLeafNode12);
    EqualityNode* myEqualityNode1 = new EqualityNode(myIdentNode1, myNumberNode1);
    LeafNode* myLeafNode21 = new LeafNode("a");
    IdentNode* myIdentNode2 = new IdentNode(myLeafNode21);
    LeafNode* myLeafNode22 = new LeafNode("2");
    NumberNode* myNumberNode2 = new NumberNode (myLeafNode22);
    GreaterThanNode* myEqualityNode2 = new GreaterThanNode(myIdentNode2, myNumberNode2);
    AndNode* myAndNode = new AndNode(myEqualityNode1, myEqualityNode2);

    std::string testValue1 = "and";
    std::string testValue2 = "equality";
    std::string testValue3 = "greaterthan";
    std::string testValue4 = "ident";
    std::string testValue5 = "number";
    std::string testValue6 = "ident";
    std::string testValue7 = "number";
    std::string testValue8 = "i";
    std::string testValue9 = "1";
    std::string testValue10 = "a";
    std::string testValue11 = "2";
    QCOMPARE(testValue1, myAndNode->getLabel());
    QCOMPARE(testValue2, myAndNode->getChildren()[0]->getLabel());
    QCOMPARE(testValue3, myAndNode->getChildren()[1]->getLabel());
    QCOMPARE(testValue4, myAndNode->getChildren()[0]->getChildren()[0]->getLabel());
    QCOMPARE(testValue5, myAndNode->getChildren()[0]->getChildren()[1]->getLabel());
    QCOMPARE(testValue6, myAndNode->getChildren()[1]->getChildren()[0]->getLabel());
    QCOMPARE(testValue7, myAndNode->getChildren()[1]->getChildren()[1]->getLabel());
    QCOMPARE(testValue8, myAndNode->getChildren()[0]->getChildren()[0]->getChildren()[0]->getLabel());
    QCOMPARE(testValue9, myAndNode->getChildren()[0]->getChildren()[1]->getChildren()[0]->getLabel());
    QCOMPARE(testValue10, myAndNode->getChildren()[1]->getChildren()[0]->getChildren()[0]->getLabel());
    QCOMPARE(testValue11, myAndNode->getChildren()[1]->getChildren()[1]->getChildren()[0]->getLabel());
}

void CompTest::orNodeTest()
{

    LeafNode* myLeafNode11 = new LeafNode("i");
    IdentNode* myIdentNode1 = new IdentNode(myLeafNode11);
    LeafNode* myLeafNode12 = new LeafNode("1");
    NumberNode* myNumberNode1 = new NumberNode (myLeafNode12);
    EqualityNode* myEqualityNode1 = new EqualityNode(myIdentNode1, myNumberNode1);
    LeafNode* myLeafNode21 = new LeafNode("a");
    IdentNode* myIdentNode2 = new IdentNode(myLeafNode21);
    LeafNode* myLeafNode22 = new LeafNode("2");
    NumberNode* myNumberNode2 = new NumberNode (myLeafNode22);
    GreaterThanNode* myEqualityNode2 = new GreaterThanNode(myIdentNode2, myNumberNode2);
    OrNode* myOrNode = new OrNode(myEqualityNode1, myEqualityNode2);

    std::string testValue1 = "or";
    std::string testValue2 = "equality";
    std::string testValue3 = "greaterthan";
    std::string testValue4 = "ident";
    std::string testValue5 = "number";
    std::string testValue6 = "ident";
    std::string testValue7 = "number";
    std::string testValue8 = "i";
    std::string testValue9 = "1";
    std::string testValue10 = "a";
    std::string testValue11 = "2";

    QCOMPARE(testValue1, myOrNode->getLabel());
    QCOMPARE(testValue2, myOrNode->getChildren()[0]->getLabel());
    QCOMPARE(testValue3, myOrNode->getChildren()[1]->getLabel());
    QCOMPARE(testValue4, myOrNode->getChildren()[0]->getChildren()[0]->getLabel());
    QCOMPARE(testValue5, myOrNode->getChildren()[0]->getChildren()[1]->getLabel());
    QCOMPARE(testValue6, myOrNode->getChildren()[1]->getChildren()[0]->getLabel());
    QCOMPARE(testValue7, myOrNode->getChildren()[1]->getChildren()[1]->getLabel());
    QCOMPARE(testValue8, myOrNode->getChildren()[0]->getChildren()[0]->getChildren()[0]->getLabel());
    QCOMPARE(testValue9, myOrNode->getChildren()[0]->getChildren()[1]->getChildren()[0]->getLabel());
    QCOMPARE(testValue10, myOrNode->getChildren()[1]->getChildren()[0]->getChildren()[0]->getLabel());
    QCOMPARE(testValue11, myOrNode->getChildren()[1]->getChildren()[1]->getChildren()[0]->getLabel());
}

void CompTest::headerNodeTest()
{
    LeafNode* myLeafNode1 = new LeafNode("int");
    LeafNode* myLeafNode2 = new LeafNode("a");
    IdentNode* myIdentNode= new IdentNode(myLeafNode2);
    HeaderNode* myHeaderNode = new HeaderNode(myLeafNode1, myIdentNode);
    std::string testValue = "header";
    std::string testValue2 = "int";
    std::string testValue3 = "ident";
    std::string testValue4 = "a";

    QCOMPARE(testValue,  myHeaderNode->getLabel());
    QCOMPARE(testValue2, myHeaderNode->getChildren()[0]->getLabel());
    QCOMPARE(testValue3, myHeaderNode->getChildren()[1]->getLabel());
    QCOMPARE(testValue4, myHeaderNode->getChildren()[1]->getChildren()[0]->getLabel());
}

void CompTest::headersNodeTest()
{
    LeafNode* myLeafNode1 = new LeafNode("int");
    LeafNode* myLeafNode2 = new LeafNode("a");
    LeafNode* myLeafNode3 = new LeafNode("enil");
    IdentNode* myIdentNode= new IdentNode(myLeafNode2);
    HeaderNode* myHeaderNode = new HeaderNode(myLeafNode1, myIdentNode);
    HeadersNode* myHeadersNode = new HeadersNode(myHeaderNode, myLeafNode3);

    std::string testValue = "headers";
    std::string testValue2 = "header";
    std::string testValue3 = "enil";
    std::string testValue4 = "int";
    std::string testValue5 = "ident";
    std::string testValue6 = "a";

    QCOMPARE(testValue,  myHeadersNode->getLabel());
    QCOMPARE(testValue2, myHeadersNode->getChildren()[0]->getLabel());
    QCOMPARE(testValue3, myHeadersNode->getChildren()[1]->getLabel());
    QCOMPARE(testValue4, myHeadersNode->getChildren()[0]->getChildren()[0]->getLabel());
    QCOMPARE(testValue5, myHeadersNode->getChildren()[0]->getChildren()[1]->getLabel());
    QCOMPARE(testValue6, myHeadersNode->getChildren()[0]->getChildren()[1]->getChildren()[0]->getLabel());
}

void CompTest::expListNodeTest()
{
    LeafNode* myLeafNode1 = new LeafNode("i");
    IdentNode* myIdentNode = new IdentNode(myLeafNode1);
    LeafNode* myLeafNode2 = new LeafNode("1");
    NumberNode* myNumberNode = new NumberNode (myLeafNode2);
    PlusNode* myPlusNode = new PlusNode(myIdentNode, myNumberNode);
    LeafNode* myLeafNode3 = new LeafNode ("exnil");
    ExpListNode* myExpListNode = new ExpListNode(myPlusNode, myLeafNode3);


    std::string testValue1 = "explist";
    std::string testValue2 = "plus";
    std::string testValue3 = "exnil";
    std::string testValue4 = "ident";
    std::string testValue5 = "number";
    std::string testValue6 = "i";
    std::string testValue7 = "1";


    QCOMPARE(testValue1, myExpListNode->getLabel());
    QCOMPARE(testValue2, myExpListNode->getChildren()[0]->getLabel());
    QCOMPARE(testValue3, myExpListNode->getChildren()[1]->getLabel());
    QCOMPARE(testValue4, myExpListNode->getChildren()[0]->getChildren()[0]->getLabel());
    QCOMPARE(testValue5, myExpListNode->getChildren()[0]->getChildren()[1]->getLabel());
    QCOMPARE(testValue6, myExpListNode->getChildren()[0]->getChildren()[0]->getChildren()[0]->getLabel());
    QCOMPARE(testValue7, myExpListNode->getChildren()[0]->getChildren()[1]->getChildren()[0]->getLabel());

}

void CompTest::varNodeTest()
{
    LeafNode* myLeafNode1 = new LeafNode("int");
    LeafNode* myLeafNode2 = new LeafNode("i");
    IdentNode* myIdentNode1 = new IdentNode(myLeafNode2);
    LeafNode* myLeafNode3 = new LeafNode("a");
    IdentNode* myIdentNode2 = new IdentNode(myLeafNode3);
    LeafNode* myLeafNode4 = new LeafNode("1");
    NumberNode* myNumberNode = new NumberNode (myLeafNode4);
    PlusNode* myPlusNode = new PlusNode(myIdentNode2, myNumberNode);
    VarNode* myVarNode = new VarNode(myLeafNode1, myIdentNode1, myPlusNode);



    std::string testValue1 = "var";
    std::string testValue2 = "int";
    std::string testValue3 = "ident";
    std::string testValue4 = "plus";
    std::string testValue5 = "i";
    std::string testValue6 = "ident";
    std::string testValue7 = "number";
    std::string testValue8 = "a";
    std::string testValue9 = "1";


    QCOMPARE(testValue1, myVarNode->getLabel());
    QCOMPARE(testValue2, myVarNode->getChildren()[0]->getLabel());
    QCOMPARE(testValue3, myVarNode->getChildren()[1]->getLabel());
    QCOMPARE(testValue4, myVarNode->getChildren()[2]->getLabel());
    QCOMPARE(testValue5, myVarNode->getChildren()[1]->getChildren()[0]->getLabel());
    QCOMPARE(testValue6, myVarNode->getChildren()[2]->getChildren()[0]->getLabel());
    QCOMPARE(testValue7, myVarNode->getChildren()[2]->getChildren()[1]->getLabel());
    QCOMPARE(testValue8, myVarNode->getChildren()[2]->getChildren()[0]->getChildren()[0]->getLabel());
    QCOMPARE(testValue9, myVarNode->getChildren()[2]->getChildren()[1]->getChildren()[0]->getLabel());

}

void CompTest::varsNodeTest()
{
    LeafNode* myLeafNode1 = new LeafNode("int");
    LeafNode* myLeafNode2 = new LeafNode("i");
    IdentNode* myIdentNode1 = new IdentNode(myLeafNode2);
    LeafNode* myLeafNode3 = new LeafNode("a");
    IdentNode* myIdentNode2 = new IdentNode(myLeafNode3);
    LeafNode* myLeafNode4 = new LeafNode("1");
    NumberNode* myNumberNode = new NumberNode (myLeafNode4);
    PlusNode* myPlusNode = new PlusNode(myIdentNode2, myNumberNode);
    VarNode* myVarNode = new VarNode(myLeafNode1, myIdentNode1, myPlusNode);
    LeafNode* myLeafNode5 = new LeafNode("vnil");
    VarsNode* myVarsNode =new VarsNode(myVarNode, myLeafNode5);




    std::string testValue1 = "vars";
    std::string testValue2 = "var";
    std::string testValue3 = "vnil";
    std::string testValue4 = "int";
    std::string testValue5 = "ident";
    std::string testValue6 = "plus";
    std::string testValue7 = "i";
    std::string testValue8 = "ident";
    std::string testValue9 = "number";
    std::string testValue10 = "a";
    std::string testValue11 = "1";


    QCOMPARE(testValue1, myVarsNode->getLabel());
    QCOMPARE(testValue2, myVarsNode->getChildren()[0]->getLabel());
    QCOMPARE(testValue3, myVarsNode->getChildren()[1]->getLabel());
    QCOMPARE(testValue4, myVarsNode->getChildren()[0]->getChildren()[0]->getLabel());
    QCOMPARE(testValue5, myVarsNode->getChildren()[0]->getChildren()[1]->getLabel());
    QCOMPARE(testValue6, myVarsNode->getChildren()[0]->getChildren()[2]->getLabel());
    QCOMPARE(testValue7, myVarsNode->getChildren()[0]->getChildren()[1]->getChildren()[0]->getLabel());
    QCOMPARE(testValue8, myVarsNode->getChildren()[0]->getChildren()[2]->getChildren()[0]->getLabel());
    QCOMPARE(testValue9, myVarsNode->getChildren()[0]->getChildren()[2]->getChildren()[1]->getLabel());
    QCOMPARE(testValue10, myVarsNode->getChildren()[0]->getChildren()[2]->getChildren()[0]->getChildren()[0]->getLabel());
    QCOMPARE(testValue11, myVarsNode->getChildren()[0]->getChildren()[2]->getChildren()[1]->getChildren()[0]->getLabel());

}

void CompTest::methodNodeTest()
{

    LeafNode* myLeafNode1 = new LeafNode("int");
    LeafNode* myLeafNode2 = new LeafNode("meth");
    IdentNode* myIdentNode1 = new IdentNode(myLeafNode2);
    LeafNode* myLeafNode4 = new LeafNode("int");
    LeafNode* myLeafNode5 = new LeafNode("a");
    IdentNode* myIdentNode2 = new IdentNode(myLeafNode5);
    HeaderNode* myheaderNode = new HeaderNode(myLeafNode4, myIdentNode2);
    LeafNode* myLeafNode3 = new LeafNode("enil");
    HeadersNode* myHeadersNode = new HeadersNode(myheaderNode, myLeafNode3);
    LeafNode* myLeafNode6 = new LeafNode("int");
    LeafNode* myLeafNode7 = new LeafNode("b");
    LeafNode* myLeafNode8 = new LeafNode("omega");
    LeafNode* myLeafNode10 = new LeafNode("vnil");
    IdentNode* myIdentNode3 = new IdentNode(myLeafNode7);
    VarNode* myVarNode =new VarNode(myLeafNode6, myIdentNode3,myLeafNode8);
    VarsNode* myVarsNode = new VarsNode(myVarNode,myLeafNode10);
    LeafNode* myLeafNode9 = new LeafNode("inil");
    MethodNode* myMethodNode  = new MethodNode(myLeafNode1,myIdentNode1,myHeadersNode,myVarsNode,myLeafNode9);

    std::string testValue1 = "method";
    std::string testValue2 = "int";
    std::string testValue3 = "ident";
    std::string testValue4 = "headers";
    std::string testValue5 = "vars";
    std::string testValue6 = "inil";
    std::string testValue7 = "meth";
    std::string testValue8 = "header";
    std::string testValue9 = "enil";
    std::string testValue10 = "int";
    std::string testValue11 = "ident";
    std::string testValue12 = "omega";
    std::string testValue13 = "int";
    std::string testValue14 = "ident";
    std::string testValue15 = "a";
    std::string testValue16 = "b";
    std::string testValue17 = "vnil";

    QCOMPARE(testValue1, myMethodNode->getLabel());
    QCOMPARE(testValue2, myMethodNode->getChildren()[0]->getLabel());
    QCOMPARE(testValue3, myMethodNode->getChildren()[1]->getLabel());
    QCOMPARE(testValue4, myMethodNode->getChildren()[2]->getLabel());
    QCOMPARE(testValue5, myMethodNode->getChildren()[3]->getLabel());
    QCOMPARE(testValue6, myMethodNode->getChildren()[4]->getLabel());

    QCOMPARE(testValue7, myMethodNode->getChildren()[1]->getChildren()[0]->getLabel());

    QCOMPARE(testValue8, myMethodNode->getChildren()[2]->getChildren()[0]->getLabel());
    QCOMPARE(testValue9, myMethodNode->getChildren()[2]->getChildren()[1]->getLabel());

    QCOMPARE(testValue10, myMethodNode->getChildren()[3]->getChildren()[0]->getChildren()[0]->getLabel());
    QCOMPARE(testValue11, myMethodNode->getChildren()[3]->getChildren()[0]->getChildren()[1]->getLabel());
    QCOMPARE(testValue12, myMethodNode->getChildren()[3]->getChildren()[0]->getChildren()[2]->getLabel());
    QCOMPARE(testValue17, myMethodNode->getChildren()[3]->getChildren()[1]->getLabel());


    QCOMPARE(testValue13, myMethodNode->getChildren()[2]->getChildren()[0]->getChildren()[0]->getLabel());
    QCOMPARE(testValue14, myMethodNode->getChildren()[2]->getChildren()[0]->getChildren()[1]->getLabel());

    QCOMPARE(testValue15, myMethodNode->getChildren()[2]->getChildren()[0]->getChildren()[1]->getChildren()[0]->getLabel());
    QCOMPARE(testValue16, myMethodNode->getChildren()[3]->getChildren()[0]->getChildren()[1]->getChildren()[0]->getLabel());
}

void CompTest::mainNodeTest()
{
    LeafNode* myLeafNode1 = new LeafNode("vnil");
    LeafNode* myLeafNode2 = new LeafNode("inil");
    MainNode* myMainNode = new MainNode (myLeafNode1,myLeafNode2);

    std::string testValue1 = "main";
    std::string testValue2 = "vnil";
    std::string testValue3 = "inil";

    QCOMPARE(testValue1, myMainNode->getLabel());
    QCOMPARE(testValue2, myMainNode->getChildren()[0]->getLabel());
    QCOMPARE(testValue3, myMainNode->getChildren()[1]->getLabel());
}

void CompTest::ifNodeTest()
{
    LeafNode* myLeafNode1 = new LeafNode("i");
    IdentNode* myIdentNode = new IdentNode(myLeafNode1);
    LeafNode* myLeafNode2 = new LeafNode("inil");
    IfNode* myIfNode = new IfNode (myIdentNode,myLeafNode2);


    std::string testValue1 = "if";
    std::string testValue2 = "ident";
    std::string testValue3 = "inil";
    std::string testValue4 = "i";

    QCOMPARE(testValue1, myIfNode->getLabel());
    QCOMPARE(testValue2, myIfNode->getChildren()[0]->getLabel());
    QCOMPARE(testValue3, myIfNode->getChildren()[1]->getLabel());
    QCOMPARE(testValue4, myIfNode->getChildren()[0]->getChildren()[0]->getLabel());
}

void CompTest::ifElseNodeTest()
{
    LeafNode* myLeafNode1 = new LeafNode("i");
    IdentNode* myIdentNode = new IdentNode(myLeafNode1);
    LeafNode* myLeafNode2 = new LeafNode("inil");
    LeafNode* myLeafNode3 = new LeafNode("inil");
    IfElseNode* myIfElseNode = new IfElseNode (myIdentNode,myLeafNode2,myLeafNode3);


    std::string testValue1 = "ifelse";
    std::string testValue2 = "ident";
    std::string testValue3 = "inil";
    std::string testValue4 = "inil";
    std::string testValue5 = "i";

    QCOMPARE(testValue1, myIfElseNode->getLabel());
    QCOMPARE(testValue2, myIfElseNode->getChildren()[0]->getLabel());
    QCOMPARE(testValue3, myIfElseNode->getChildren()[1]->getLabel());
    QCOMPARE(testValue4, myIfElseNode->getChildren()[2]->getLabel());
    QCOMPARE(testValue5, myIfElseNode->getChildren()[0]->getChildren()[0]->getLabel());
}

void CompTest::whileNodeTest()
{
    LeafNode* myLeafNode1 = new LeafNode("i");
    IdentNode* myIdentNode = new IdentNode(myLeafNode1);
    LeafNode* myLeafNode2 = new LeafNode("inil");
    WhileNode* myWhileNode = new WhileNode (myIdentNode,myLeafNode2);


    std::string testValue1 = "while";
    std::string testValue2 = "ident";
    std::string testValue3 = "inil";
    std::string testValue4 = "i";

    QCOMPARE(testValue1, myWhileNode->getLabel());
    QCOMPARE(testValue2, myWhileNode->getChildren()[0]->getLabel());
    QCOMPARE(testValue3, myWhileNode->getChildren()[1]->getLabel());
    QCOMPARE(testValue4, myWhileNode->getChildren()[0]->getChildren()[0]->getLabel());
}

void CompTest::declsNodeTest()
{
    LeafNode* myLeafNode1 = new LeafNode("vnil");
    LeafNode* myLeafNode2 = new LeafNode("vnil");
    DeclsNode* myWhileNode = new DeclsNode (myLeafNode1,myLeafNode2);


    std::string testValue1 = "decls";
    std::string testValue2 = "vnil";
    std::string testValue3 = "vnil";


    QCOMPARE(testValue1, myWhileNode->getLabel());
    QCOMPARE(testValue2, myWhileNode->getChildren()[0]->getLabel());
    QCOMPARE(testValue3, myWhileNode->getChildren()[1]->getLabel());
}

void CompTest::callINodeTest()
{
    LeafNode* myLeafNode1 = new LeafNode("a");
    IdentNode* myIdentNode = new IdentNode(myLeafNode1);
    LeafNode* myLeafNode2 = new LeafNode("exnil");
    CallINode* myCallINode = new CallINode (myIdentNode,myLeafNode2);


    std::string testValue1 = "calli";
    std::string testValue2 = "ident";
    std::string testValue3 = "exnil";
    std::string testValue4 = "a";


    QCOMPARE(testValue1, myCallINode->getLabel());
    QCOMPARE(testValue2, myCallINode->getChildren()[0]->getLabel());
    QCOMPARE(testValue3, myCallINode->getChildren()[1]->getLabel());
    QCOMPARE(testValue4, myCallINode->getChildren()[0]->getChildren()[0]->getLabel());
}

void CompTest::callENodeTest()
{
    LeafNode* myLeafNode1 = new LeafNode("a");
    IdentNode* myIdentNode = new IdentNode(myLeafNode1);
    LeafNode* myLeafNode2 = new LeafNode("exnil");
    CallENode* myCallENode = new CallENode (myIdentNode,myLeafNode2);


    std::string testValue1 = "calle";
    std::string testValue2 = "ident";
    std::string testValue3 = "exnil";
    std::string testValue4 = "a";


    QCOMPARE(testValue1, myCallENode->getLabel());
    QCOMPARE(testValue2, myCallENode->getChildren()[0]->getLabel());
    QCOMPARE(testValue3, myCallENode->getChildren()[1]->getLabel());
    QCOMPARE(testValue4, myCallENode->getChildren()[0]->getChildren()[0]->getLabel());
}

void CompTest::classNodeTest()
{
    LeafNode* myLeafNode1 = new LeafNode("vnil");
    LeafNode* myLeafNode2 = new LeafNode("inil");
    MainNode* myMainNode = new MainNode (myLeafNode1,myLeafNode2);
    LeafNode* myLeafNode3 = new LeafNode("vnil");
    LeafNode* myLeafNode4 = new LeafNode("classe1");
    IdentNode* myIdentNode = new IdentNode(myLeafNode4);
    ClassNode* myClassNode =new ClassNode(myIdentNode, myLeafNode3, myMainNode);


    std::string testValue1 = "class";
    std::string testValue2 = "ident";
    std::string testValue3 = "vnil";
    std::string testValue4 = "main";
    std::string testValue5 = "classe1";
    std::string testValue6 = "vnil";
    std::string testValue7 = "inil";

    QCOMPARE(testValue1, myClassNode->getLabel());
    QCOMPARE(testValue2, myClassNode->getChildren()[0]->getLabel());
    QCOMPARE(testValue3, myClassNode->getChildren()[1]->getLabel());
    QCOMPARE(testValue4, myClassNode->getChildren()[2]->getLabel());
    QCOMPARE(testValue5, myClassNode->getChildren()[0]->getChildren()[0]->getLabel());
    QCOMPARE(testValue6, myClassNode->getChildren()[2]->getChildren()[0]->getLabel());
    QCOMPARE(testValue7, myClassNode->getChildren()[2]->getChildren()[1]->getLabel());
}
void CompTest::cstNodeTest()
{
    LeafNode* myLeafNode1 = new LeafNode("int");
    LeafNode* myLeafNode3 = new LeafNode("omega");
    LeafNode* myLeafNode2 = new LeafNode("a");
    IdentNode* myIdentNode = new IdentNode(myLeafNode2);
    CstNode* myClassNode =new CstNode(myLeafNode1, myIdentNode, myLeafNode3);


    std::string testValue1 = "cst";
    std::string testValue2 = "int";
    std::string testValue3 = "ident";
    std::string testValue4 = "omega";
    std::string testValue5 = "a";

    QCOMPARE(testValue1, myClassNode->getLabel());
    QCOMPARE(testValue2, myClassNode->getChildren()[0]->getLabel());
    QCOMPARE(testValue3, myClassNode->getChildren()[1]->getLabel());
    QCOMPARE(testValue4, myClassNode->getChildren()[2]->getLabel());
    QCOMPARE(testValue5, myClassNode->getChildren()[1]->getChildren()[0]->getLabel());
}
QTEST_APPLESS_MAIN(CompTest)

#include "tst_comptest.moc"
