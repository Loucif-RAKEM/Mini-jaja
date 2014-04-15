#ifndef BINARYSEARCHKREENODE_H
#define BINARYSEARCHKREENODE_H

template<typename K, typename V>

class BinarySearchTreeNode {

public:
    BinarySearchTreeNode(K key, V value);

    K getKey() const;
    void setKey(const K &key);
    K getValue() const;
    void setValue(const K &value);

    BinarySearchTreeNode<K> getParent() const;
    void setParent(const BinarySearchTreeNode<K>* value);

    BinarySearchTreeNode<K> getLeftChild() const;
    void setLeftChild(const BinarySearchTreeNode<K>* value);

    BinarySearchTreeNode getRightChild() const;
    void setRightChild(const BinarySearchTreeNode<K>* value);

    bool hasParent() const;
    int getChildenCount() const;
    bool isLeaf() const;
    void insert(K key, V value);
    BinarySearchTreeNode find(K key);
    void remove();
    V at(K key);


private:
    K key;
    V value;
    BinarySearchTreeNode* parent;
    BinarySearchTreeNode* leftChild;
    BinarySearchTreeNode* rightChild;


    int getChildenCount();
    BinarySearchTreeNode getMinNode();
};

#endif // BINARYSEARCHKREENODE_H
