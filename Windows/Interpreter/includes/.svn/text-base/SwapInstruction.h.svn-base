#ifndef SWAPINSTRUCTION_H
#define SWAPINSTRUCTION_H

#include "Instruction.h"

class SwapInstruction : public Instruction{

    public:
        SwapInstruction(std::string label);

        void interpret ( Memory* mem, int* address);
        std::string getLabel() const;
        void setLabel(std::string label);
    private:
        std::string label;
};
#endif
