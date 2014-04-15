#include "Node.h"
#include <iostream>

Node::Node(string label, const unsigned int nbChildren): label(label), nbChildren(nbChildren), currentNbChildren(0), children(new Node*[nbChildren]){}

Node::~Node(){
    for(int i=0; i<currentNbChildren; i++){
        delete children[i];
        children[i] = NULL;
    }
    delete[] children;
    children = NULL;
}

void Node::appendChild(Node* child){
    if(currentNbChildren < nbChildren){
        children[currentNbChildren] = child;
        currentNbChildren++;
    }else std::cerr << "Error : trying to append a child to an already full node." << std::endl;
}

string Node::getLabel() const{
    return label;
}

Node** Node::getChildren() const{
    return children;
}

void Node::display(unsigned int indentationLevel) const{
    for(int tab=0; tab<indentationLevel; tab++) std::cout << "\t";
    std::cout << getLabel() << std::endl;
    for(int i=0; i<currentNbChildren; i++){
        children[i]->display(indentationLevel + 1);
    }
}

string Node::accept(VisitComp*){}
