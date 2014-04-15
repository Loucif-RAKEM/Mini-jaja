#ifndef ALOADINSTRUCTION_H
#define ALOADINSTRUCTION_H
#include "Instruction.h"

class AloadInstruction : public Instruction
{
    public:
        AloadInstruction(std::string label, std::string ident);

        void interpret ( Memory* mem, int* address);
        std::string getLabel() const;
        void setLabel(std::string label);
        std::string getIdent() const;
        void setIdent(std::string ident);

    private:
        std::string label;
        std::string ident;
};

#endif // ALOADINSTRUCTION_H
