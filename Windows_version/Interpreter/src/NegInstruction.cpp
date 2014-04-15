#include <iostream>
#include "NegInstruction.h"
using namespace std;

NegInstruction::NegInstruction(string label):Instruction(label)
{

}

string NegInstruction::getLabel() const
{
    return label;
}

void NegInstruction::setLabel(string label)
{
    label = label;
}


void NegInstruction::interpret (Memory* mem, int* address){
    int value1 = mem->getStack()->top()->getValue();
    mem->getStack()->pop();
    int result = -value1;
    Quadruplet* quadruplet = new Quadruplet ("",result,CST,T_OMEGA);
    mem->getStack()->push(quadruplet);
    *address = *address + 1;
}
