#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "BinarySearchTree.h"

template<typename K, typename V> // Types des clefs (Keys) et valeurs (Values)

class HashTable {

public:

    HashTable();
    //HashTable(HashTable hashTable);
    ~HashTable();
    void insert(K key, V value);
    void remove(K key);
    V at(K key);

private:

    BinarySearchTree<int, V> binarySearchTree;

};

#endif // HASHTABLE_H
