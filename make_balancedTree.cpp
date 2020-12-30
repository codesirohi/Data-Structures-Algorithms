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

//balanced binary tree always have a height of O(log N)

node* buildHeightBalTree(vector<int> a, int s, int e)
{
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

void print_BFS_levelwise(node* root){

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* front = q.front();
        if(front == NULL)
        {
            cout<<endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }

            
        }
        else{

            cout<<front->data<<" ";
            q.pop();
            if(front->left != NULL){
                q.push(front->left);
            }

            if(front->right != NULL){
                q.push(front->right);
            }

        }
    }
}

int main(){

    
    vector<int> arr;
    int n;
    //cin>>n;

    for(int i=0; i< arr.size(); i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    n = arr.size() -1;
    
    
    
    node* root = buildHeightBalTree(arr,0,n);
    print_BFS_levelwise(root);


    return 0;
}