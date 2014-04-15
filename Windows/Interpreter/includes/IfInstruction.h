#ifndef IFINSTRUCTION_H
#define IFINSTRUCTION_H
#include "Instruction.h"

class IfInstruction : public Instruction
{
    public:
        IfInstruction(std::string label, int value);

        void interpret ( Memory* mem, int* address);
        std::string getLabel() const;
        void setLabel(std::string label);
        int getValue() const;
        void setValue(int label);

    private:
        std::string label;
        int value;
};

#endif // IFINSTRUCTION_H
