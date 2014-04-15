#include <iostream>
#include "CmpInstruction.h"
using namespace std;

CmpInstruction::CmpInstruction(string label):Instruction(label)
{

}

string CmpInstruction::getLabel() const
{
    return label;
}

void CmpInstruction::setLabel(string label)
{
    label = label;
}

void CmpInstruction::interpret ( Memory* mem, int* address){
    int value1 = mem->getStack()->top()->getValue();
    mem->getStack()->pop();
    int value2 = mem->getStack()->top()->getValue();
    mem->getStack()->pop();
    int result = 0;
    if (value1 == value2){
    result = 1;
    }
    Quadruplet* quadruplet = new Quadruplet ("",result,CST,T_OMEGA);
    mem->getStack()->push(quadruplet);
    *address = *address + 1;
}
