#include "HashTable.h"

// Constructeur par defaut
HashTable::HashTable() {

}

// Destructeur
HashTable::~HashTable() {

}

void HashTable::insert(K key, V value) {

    int hash = fonctionHashDontJeConnaisPasLeNom(key);
    binarySearchTree.insert(hash, value);
}

void HashTable::remove(K key) {

    int hash = fonctionHashDontJeConnaisPasLeNom(key);
    binarySearchTree.remove(hash);
}

V HashTable::at(K key) {

    int hash = fonctionHashDontJeConnaisPasLeNom(key);
    return binarySearchTree.at(hash);
}
