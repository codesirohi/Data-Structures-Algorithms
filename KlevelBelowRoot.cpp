// function should print the nodes at k distance from root


void helper(struct Node *root, int k , vector<int> &vec){
    
    if( root == NULL ){
        
        return;
        
    }
    
    if( k == 0){
      
    vec.push_back(root -> data);
    return;
  }
  
   
    helper( root -> left, k-1, vec);
    helper( root -> right, k-1,vec);
    
}


vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
  
  vector<int> vec;
  
    helper(root, k, vec );
    
    return vec;
  
  
  
  
}