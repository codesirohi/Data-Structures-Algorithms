#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

        node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};

node* buildTree()
{
    int d; 
    cin>>d;

    if(d==-1)
    {
        return NULL;
    }

    node* root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;

}


void print(node* root){
    
    if(root==NULL){
        return; 
    }
    //Otherwise, print root first followed by subtrees(children)
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}

//print tree level wise
//no. of levels is height of tree

int height(node *root)
{

    if(root== NULL)
        return 0; 
    
    int ls = height(root->left);
    int rs = height(root->right);

    return max(ls,rs) + 1;

}

void print_level(node* root, int k)
{
    if(root==NULL)
        return;

    if(k==1){
        cout<<root->data<<" ";
        return;

    }
    print_level(root->left,k-1);
    print_level(root->right,k-1);
    return;
}
//iteratve appoch to print tree level wise O(N)
//push the root
//while queue is not empty
//pick one node at front
//pop the parent the push its childen in the queue

void print_BFS()
{

}

void print_all(node *root)
{
    int k = height(root);
    for(int i=1; i<=k; i++)
    {
        print_level(root,i);
        cout<<endl;
    }
}


int main(){ 
    node *root = buildTree();
    //print(root);
    print_all(root);
    //print_level(root,4);

    
return 0;

}
// 8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1