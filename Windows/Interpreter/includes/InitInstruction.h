#ifndef INIT_H
#define INIT_H

#include "Instruction.h"

class InitInstruction :public Instruction{
    public:
        InitInstruction(std::string label);

        void interpret ( Memory* mem, int* address);
        std::string getLabel() const;
        void setLabel(std::string label);
    private:
        std::string label;

};
#endif
