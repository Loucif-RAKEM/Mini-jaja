#include <iomanip>
#include <sstream>
#include "Quadruplet.h"
#include "MethodNode.h"

using namespace std;

std::ostream& operator<<(std::ostream& stream, const Quadruplet& quadruplet)
{
    if(quadruplet.getType() == T_BOOLEAN){
        stream << "<" << setw(15) << quadruplet.getIdentifier().c_str() << setw(10) << stringFromBoolean(quadruplet.getValue()) << setw(15) << stringFromType(quadruplet.getType()) << setw(7) << stringFromKind(quadruplet.getKind())  << setw(4) << ">";
    }
    else{
        stream << "<" << setw(15) << quadruplet.getIdentifier().c_str() <<  setw(10) << quadruplet.getValue() << setw(15) << stringFromType(quadruplet.getType()) << setw(7) << stringFromKind(quadruplet.getKind())  << setw(4) << ">";
    }
    return stream;
}

Quadruplet::Quadruplet(const std::string identifier, const int value, const Kind kind, const Type type): identifier(identifier), value(value), kind(kind), type(type){
    method = NULL;
}

Quadruplet::Quadruplet(const std::string identifier, MethodNode* method, const Kind kind, const Type type): identifier(identifier), value(0), method(method), kind(kind), type(type){}

Quadruplet::Quadruplet(const Quadruplet* quadruplet): identifier(quadruplet->getIdentifier()), value(quadruplet->getValue()), method(quadruplet->getMethod()), kind(quadruplet->getKind()), type(quadruplet->getType()){}

std::string Quadruplet::getIdentifier() const{
    return identifier;
}

int Quadruplet::getValue() const{
    return value;
}

MethodNode *Quadruplet::getMethod() const
{
    return method;
}

Type Quadruplet::getType() const{
    return type;
}

Kind Quadruplet::getKind() const{
    return kind;
}

void Quadruplet::setValue(const int value){
    this->value = value;
}

void Quadruplet::setKind(const Kind kind){
    this->kind = kind;
}

void Quadruplet::setMethod(MethodNode* method)
{
    this->method = method;
}
