#ifndef BINARYSEARCHKREENODE_H
#define BINARYSEARCHKREENODE_H
#include <stdlib.h>
template<typename K, typename V>

class BinarySearchTreeNode {

public:
    BinarySearchTreeNode(K key, V value) {

        setKey(key);
        setValue(value);
        leftChild = NULL;
        rightChild = NULL;
        parent = NULL;
    }

    BinarySearchTreeNode(BinarySearchTreeNode<K,V>*  parent,K key, V value) {

        setKey(key);
        setValue(value);
        leftChild = NULL;
        rightChild = NULL;
        this->parent = parent;
    }

    ~BinarySearchTreeNode() {

        remove();
    }
//retourne la clef du noeud
    K getKey() const {

        return key;
    }
//Set la clef du noeud
    void setKey(const K &key) {

        this->key = key;
    }

//retourne la valeur du noeud
    V getValue() const {

        return value;
    }
//Set la valeur du noeud
    void setValue(const V value) {

        this->value = value;
    }

//retourne le fils gauche
    BinarySearchTreeNode<K,V>* getLeftChild() const {

        return this->leftChild;
    }

//set le fils gauche
    void setLeftChild(BinarySearchTreeNode<K,V>* value) {

        this->leftChild = value;
    }

//retourne le fils droit
    BinarySearchTreeNode<K,V>* getRightChild() const {

        return this->rightChild;
    }
//Set le fils droit
    void setRightChild(BinarySearchTreeNode<K,V>* value) {

        this->rightChild = value;
    }
//retourne le noeud parent
     BinarySearchTreeNode<K,V>* getParent() const {

        return this->parent;
    }
//Set le noeud parent
    void setParent(BinarySearchTreeNode<K,V>* value) {

        this->parent = value;
    }
//test si le noeud a un parent
    bool hasParent() const {

        return this->parent == NULL;
    }

//remplace le noeud par celui passé en paramètre
    void replaceUsBy(BinarySearchTreeNode<K, V>* node) {

        // Do nothing if we are tree root
        if (this->getParent() == NULL) {

            return;
        }

        // Else replace us by the provided node
        if (this->getParent()->getLeftChild() == this) {
            this->getParent()->setLeftChild(node);
        }
        else if (this->getParent()->getRightChild() == this) {
            this->getParent()->setRightChild(node);
        }
    }

//test si le noeud est une feuille
    bool isLeaf() const {

        return this->getChildrenCount() > 0;
    }

    void insert(K key, V value) {

        if (key < this->key) {


            if (this->getLeftChild() == NULL) {
                this->setLeftChild(new BinarySearchTreeNode<K, V>(this,key, value));
            }
            else {
                this->getLeftChild()->insert(key, value);
            }
        }
        else {
            if(this->getRightChild() == NULL) {
                this->setRightChild(new BinarySearchTreeNode<K, V>(this,key, value));
            }
            else {
                this->getRightChild()->insert(key, value);
            }
        }
    }

//efface le noeud
    void remove() {

        if (this->isLeaf())
        {
            replaceUsBy(NULL);
        }
        else if (this->getLeftChild() == NULL) {

            replaceUsBy(this->getRightChild());
        }
        else if (this->getRightChild() == NULL) {

            replaceUsBy(this->getLeftChild());
        }
        else {

            //remplace le noeud par le plus petit des fils supérieur
            BinarySearchTreeNode<K, V>* smallestBiggerNode = getMinNode()->getRightChild();
            this->value = smallestBiggerNode->value;
            replaceUsBy(smallestBiggerNode->getRightChild());
        }
    }

//retourne la valeur V à la clef K
    V at(K key) {

        if (key < this->getKey()) {

            if(this->getLeftChild() != NULL){
                return this->getLeftChild()->at(key);
            }
            else{
                //throw exeption;
            }
        }
        else if (key > this->getKey()){

            if(this->getRightChild()!= NULL){
                return this->getRightChild()->at(key);
            }
            else{
                //throw exeption;
            }
        }
        else {
            return this->getValue();
        }

    }

//retourne le noeud à la clef K
    BinarySearchTreeNode<K,V>* find(K key) {

        if (key < this->getKey()) {

            if(this->getLeftChild() != NULL){
                return this->getLeftChild()->find(key);
            }
            else{
                //throw exeption;
            }
        }
        else if (key > this->getKey()){

            if(this->getRightChild()!= NULL){
                return this->getRightChild()->find(key);
            }
            else{
               //throw exeption;
            }
        }
        else {
            return this;
        }

    }
//compte le nombre de fils du noeud
    int getChildrenCount() const {

        int childrenCount = 0;

        if (leftChild != NULL) {
            childrenCount++;
        }

        if (rightChild != NULL) {
            childrenCount++;
        }

        return childrenCount;
    }
//retourne le plus petit fils
    BinarySearchTreeNode<K,V>* getMinNode() {

        if (this->isLeaf()) {

            return this;
        }
        else {

            return this->getLeftChild()->getMinNode();
        }
    }

private:
    K key;
    V value;
    BinarySearchTreeNode<K,V>* parent;
    BinarySearchTreeNode<K,V>* leftChild;
    BinarySearchTreeNode<K,V>* rightChild;
};

#endif // BINARYSEARCHKREENODE_H
