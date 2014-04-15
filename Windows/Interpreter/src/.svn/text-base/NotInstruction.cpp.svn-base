#include <iostream>
#include "NotInstrcution.h"
using namespace std;

NotInstruction::NotInstruction(string label):Instruction(label)
{

}

string NotInstruction::getLabel() const
{
    return label;
}

void NotInstruction::setLabel(string label)
{
    label = label;
}


void NotInstruction::interpret (Memory* mem, int* address){
    int value1 = mem->getStack()->top()->getValue();
    mem->getStack()->pop();
    int result = 0;
    if(!value1){
        result = 1;
    }
    Quadruplet* quadruplet = new Quadruplet ("",result,CST,T_OMEGA);
    mem->getStack()->push(quadruplet);
    *address = *address + 1;
}
