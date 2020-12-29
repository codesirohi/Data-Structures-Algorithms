#include<bits/stdc++.h>
using namespace std;

class node{
public:

    int data;
    node* left;
    node* right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }

};

node* buildTree(){

    int d;
    cin>>d;
    
    if(d == -1)
    {
        return NULL;
    }
    node* root = new node(d);
    root->left = buildTree();
    root->right = buildTree();

    return root;

}

//balanced binary tree always have a height of O(log N)

node* buildHeightBalTree(int *a, int s, int e){
    //Base case
    if(s>e)
    {
        return NULL;
    }

    //recursive
    int mid = (s+e)/2;
    node* root = new node(a[mid]);
    root -> left = buildHeightBalTree(a, s, (mid -1));
    root -> right = buildHeightBalTree(a, (mid-1), e);

    return root;
}

void print_BFS_levelwise(){

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        q.push
    }
}