#include <iostream>
#include<queue>
 
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

void print_BFS_levelwise(node* root)
{   //putting the node* instead of int because we dont know
    //baout the chile of root to
    //the why we passing the address of node
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    //we cannot push any other data but we can push null here


    while(!q.empty())
    {
        node* front = q.front();
        if(front == NULL)
        {
            cout<<endl;
            q.pop();
            if(!q.empty())
            {
                q.push(NULL);
            }
        }

        else
        {

            cout<<front->data<<" ";
            q.pop();

            if(front->left != NULL)
            {
                q.push(front->left);
            }
            
            if (front->right != NULL)
            {
                q.push(front->right);
            }
        }
        


    }
    return;
}

int replaceSum(node* root){

    if(root == NULL){
        return 0;
    }
    if(root->left == NULL && root->right == NULL){
        return root->data;
    }

    //recursive

    int lefSum = replaceSum(root->left);
    int rigSum = replaceSum(root->right);
    int temp = root->data;
    
    root->data = lefSum + rigSum;

    return temp + root->data;

}




int main(){

    node* root = buildTree();

    replaceSum(root);

    print_BFS_levelwise(root);
}