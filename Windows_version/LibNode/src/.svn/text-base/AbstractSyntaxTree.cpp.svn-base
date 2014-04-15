#include <iostream>
#include "AbstractSyntaxTree.h"

using namespace std;

AbstractSyntaxTree AbstractSyntaxTree::singleton = AbstractSyntaxTree();

AbstractSyntaxTree::AbstractSyntaxTree(){}

AbstractSyntaxTree::~AbstractSyntaxTree(){}

void AbstractSyntaxTree::onASTCompleted(Node *rootNode)
{
    cout << "Exécution de la fonction de callback..." << endl;
    AbstractSyntaxTree::getSingleton().setRootNode(rootNode);
    rootNode->display();
    cout << "Exécution de la fonction de callback terminée" << endl;
}

AbstractSyntaxTree AbstractSyntaxTree::getSingleton()
{
    return AbstractSyntaxTree::singleton;
}

void AbstractSyntaxTree::setRootNode(Node *rootNode)
{
    this->rootNode = rootNode;
}

Node* AbstractSyntaxTree::getRootNode() const
{
    return AbstractSyntaxTree::getSingleton().rootNode;
}
