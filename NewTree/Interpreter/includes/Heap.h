#ifndef HEAP_H
#define HEAP_H
#include "BinarySearchTree.h"
#include <stdlib.h>
#include "Row.h"
#include <string>
class Heap
{
	public:
        Heap();                                                      // constructeur par defaut
        ~Heap();                                                          // destructeur
        int creerTas(int value, std::string type);                      // creer un tableau dans le tas
        void affecterTas(int address,int index, int value);             // affete une valeur à l'indice index (tableau à l'adresse adress)
        int valeurTas(int address, int index);                          // retourne la valeur du tableau(à l'adresse adress à l'indice index )
        void retirerTas(int address);                                   // supprime le tableau à l'adresse address
        int ajouterTableau(std::string type, int* tab, int taille);     // ajoute un tableau au tas avec toutes ses valeurs
	private:
        BinarySearchTree<int,Row*>* tree;                               // arbre binaire qui contient les tableau
        int position;                                                   // position à laquelle on va inserer le prohcian tableau

};
#endif // HEAP_H
