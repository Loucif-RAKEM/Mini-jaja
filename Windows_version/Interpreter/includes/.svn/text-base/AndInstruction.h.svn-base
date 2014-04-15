#ifndef ANDINSTRUCTION_H
#define ANDPINSTRUCTION_H

#include "Instruction.h"


class AndInstruction :public Instruction{
    public:
        AndInstruction(std::string label);

       void interpret ( Memory* mem, int* address);
        std::string getLabel() const;
        void setLabel(std::string label);
    private:
        std::string label;
};
#endif
