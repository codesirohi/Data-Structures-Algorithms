class Output{
 
 public:
 
    int include;
    int exclude;
    
};



class Solution{
  
  public:
    //Function to return the maximum sum of non-adjacent nodes.
    
    //helper function
    Output helper( Node* root ){
        
        Output var;
        
        //base case
        if( root == NULL ){
            
            var.include = 0;
            var.exclude = 0;
            
            return var;
            
        }

        
        Output left = helper( root -> left );
        Output right = helper ( root -> right );

        
        var.include = root->data + left.exclude + right.exclude;
        var.exclude = max( left.include, left.exclude ) + max( right.include, right.exclude );
        
        return var;
        
        
    }
    
    
    
    int getMaxSum(Node *root) 
    {
        // Add your code here
        
        Output temp = helper( root );
        
        return max( temp.include, temp.exclude  );
        
        
    }
};