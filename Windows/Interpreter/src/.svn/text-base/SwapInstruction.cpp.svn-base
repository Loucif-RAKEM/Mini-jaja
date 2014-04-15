#include <iostream>
#include "SwapInstruction.h"

using namespace std;

SwapInstruction::SwapInstruction(string label):Instruction(label)
{

}

string SwapInstruction::getLabel() const
{
    return label;
}

void SwapInstruction::setLabel(string label)
{
    label = label;
}

void SwapInstruction::interpret ( Memory* mem, int* address){
    mem->getStack()->swap();
    *address = *address + 1;
}
