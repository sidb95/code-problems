/*
794944: lca of three nodes
bhatoresiddharth@gmail.com
sidb95
13 May 2024
*/
#include <iostream>
#include <stdlib.h>

bool inSubtree(BinaryTreeNode<int>* root, int numVar);
BinaryTreeNode<int>* lcaOfThreeNodes(BinaryTreeNode<int>* root, int node1, int node2, int node3);

template <typename T>
class BinaryTreeNode {
public :
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};

bool inSubtree(BinaryTreeNode<int>* root, int numVar) {
    if (root == nullptr) {
		return false;
	}
	else if (numVar == root->data) {
        return true;
    }
    else {
        return (inSubtree(root->left, numVar) || inSubtree(root->right, numVar));
    }
}

BinaryTreeNode<int>* lcaOfThreeNodes(BinaryTreeNode<int>* root, int node1, int node2, int node3) {
    int num = root->data;
	if ((node1 == num) || (node2 == num) || (node3 == num)) {
        return root;
    }
    bool p1 = inSubtree(root->left, node1);
    bool p2 = inSubtree(root->left, node2);
    bool p3 = inSubtree(root->left, node3);
    bool q1 = inSubtree(root->right, node1);
    bool q2 = inSubtree(root->right, node2);
    bool q3 = inSubtree(root->right, node3);
    if (p1 && p2 && p3) {
        return lcaOfThreeNodes(root->left, node1, node2, node3);
    }
    else if (q1 && q2 && q3) {
        return lcaOfThreeNodes(root->right, node1, node2, node3);
    }
    else {
        return root;
    }
}
