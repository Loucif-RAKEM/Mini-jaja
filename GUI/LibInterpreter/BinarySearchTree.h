#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

#include "BinarySearchTreeNode.h"

template<typename K, typename V> // Type contenu dans l'arbre

class BinarySearchTree {

public:
    BinarySearchTree();
    BinarySearchTree(BinarySearchTree binarySearchTree);
    ~BinarySearchTree();

    void insert(K key, V value);
    void remove(K key);
    V at(K key);
    BinarySearchTreeNode find(K key);

private:
    BinarySearchTreeNode<K, V>* root;
    BinarySearchTreeNode getMinNode();

};

#endif // BINARYSEARCHTREE_H

