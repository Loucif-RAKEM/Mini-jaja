#ifndef GOTOINSTRUCTION_H
#define GOTOINSTRUCTION_H

#include "Instruction.h"

class GotoInstruction : public Instruction
{
    public:
        GotoInstruction(std::string label, int value);

        void interpret ( Memory* mem, int* address);
        std::string getLabel() const;
        void setLabel(std::string label);
        int getValue() const;
        void setValue(int label);

    private:
        std::string label;
        int value;
};

#endif // GOTOINSTRUCTION_H
