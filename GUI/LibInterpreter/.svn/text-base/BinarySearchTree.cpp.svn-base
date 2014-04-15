#include "BinarySearchTree.h"

// Constructeur par défaut
BinarySearchTree::BinarySearchTree() {}

/*
// Constructeur de copie
BinarySearchTree::BinarySearchTree(BinarySearchTree binarySearchTree) {

    // TODO parcours arbre : copie des noeuds
}
*/

// Destructeur
BinarySearchTree::~BinarySearchTree() {

    //TODO parcours arbre pour destruction des noeuds
}

void BinarySearchTree::insert(K key, V value) {

    this->root->insert(key, value);
}

void BinarySearchTree::remove(K key) {

    delete this->root->find(key);
}

V BinarySearchTree::at(K key) {

    return this->root->at(key);
}

BinarySearchTreeNode BinarySearchTree::find(K key) {

    return this->root->find(key);
}
