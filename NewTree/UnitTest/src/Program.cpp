#include <iostream>
#include <cstdlib>
#include "Program.h"

using namespace std;

Program::Program(std::string fileName)
{
    file = fopen(fileName.c_str(), "r");
    if(!file){
        cerr << "In constructor Program::Program(std::string fileName): Unable to open file \"" << fileName << "\" for reading." << endl;
    }else{
        this->fileName = fileName;
    }
}

Program::~Program(){
}
