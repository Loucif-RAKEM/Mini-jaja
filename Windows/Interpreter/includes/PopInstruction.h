#ifndef POPINSTRUCTION_H
#define POPHINSTRUCTION_H

#include "Instruction.h"

class PopInstruction :public Instruction{
    public:
        PopInstruction(std::string label);

        void interpret ( Memory* mem, int* address);
        std::string getLabel() const;
        void setLabel(std::string label);
    private:
        std::string label;
};
#endif
