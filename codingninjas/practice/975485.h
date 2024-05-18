/*
975485
bhatoresiddharth@gmail.com
sidb95
18 May 2024
*/

#include <bits/stdc++.h> 
/*******************************************
  Following is the BinaryTreeNode structure
  
template<typename T>
class BinaryTreeNode {
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

********************************************/
bool FLAG;

vector<int> nodesWithoutSiblingsAux(BinaryTreeNode<int> *root, vector<int>& nodes) {
    if (root == nullptr) {
        return nodes;
    }
    else if ((root->left == nullptr) && (root->right == nullptr)) {
        return nodes;
    }
    else if (root->left == nullptr) {
        FLAG = true;
        nodes.push_back(root->right->data);
        nodes = nodesWithoutSiblingsAux(root->right, nodes);
    }
    else if (root->right == nullptr) {
        FLAG = true;
        nodes.push_back(root->left->data);
        nodes = nodesWithoutSiblingsAux(root->left, nodes);
    }
    else {
        return nodes;
    }
    return nodes;
}

vector<int> nodesWithoutSiblings(BinaryTreeNode<int> *root) {
    vector<int> V1;
    FLAG = false;
    V1 = nodesWithoutSiblingsAux(root, V1, FLAG);
    return V1;
}
