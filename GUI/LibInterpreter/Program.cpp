#include "Program.h"
#include "Tuple.h"
#include "Interpreter.h"

using namespace std;

Program::Program() : instructions(new LinkedList<string*>()){}

Program::~Program(){
    delete instructions;
}

void Program::fromFile(ifstream& inputFile){
    string* line = new string();
    while(getline(inputFile, *line)){
        instructions->insertAfter(line);
        line = new string();
    }
    delete line;
}

void Program::execute(){
    LinkedListIterator<string*>* iter = instructions->getIterator();
    Tuple* tuple = new Tuple(NULL, 0);
    while(!iter->isEnd()){
        string* instruction = iter->getNext();
        Interpreter::interpret(*instruction, tuple);
        cout << "État de la pile après interprétation de " << *instruction << " : " << endl;
        tuple->getStack()->display();
        cout << endl;
    }
    delete iter;
    delete tuple;
}

