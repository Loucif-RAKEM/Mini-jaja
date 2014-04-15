#include "AloadInstruction.h"

using namespace  std;

AloadInstruction::AloadInstruction(string label, string ident):Instruction(label)
{
    this->ident = ident;
}

string AloadInstruction::getLabel() const
{
    return label;
}
void AloadInstruction::setLabel(std::string label)
{
    this->label = label;
}

string AloadInstruction::getIdent() const
{
    return ident;
}
void AloadInstruction::setIdent(string ident)
{
    this->ident = ident;
}

void AloadInstruction::interpret (Memory* mem, int* address){

    int indice = mem->getStack()->top()->getValue();
    mem->getStack()->pop();
    int result = Interpreter::valT(this->ident, indice, mem);
    //MODIF
    //mem->getStack()->pop();
    Quadruplet* quadruplet = new Quadruplet ("",result,CST,T_OMEGA);
    mem->getStack()->push(quadruplet);
    *address = *address + 1;
}
