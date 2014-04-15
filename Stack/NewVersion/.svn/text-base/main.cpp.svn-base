#include <iostream>
#include <cstdlib>
#include "Stack.h"
#include "Quadruplet.h"
#include "Interpreter.h"

using namespace std;

void die(string error){
    cerr << error << endl;
    exit(EXIT_FAILURE);
}

int main(){

    Stack<Quadruplet*>* s = new Stack<Quadruplet*>();
    Interpreter::declVar("q0", 3, INTEGER, s);
    Interpreter::declVar("q1", 4, INTEGER, s);
    Interpreter::declVar("q2", 5, INTEGER, s);
    Interpreter::affecterVal("q0", 64, s);
    Interpreter::affecterVal("q1", 128, s);
    Interpreter::affecterVal("q2", 256, s);
    s->display();
    Interpreter::declVar("q2", 256, INTEGER, s);
    s->display();

    delete s;

    return EXIT_SUCCESS;
}
