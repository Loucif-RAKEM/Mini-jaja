#ifndef INSTRUCTION_H
#define INSTRUCTION_H
#include "Interpreter.h"
#include "Memory.h"
class Instruction
{
    public:
        Instruction(std::string label);
        std::string getLabel();
        virtual void interpret(Memory* mem, int* address) = 0;

    private:
        std::string label;

};


#endif // INSTRUCTION_H
