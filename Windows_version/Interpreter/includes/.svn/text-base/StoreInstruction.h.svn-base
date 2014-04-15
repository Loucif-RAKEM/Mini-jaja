#ifndef STOREINSTRUCTION_H
#define STOREINSTRUCTION_H
#include "Instruction.h"

class StoreInstruction : public Instruction
{
    public:
        StoreInstruction(std::string label,std::string ident);

        void interpret ( Memory* mem, int* address);
        std::string getLabel() const;
        void setLabel(std::string label);
        string getIdent() const;
        void setIdent(string ident);

    private:
        std::string label;
        std::string ident;
};

#endif // STOREINSTRUCTION_H
