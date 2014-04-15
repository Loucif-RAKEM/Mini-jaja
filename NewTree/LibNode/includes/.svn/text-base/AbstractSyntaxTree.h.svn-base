#ifndef ABSTRACTSYNTAXTREE_H
#define ABSTRACTSYNTAXTREE_H

#include "Node.h"

class AbstractSyntaxTree{

public:
    static void onASTCompleted(Node* rootNode);
    static AbstractSyntaxTree getSingleton();
    void setRootNode(Node* rootNode);
    Node* getRootNode() const;
    ~AbstractSyntaxTree();

private:
    AbstractSyntaxTree();
    Node* rootNode;
    static AbstractSyntaxTree singleton;

};

#endif
