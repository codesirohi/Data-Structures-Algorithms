class Solution {
public:
    
    //helper function to get number of nodes
    int length( ListNode* head ){
        
        //base case
        if( head == NULL ){
            return 0;
        }
        
        int i = 1;
        
        while( head -> next != NULL  ){
            
            head = head -> next;
            i++;
        }  
        return i;
    }  
    
    
    
    ListNode* removeNthFromEnd( ListNode* head, int n) {
        
        //getting number of nodes
        int len = length( head );
        int start = len - n;
        
        if( start == 0 ){
            
            head = head -> next; 
            return head;
        } 
        
        //temp pointer to make changes 
        ListNode* temp = head;
        
        start = start - 1; 
        
        //iterating to reach the node
        while(  start-- ){
            
            temp = temp -> next;
             
        }
        
        //making changes in address 
        temp -> next = temp -> next -> next;
        return head;
    }
    
    
    
    
};