//binary treee
//element are ordered
// let d is the rot node then all the elements 
//greater than D comes in right side
//smaller than D comes in left side
//each subtree is a bst
#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *left;
    node *right;

    node(int d){
        data =d;
        left = NULL;
        right = NULL;
    }
};

// accepts the old root nide and return the new root node

node* insertBST(node *root, int data){

    if(root == NULL)
    {
        return new node(data);
    }
    //rec case- insert in the sub tree and update pointer
    if(data < root->data)
    {
        root->left = insertBST(root->left, data);

        
    }
    else{
        root->right = insertBST(root->right, data);
    }

    return root;
}

node* buildBST(){
// read a list of nuber till -1 
    int d;
    cin>>d;
    
    node *root = NULL;
    while(d != -1){
        

        root = insertBST(root,d);
        cin>>d;
    }
    
    return root;

}


void print_BFS_levelwise(node* root)
{   //putting the node* instead of int because we dont know
    //baout the child of root to
    //that's why we passing the address of node
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
    //return;
}


//print bst depth first search 
void inorder(node * root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<", ";
    inorder(root->right);

    //return root;
}

void preorder(node * root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<", ";
    preorder(root->left);
    preorder(root->right);

    //return root;
}

void postorder(node * root){
    if(root==NULL){
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<", ";

    //return root;
}
//complexity order of H O(H)
//balanced tree 
bool find(node* root,int key){

    

    if(root == NULL){
        return false;
    }


    int i =1;
    if(root->data == key)
    {
        cout<<"element is present on" <<endl;
        return true;
       
    }
    
    else if(key <= root->data)
    {
        find(root->left,key);
        
    }
    else
    {
        find(root->right,key);
        
    }

    

}


node* deleteBST(node* root,int key){

    if(root == NULL){
        return NULL;
    }
    else if(key < root->data)
    {
        root->left = deleteBST(root->left,key);
        return root;
    }
    else if(key == root->data)
    {
    //here we have 3 cases now
    //1) root with 0 children
    if(root->left == NULL && root->right == NULL)
    {
        delete root;
        return NULL;
    }
    //2) case only 1 child
    if(root->left != NULL && root->right == NULL){

        node* temp = root->left;
        delete root;
        return temp;
    }

    if(root->right != NULL && root->left == NULL){

        node* temp = root->right;
        delete root;
        return temp;
    }
    //3) delete node with 2 children

    node * replace = root->right;
    //Find the inorder nsuccessor fron right subtree
    while(replace->left != NULL){

        replace = replace->left;
    }

    root->data =  replace->data;
    root->right = deleteBST(root->right,replace->data);

    return root;

    


    }
    else{
        root->right = deleteBST(root->right,key);
        return root;
    }


}


int main(){

    node *root = buildBST();
    //inorder of a bst is always sorted "<<endl
    //because first we print the smaller values fromleft tree than right side
    
    //cout<<endl;
    print_BFS_levelwise(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);

    //int s;
    //cin>>s;
    
    //deleteBST(root,s);
    //cout<<"After deletion"<< endl;
    
    //print_BFS_levelwise(root);
    //cout<<endl;

    return 0;

}