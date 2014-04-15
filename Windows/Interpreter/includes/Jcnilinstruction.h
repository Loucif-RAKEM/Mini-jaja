#ifndef JCNILINSTRUCTION_H
#define JCNILINSTRUCTION_H
#include "Instruction.h"

class JCnilInstruction : public Instruction
{
    public:
        JCnilInstruction(std::string label);

        void interpret ( Memory* mem, int* address);
        std::string getLabel() const;
        void setLabel(std::string label);
    private:
        std::string label;
};

#endif // JCNILINSTRUCTION_H
