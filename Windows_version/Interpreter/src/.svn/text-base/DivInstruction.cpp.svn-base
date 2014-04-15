#include <iostream>
#include "DivInstruction.h"
using namespace std;

DivInstruction::DivInstruction(string label):Instruction(label)
{

}

string DivInstruction::getLabel() const
{
    return label;
}

void DivInstruction::setLabel(string label)
{
    label = label;
}

void DivInstruction::interpret ( Memory* mem, int* address){
    int value2 = mem->getStack()->top()->getValue();
    mem->getStack()->pop();
    int value1 = mem->getStack()->top()->getValue();
    mem->getStack()->pop();
    if (value2 != 0){
    int result = value1 / value2;
    Quadruplet* quadruplet = new Quadruplet ("",result,CST,T_OMEGA);
    mem->getStack()->push(quadruplet);
    *address = *address + 1;
    }
    else{
    cout<<"division par zero annulé"<<endl;
    *address = (-2);
    }
}
