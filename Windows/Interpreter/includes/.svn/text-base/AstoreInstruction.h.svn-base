#ifndef ASTOREINSTRUCTION_H
#define ASTOREINSTRUCTION_H
#include "Instruction.h"

class AstoreInstruction : public Instruction
{
    public:
        AstoreInstruction(std::string label, std::string ident);

        void interpret ( Memory* mem, int* address);
        std::string getLabel() const;
        void setLabel(std::string label);
        std::string getIdent() const;
        void setIdent(std::string ident);

    private:
        std::string label;
        std::string ident;
};

#endif // ASTOREINSTRUCTION_H
