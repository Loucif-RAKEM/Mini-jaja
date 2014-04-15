#ifndef KIND_H
#define KIND_H

#include <iostream>
typedef enum Kind{CST, VCST, VAR, ARRAY, METH} Kind;

static inline const char *stringFromKind(enum Kind k){

    static const char *strings[] = {"cst", "vcst", "var", "array", "meth"};

    return strings[k];
}

static inline Kind stringToKind(std::string strKind){
    if(strKind == "cst"){
        return CST;
    }else if(strKind == "vcst"){
        return VCST;
    }else if(strKind == "var"){
        return VAR;
    }else if(strKind == "array"){
        return ARRAY;
    }else if(strKind == "meth"){
        return METH;
    }else{
        std::cerr << "Type " << strKind << "is unknown..." << std::endl;
        return CST;
    }
}

#endif
