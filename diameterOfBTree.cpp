**F I R S T    A P P R O C H**
 
**Naive Approch**

* We are not going to every node only one time
* we are also makin the call to the height function every time calculting the diameter 
* these calls are taking us to every Node 
	* diameterOfBinaryTree( root -> left)
	* diameterOfBinaryTree( root -> left)

* and we are doing O(N) work at every node 
	*  calling height function
* Hence, overall complexity is of order O( N x N )


```
//helper function
    int height( TreeNode* root ){
        
        //base case
        if( root == NULL ){
            return 0;
        } 
        
        //recursive case
        
        int h1 = height( root -> left );
        int h2 = height( root -> right );
         
        int h = 1 + max( h1, h2 );
        
        return h;
    }
    
    //main function
    int diameterOfBinaryTree(TreeNode* root) {
        
        //base case
        if( root == NULL ){
            return 0;
        }
        
        //recursive case
        //maximum depth in left subtree + max depth in right subtree
		//gives the diameter passing throught the root
        int dia = height( root -> left ) + height( root -> right );
        
        //diameter of both child trees ( left and right) 
        int d1 = diameterOfBinaryTree( root -> left );
        int d2 = diameterOfBinaryTree( root -> right );
        
        
        return max( dia , max( d1, d2 )); 
        
        }
```


 **S E C O N D    A P P R O C H**
 
**Optimised Approch**

* Every node is getting visited once.
* Every node is returning two values one if the height and other one is the diameter.
* on each node we are doing O(1) work.
* Time Complexity O(N).
```
class HDpair{
    
    public:
        
        int height;
        int diameter;
};


class Solution {
public:
    
    //helper function
    //optimised code 
    HDpair diameter( TreeNode* root ){
        
        //instance of HDpair class
        HDpair p;
        
        //base case
        if( root == NULL ){
            
            p.height = 0;
            p.diameter = 0;
            
            return p;
        }
        
        
        //recursive case
        HDpair left = diameter( root -> left );
        HDpair right = diameter( root -> right );
        
        
        //height at current node
        p.height = 1 + max( left.height, right.height );
        
        //
        int dia = left.height + right.height;
        int d1 = left.diameter;
        int d2 = right.diameter;
        
        //final diameter 
        p.diameter = max( dia, max( d1, d2) );
        
        return p;
        
    }
    
    //main function
    int diameterOfBinaryTree(TreeNode* root) {
        
        
        HDpair temp = diameter( root );
        return temp.diameter;
       
        
        }
};
```