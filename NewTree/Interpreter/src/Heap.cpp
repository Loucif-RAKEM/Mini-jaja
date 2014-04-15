#include "Heap.h"
#include "Row.h"

//constructeur
Heap::Heap()
{
    tree = new BinarySearchTree<int,Row*>(0,NULL);
    position=1;
}

//ajoute un tableau au tas
int Heap::creerTas(int taille, std::string type){

    Row* tab = new Row(type,taille);
    tree->insert(position,tab);
    this->position++;
    return position-1;
}

//affecte une valeur (value) dans le tableau à l'adresse (address) et à l'indice (index);
void Heap::affecterTas(int address, int index, int value){

    tree->at(address)->getContent()[index]=value;
}

//retourne la valeur dans le tableau à l'indice index
int Heap::valeurTas(int address, int index){

    return tree->at(address)->getContent()[index];
}

//supprime le tableau à l'adresse (adress)
void Heap::retirerTas(int address){

    tree->remove(address);
}

//ajoute un tableau au tas  avec toute ses valeurs
int Heap::ajouterTableau(std::string type, int* tab, int taille){

    int i = creerTas(taille,type);
    for(int j=0; j<taille;j++){
        affecterTas(i,j,tab[j]);
    }
    return i;
}

//destructeur
Heap::~Heap(){
    delete tree;
}
