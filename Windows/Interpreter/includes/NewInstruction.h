#ifndef NEWINSTRUCTION_H
#define NEWINSTRUCTION_H
#include "Instruction.h"

class NewInstruction : public Instruction
{
    public:
        NewInstruction (std::string label,std::string ident, Type type, Kind kind, int value);

        void interpret ( Memory* mem, int* address);
        std::string getLabel() const;
        void setLabel(std::string label);
        Type getType() const;
        void setType(Type type);
        Kind getKind() const;
        void setKind(Kind kind);
        std::string getIdent() const;
        void setIdent(std::string ident);

    private:
        std::string label;
        std::string ident;
        Type type;
        Kind kind;
        int value;
};

#endif // NEWINSTRUCTION_H
