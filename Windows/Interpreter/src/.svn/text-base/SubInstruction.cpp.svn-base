#include "SubInstruction.h"
using namespace std;

SubInstruction::SubInstruction(string label):Instruction(label)
{

}

string SubInstruction::getLabel() const
{
    return label;
}

void SubInstruction::setLabel(string label)
{
    label = label;
}


void SubInstruction::interpret ( Memory* mem, int* address){
    int value2 = mem->getStack()->top()->getValue();
    mem->getStack()->pop();
    int value1 = mem->getStack()->top()->getValue();
    mem->getStack()->pop();
    int result = value1 - value2;
    Quadruplet* quadruplet = new Quadruplet ("",result,CST,T_OMEGA);
    mem->getStack()->push(quadruplet);
    *address = *address + 1;
}
