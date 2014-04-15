#ifndef NODE_H
#define NODE_H

#include <string>
class VisitComp;

using namespace std;

class Node{

    public:
        Node(string label, const unsigned int nbChildren);
        virtual ~Node() = 0;
        void appendChild(Node* child);
        string getLabel() const;
        void display(unsigned int indentationLevel = 0) const;
        Node** getChildren() const;
        virtual string accept(VisitComp*);

    protected:
        string label;

    private:
        const unsigned int nbChildren;
        unsigned int currentNbChildren;
        Node** children; // Array of pointers to Node objects

};

#endif
