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

void print_BFS(node* root)
{   //putting the node* instead of int because we dont know
    //baout the chile of root to
    //the why we passing the address of node
    queue<node*> q;
    q.push(root);
    //int count =0;
    while(!q.empty())
    {
        node* front = q.front();
        cout<<front->data<<" ";
        //count++;
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

    return;
}



//
//printing bfs method level wise will be
//mehtod 1
//using queue<pair<node*,int>> and new line everytime int changes
//method 2
//by using NULL char


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
    return;
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
//addition of all nodes using recursion
int add(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return root->data + add(root->left) + add(root->right);
}
// no. o all nodes using recursion
//pre order traversal compexity o(N)
int count(node* root)
{
    if(root==NULL){
        return 0;
    }

    return 1 + count(root->left) + count(root->right);
}

//diameter of a tree 
int diameter(node* root)
{
    if(root==NULL){
        return 0;
    }
    int h1 = height(root->left);
    int h2 = height(root->right);

    int dia1 = h1+h2;
    int dia2 = diameter(root->left);
    int dia3 = diameter(root->right);
    //computing height is O(N) and we are doing it at every node in
    //worst case complpexity O(N^2)coz we are finding height at every node.
    return max(dia1,max(dia2,dia3));
}



//diameter int the order of O(N)
//bottom up traversal
//post order of 


//height balanced tree
// | h1 -h2 | <= 1 a every node

class HBpair{
public:
    int height;
    bool balance;

};

HBpair isHeightbalancedTree(node* root)
{   
    HBpair p;

    if(root ==NULL)
    {

        p.height = 0;
        p.balance = true;
        return p;
    }

    //bottom up approch using post order traversal O(N)

    //recursive 

    HBpair left = isHeightbalancedTree(root->left);
    HBpair right = isHeightbalancedTree(root->right);

    p.height = 1 + max(left.height, right.height);
    if ( abs(left.height - right.height) <= 1 && left.balance && right.balance )
    {
        p.balance = true;
        
    }

    else{

        p.balance = false;
    }
    return p;    
}

//making tree from preorder and Inorder  traversal

node* create_tree_traversal(int *in,int *pre,int s,int e){

    static int i = 0;
    //base case 
    if(s>e)
    {
        return NULL;
    }

    node *root = new node(pre[i]);

    int index = -1;

    for(int j=s;j<=e;j++){
        if(in[j] == pre[i]){
            index = j;
            break;
        }
        
    }

    i++;

    root->left = create_tree_traversal(in,pre,s,index-1);
    root->right = create_tree_traversal(in,pre,index+1,e);

    return root;






}


int main(){ 
    //node *root = buildTree();
    //print(root);
    //print_all(root);
    //print_level(root,4);
    //print_BFS_levelwise(root);
    //int f = count(root);
    //int a = add(root);
    //int d = diameter(root);
    //cout<<"no. of elements:  "<<f<<endl;
    //cout<<"Sum of all the node: "<<a<<endl;  
    //cout<<"diameter of the Btree: "<<d<<endl;
     
    //if(isHeightbalancedTree(root).balance) cout<<"balanced"<<endl;

    //else cout<<"NOT balanced"<<endl;
    
    int in[] = {3,2,8,4,1,6,7,5};
    int pre[] = {1,2,3,4,8,5,6,7};

    int n = sizeof(in)/sizeof(int);

    node *root = create_tree_traversal(in,pre,0,n-1);
    print_BFS_levelwise(root);

    return 0;

}
// 8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1


