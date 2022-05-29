/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */
class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        Node* slow = head;
        Node* fast = head;
        
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        if(fast->next == NULL){
            return slow->data;
            
            }
        else{
             Node* temp = slow->next;
             return temp->data;
         }
        
    }
};

///FAST and SLOW POINTER