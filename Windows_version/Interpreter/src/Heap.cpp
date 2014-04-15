#include "Heap.h"
#include "Row.h"
#include "Interpreter.h"

//constructeur
Heap::Heap(){
    tree = new BinarySearchTree<int, Row*>(0, NULL);
    index=1;
}

//ajoute un arrayleau au tas
int Heap::creerTas(int size, Type type){
    Row* array = new Row(type, size); tree->insert(index, array);
    this->index++;
    return index - 1;
}

//affecte une valeur (value) dans le tableau à l'adresse (address) et à l'indice (index);
void Heap::affecterTas(int address, int index, int value){
    if (index < 0){
        die("index inferieur à 0");
    }else{
    tree->at(address)->getContent()[index] = value;
    }
}

//retourne la valeur dans le array à l'indice index
int Heap::valeurTas(int address, int index){
    if(index<0 || index >= tree->at(address)->getSize()){
        die("indice inférieur à 0");
    }
    else{
    return tree->at(address)->getContent()[index];
    }
}

//supprime le arrayleau à l'adresse (adress)
void Heap::retirerTas(int address){
    tree->remove(address);
}

//ajoute un arrayleau au tas  avec toute ses valeurs
int Heap::ajouterTableau(Type type, int* array, int size){
    int i = creerTas(size, type);
    for(int j=0; j<size;j++){
        affecterTas(i,j,array[j]);
    }
    return i;
}
BinarySearchTree<int,Row*>* Heap::getTree(){
    return tree;
}
int Heap::getIndex(){
    return index;
}

//destructeur
Heap::~Heap(){
    delete tree;
}
