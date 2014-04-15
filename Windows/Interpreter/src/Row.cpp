#include "Row.h"
#include "BinarySearchTree.h"
#include <string>
#include "Interpreter.h"

/*void die(std::string error){
    std::cerr << error << std::endl;
}*/

//constructeur
Row::Row(Type type,int length)
{
    this->type = type;
    if (length < 0){
        die("la taille du tableau est inférieur à 0");
    }
    else{
    this->size =length;
    this->content = new int[size];
    }
}

//Setter de type
void Row::setType(Type type){
    this->type = type;
}

//Getter de type
Type Row::getType() const{
	return type;
}

//Getter du contenu
int* Row::getContent() {
    return this->content;
}
int Row::getSize() const
{
    return size;
}

void Row::setSize(int value)
{
    size = value;
}

//destructeur
Row::~Row(){
    delete content;
}
