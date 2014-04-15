#ifndef QUADRUPLET_H
#define QUADRUPLET_H

#include <fstream> 
#include <string>
#include <map>
#include "Kind.h"
#include "Type.h"

class ClassNode;
class MethodNode;

static inline const char *stringFromBoolean(bool value){
    return (value == 0) ? "false" : "true";
}

class Quadruplet{

    public:
        Quadruplet(const std::string identifier, const int value, const Kind kind, const Type type);

        Quadruplet(const std::string identifier, MethodNode *method, const Kind kind, const Type type);
        
        Quadruplet(const Quadruplet* quadruplet);

        std::string getIdentifier() const;

        int getValue() const;

        MethodNode* getMethod() const;

        Type getType() const;

        Kind getKind() const;

        void setValue(const int value);

        void setMethod(MethodNode *method);

        void setKind(const Kind kind);

        friend std::ostream& operator<<(std::ostream& os, const Quadruplet& quadruplet);

    private:
        std::string identifier;
        int value;
        MethodNode* method;
        Kind kind;
        Type type;

};

#endif
