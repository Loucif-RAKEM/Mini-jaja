#include "LoadInstruction.h"

using namespace std;
LoadInstruction::LoadInstruction(string label, string ident):Instruction(label)
{
    this->ident = ident;
}

string LoadInstruction::getLabel() const
{
    return label;
}
void LoadInstruction::setLabel(std::string label)
{
   this->label = label;
}

string LoadInstruction::getIdent() const
{
    return ident;
}
void LoadInstruction::setIdent(string ident)
{
    this->ident = ident;
}

void LoadInstruction::interpret (Memory* mem, int* address){
    int result = Interpreter::val(this->ident, mem);
    Quadruplet* quadruplet = new Quadruplet ("",result,CST,T_OMEGA);
    mem->getStack()->push(quadruplet);
    *address = *address + 1;
}
