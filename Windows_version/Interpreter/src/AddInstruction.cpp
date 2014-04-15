#include <iostream>
#include "AddInstruction.h"
using namespace std;

AddInstruction::AddInstruction(string label):Instruction(label)
{

}

string AddInstruction::getLabel()const
{
    return label;
}

void AddInstruction::setLabel(string label)
{
    label = label;
}

 void AddInstruction::interpret ( Memory* mem, int* address){
    int value1 = mem->getStack()->top()->getValue();
    mem->getStack()->pop();
    int value2 = mem->getStack()->top()->getValue();
    mem->getStack()->pop();
    int result = value1 + value2;
    Quadruplet* quadruplet = new Quadruplet ("",result,CST,T_OMEGA);
    mem->getStack()->push(quadruplet);
    *address = *address + 1;
}
