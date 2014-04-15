#ifndef TYPE_H
#define TYPE_H

#include <iostream>

using namespace std;

typedef enum Type{T_BOOLEAN, T_INTEGER, T_VOID, T_OMEGA} Type;

static inline const char *stringFromType(enum Type t){

    static const char *strings[] = {"boolean", "int", "void", "omega"};

    return strings[t];
}

static inline Type stringToType(std::string strType){
    if(strType == "boolean"){
        return T_BOOLEAN;
    }else if(strType == "int"){
        return T_INTEGER;
    }else if(strType == "void"){
        return T_VOID;
    }else{
        std::cerr << "Type " << strType << "is unknown..." << std::endl;
        return T_INTEGER;
    }
}

#endif
