#ifndef INTERPRETER_H
#define INTERPRETER_H

#include <iostream>
#include <sstream>
#include <QString>
#include <QRegExp>
#include "Stack.h"
#include "Quadruplet.h"

class Tuple;
class MJJProgram;
class Memory;

void die(std::string error);

namespace Interpreter{

    void interpretProgram(MJJProgram mjjprogram);

    void interpret(std::string jajaCode, Tuple* tuple);

    void affecterVal(const std::string identifier, const int value, Memory* mem);

    void declVar(const std::string identifier, const int value, const Type type, Memory* mem);

    int val(const std::string identifier, Memory* mem);

}

#endif
