#include <bits/stdc++.h> 
/*Structure of the Node of the BST is as
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val) 
    {
        data = val;
        left = right = NULL;
    }
};
*/

void convertVector(vector<int>& V1, Node* root) {
    if (root == nullptr) {
        return;
    }
    else if ((root->left == nullptr) && (root->right == nullptr)) {
        V1.push_back(root->data);
        return;
    }
    else if(root->right == nullptr) {
        convertVector(V1, root->left);
    }
    else if (root->left == nullptr) {
        convertVector(V1, root->right);
    }
    else {
        convertVector(V1, root->left);
        convertVector(V1, root->right);
    }
    V1.push_back(root->data);
    return;
} 

int countCouples(Node* root1, Node* root2 , int x) {
    vector<int> V1, V2;
    int m, n;
    int retVal = 0;
    convertVector(V1, root1);
    m = V1.size();
    convertVector(V2, root2);
    n = V2.size();
    // sort(V1, 0, V1.length-1);
    // sort(V2, 0, V2.length-1);
    int y;
    for (int i=0; i<m; i++) {
        y = x - V1[i];
        if (y <= 0) {
            retVal += 0;
        }
        int r = 0, t = n-1;
        while ((r < n) && (t >= 0) && (r <= t)) {
            int mid = r + (t-r)/2;
            if (V2[mid] == y) {
                retVal++;
            }
            else if (V2[mid] < y) {
                r = mid + 1;
            }
            else {
                t = mid - 1;
            }
        }
        if (V2[r] == y) {
            retVal++;
        }
    }
    return retVal;
}
