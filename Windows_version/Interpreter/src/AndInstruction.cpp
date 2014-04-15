#include <iostream>
#include "AndInstruction.h"
using namespace std;

AndInstruction::AndInstruction(string label):Instruction(label)
{

}

string AndInstruction::getLabel() const
{
    return label;
}

void AndInstruction::setLabel(string label)
{
    label = label;
}

void AndInstruction::interpret ( Memory* mem, int* address){
    int value1 = mem->getStack()->top()->getValue();
    mem->getStack()->pop();
    int value2 = mem->getStack()->top()->getValue();
    mem->getStack()->pop();
    int result = 0;
    if (value1 && value2){
    result = 1;
    }
    Quadruplet* quadruplet = new Quadruplet ("",result,CST,T_OMEGA);
    mem->getStack()->push(quadruplet);
    *address = *address + 1;
}
