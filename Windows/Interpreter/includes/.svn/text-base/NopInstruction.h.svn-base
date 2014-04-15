#ifndef NOPINSTRUCTION_H
#define NOPINSTRUCTION_H

#include "Instruction.h"

class NopInstruction :public Instruction{
    public:
        NopInstruction(std::string label);

        void interpret ( Memory* mem, int* address);
        std::string getLabel() const;
        void setLabel(std::string label);
    private:
        std::string label;
};
#endif
