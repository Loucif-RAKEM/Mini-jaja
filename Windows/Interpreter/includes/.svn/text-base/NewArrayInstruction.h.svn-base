#ifndef NEWARRAYINSTRUCTION_H
#define NEWARRAYINSTRUCTION_H

#include "Instruction.h"

class NewArrayInstruction : public Instruction
{
    public:
        NewArrayInstruction(std::string label, std::string ident, Type type);

        void interpret ( Memory* mem, int* address);
        std::string getLabel() const;
        void setLabel(std::string label);
        Type getType() const;
        void setType(Type type);

    private:
        std::string label;
        std::string ident;
        Type type;
};

#endif // NEWARRAYINSTRUCTION_H
