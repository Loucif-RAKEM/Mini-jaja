#include "Row.h"



//constructeur
Row::Row(std::string type,int length)
{
    this->type = type;
    this->content = new int[length];
}

//Setter de type
void Row::setType(std::string type){
    this->type = type;
}

//Getter de type
std::string Row::getType() const{
	return type;
}

//Getter du contenu
int* Row::getContent() {
    return this->content;
}

//destructeur
Row::~Row(){
    delete content;
}
