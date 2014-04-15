#include "BinarySearchTreeNode.h"
#include <exception>

BinarySearchTreeNode::BinarySearchTreeNode(K key, V value) {

    setKey(key);
    setValue(value);
}

BinarySearchTreeNode::~BinarySearchTreeNode() {

    remove();
}

K getKey() const {

    return key;
}

void setKey(const K &key) {

    this->key = key;
}

K getValue() const {

    return value;
}

void setValue(const K &value) {

    this->value = value;
}

bool BinarySearchTreeNode::hasParent() const {

    return this->parent == NULL;
}

void BinarySearchTreeNode::replaceUsBy(BinarySearchTreeNode<K, V>* node) {

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

void BinarySearchTreeNode::insert(K key, V value) {

    if (key < this->key) {

        if (this->getLeftChild() == NULL) {
            this->getLeftChild() = new BinarySearchTreeNode<K, V>(key, value);
        }
        else {
            this->getLeftChild().insert(key, value);
        }
    }
    else {
        if(this->getRightChild() == NULL) {
            this->getRightChild() = new BinarySearchTreeNode<K, V>(key, value);
        }
        else {
            this->getRightChild().insert(key, value);
        }
    }
}

void BinarySearchTreeNode::remove() {

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

        // Replace current element by smallest bigger node element
        BinarySearchTreeNode<K, V> smallestBiggerNode = getMinNode()->getRightChild();
        this->value = smallestBiggerNode->value;

        // smallestBiggerthis has no left child since it's the min value of the subtree
        replaceUsBy(smallestBiggerNode->getRightChild());
    }
}

V BinarySearchTreeNode::at(K key) {

    if (key < this->getKey()) {

        if(getLeftChild() != NULL){
            return getLeftChild().at(key);
        }
        else{
            throw exeption;
        }
    }
    else if (key > this->getKey()){

        if(getRightChild()!= NULL){
            return getRightChild().at(key);
        }
        else{
            throw exeption;
        }
    }
    else {
        return this->getValue();
    }

}

BinarySearchTreeNode BinarySearchTreeNode::find(K key) {

    if (key < this->getKey()) {

        if(getLeftChild() != NULL){
            return getLeftChild().find(key);
        }
        else{
            throw exeption;
        }
    }
    else if (key > this->getKey()){

        if(getRightChild()!= NULL){
            return getRightChild().find(key);
        }
        else{
            throw exeption;
        }
    }
    else {
        return this;
    }

}

int BinarySearchTreeNode::getChildrenCount() const {

    int childrenCount = 0;

    if (leftChild != null) {
        childrenCount++;
    }

    if (rightChild != null) {
        childrenCount++;
    }

    return childrenCount;
}

bool BinarySearchTreeNode::isLeaf() const {

    return this->getChildrenCount() > 0;
}

T BinarySearchTreeNode::getElement() const {

    return this->value;
}

void BinarySearchTreeNode::setElement(const T &value) {

    this->element = value;
}

void BinarySearchTreeNode::getParent() const {

    return this->parent;
}

void BinarySearchTreeNode::setParent(const BinarySearchTreeNode &value) {

    this->parent = value;
}


void BinarySearchTreeNode::getLeftChild() const {

    return this->leftChild;
}

void BinarySearchTreeNode::setLeftChild(const BinarySearchTreeNode &value) {

    this->leftChild = value;
}

void BinarySearchTreeNode::getRightChild() const {

    return this->rightChild;
}

void BinarySearchTreeNode::setRightChild(const BinarySearchTreeNode &value) {

    this->rightChild = value;
}

BinarySearchTreeNode BinarySearchTreeNode::getMinNode() {

    if (this->isLeaf) {

        return this;
    }
    else {

        return this->getLeftChild()->getMinNode();
    }
}
