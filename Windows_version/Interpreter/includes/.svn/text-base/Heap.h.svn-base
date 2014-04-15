#ifndef HEAP_H
#define HEAP_H

#include <string>
#include <stdlib.h>
#include "BinarySearchTree.h"
#include "Row.h"

class Heap{

	public:
        Heap();                                                      // constructeur par defaut
        ~Heap();                                                          // destructeur
        int creerTas(int size, Type type); // creer un arrayleau dans le tas
        void affecterTas(int address, int index, int value);             // affete une valeur à l'indice index (arrayleau à l'adresse adress)
        int valeurTas(int address, int index);                          // retourne la valeur du arrayleau(à l'adresse adress à l'indice index )
        void retirerTas(int address);                                   // supprime le arrayleau à l'adresse address
        int ajouterTableau(Type type, int* array, int size);     // ajoute un arrayleau au tas avec toutes ses valeurs
        BinarySearchTree<int,Row*>* getTree();
        int getIndex();
	private:
        BinarySearchTree<int,Row*>* tree;                               // arbre binaire qui contient les arrayleau
        int index;                                                   // index à laquelle on va inserer le prohcian arrayleau

};
#endif // HEAP_H
