#include "Instruction.h"
#include <iostream>

using namespace std;

Instruction::Instruction(string label): label(label)
{
    //cout << "LABEL : " << label << endl;
}

string Instruction::getLabel(){
    return label;
}

void Instruction::interpret(Memory* mem, int* address){

}
