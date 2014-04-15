#ifndef NODE_H
#define NODE_H

#include <string>
class VisitComp;
class VisitInterp;
class Memory;
class TypeChecker;
using namespace std;

class Node{

    public:
        Node(string label, const unsigned int nbChildren);
        virtual ~Node() = 0;
        void appendChild(Node* child);
        string getLabel() const;
        void display(unsigned int indentationLevel = 0) const;
        Node** getChildren() const;
        virtual string accept(VisitComp*, int flag=0) = 0;
        virtual string accept(VisitInterp* v, Memory* mem, int flag=0) = 0;
        virtual string accept(TypeChecker* v, Memory* mem) = 0;

    protected:
        string label;

    private:
        const unsigned int nbChildren;
        unsigned int currentNbChildren;
        Node** children; // Array of pointers to Node objects

};

#endif
