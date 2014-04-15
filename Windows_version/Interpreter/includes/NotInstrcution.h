#ifndef NOTINSTRUCTION_H
#define NOTINSTRUCTION_H

#include "Instruction.h"

class NotInstruction :public Instruction{
    public:
        NotInstruction(std::string label);

        void interpret ( Memory* mem, int* address);
        std::string getLabel() const;
        void setLabel(std::string label);
    private:
        std::string label;
};
#endif
