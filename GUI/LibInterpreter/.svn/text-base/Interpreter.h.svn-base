#ifndef INTERPRETER_H
#define INTERPRETER_H

#include <iostream>
#include <sstream>
#include <QString>
#include <QRegExp>
#include "Stack.h"
#include "Quadruplet.h"

class Tuple;

void die(std::string error);

namespace Interpreter{

    void interpret(std::string jajaCode, Tuple* tuple);

    void affecterVal(const std::string identifier, const int value, Stack<Quadruplet*>* stack);

    void declVar(const std::string identifier, const int value, const Type type, Stack<Quadruplet*>* stack);

    int val(const std::string identifier, Stack<Quadruplet*>* stack);

}

#endif
