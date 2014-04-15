#include <iostream>
#include <string>
#include "DataDict.h"
#include <fstream>
#include <sstream>

using namespace std;

int f1(string ident){

    stringstream identToAscii("");
    for(int i=0; i<ident.size(); i++){
        int c = ident[i] - 'a' + 1;
        identToAscii << c;
    }
    unsigned int ret=0;
    if(!(identToAscii >> ret)) ret = -1;
    cout << ret << endl;

	return ret;
}

int f2(string ident){
    int ret = 0;
    for(int i=0; i<ident.size(); i++){
        ret += (i + 1) * ident[i];
    }
    return ret;
}

int f3(string ident){
    unsigned int ret = 0;
    for(int i=0; i<ident.size(); i++){
        ret ^= (ident[i] * (i + 1)) + (i + 1);
    }
    return ret;
}

int main(int argc, char* argv[]){

    std::ifstream infile("identifiers");

    if(!infile){
        cout << "Error : unable to open \"identifiers\"" << endl;
    }else{
        string line = "";
        int nLine = 0;
        while(infile >> line){
            cout << ++nLine << " : " << f3(line) << endl;
        }
    }

	return 0;
}
