#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

#include "BinarySearchTreeNode.h"
#include <stdlib.h>

template<typename K, typename V> // Type contenu dans l'arbre

class BinarySearchTree {

public:
    // Constructeur par défaut
    BinarySearchTree<K,V>(K key,V value) {

        root = new BinarySearchTreeNode<K,V>(key,value);
    }

    // Destructeur
    ~BinarySearchTree<K,V>() {

        delete root;
    }

    //BinarySearchTree<K,V>(const BinarySearchTree<K,V> binarySearchTree);


    void insert(K key, V value) {

        this->root->insert(key, value);
    }


    void remove(K key) {

        delete this->root->find(key);
    }

    V at(K key) {

        return this->root->at(key);
    }

    BinarySearchTreeNode<K,V>* find(K key) {

        return this->root->find(key);
    }

private:
    BinarySearchTreeNode<K, V>* root;
};

#endif // BINARYSEARCHTREE_H

