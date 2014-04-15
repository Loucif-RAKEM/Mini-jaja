#ifndef CMPINSTRUCTION_H
#define CMPINSTRUCTION_H

#include "Instruction.h"

class CmpInstruction :public Instruction{
    public:
        CmpInstruction(std::string label);

        void interpret ( Memory* mem, int* address);
        std::string getLabel() const;
        void setLabel(std::string label);
    private:
        std::string label;
};
#endif
