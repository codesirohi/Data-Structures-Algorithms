// BST is a B tree
// left part and right sub tree must be a BST too
// All the nodes in left sub tree less than root node
// All the nodes in right sub tree greater than root node
// Inorder Traversal will always be sorted
#include<bits/stdc++.h>
using namespace std; 

class Node{

public:
    int data;
    Node* left;
    Node* right;

    Node( int data ){

        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }


};




int main(){




}