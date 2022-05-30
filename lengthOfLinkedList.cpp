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