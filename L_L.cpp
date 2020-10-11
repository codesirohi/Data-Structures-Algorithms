#include<iostream>
using namespace std;

class node{
public:    
    int data;
    node* next;

    //constructor for the node
    node(int d){
        data = d;
        next = NULL;
 
    }
};
// we used & to a pass a pointer varibale by refrence 
// so we can see changesin the main
void insertHead(node*&head,int data){
    node*n = new node(data); 
    //let we have node n [data | next]
    //if we want to update the data we will write (*n).data
    //short cut     n -> data
    n->next =head;
    head = n; 
}
 
 //if you do not want your head to be modified in the main
 // (node*head) but if you want changes in main pass it by refrence
 // (node*&head)
void print(node*head){
    //node*temp = head;
    while(head!=NULL){
        cout<<head->data<<"-->";
        head =head->next;
    }
    cout<<endl;

}

int len(node*head){

    int i = 0;
    while(head!= NULL){
        head = head -> next;
        i++;
    }
    return i;
}

void insertTail(node*&head,int data){

    if(head == NULL){
        head = new node(data);
        return;
    }
    node * tail = head;
    while(tail -> next!=NULL){

        tail =tail -> next;
    }
    tail -> next = new node(data);
    return;
}

void insertMiddle(node*&head,int data,int p){
    //either head is null or user want to insert a node at position 0
    //use function insertHead(data)
    if(head == NULL || p==0){
        insertHead(head,data);

    }
    else if(p>len(head)){

         insertTail(head,data);

    }
    else{
        //take p-1 jumps
        int jump =1;
        node*temp =head;
        while (jump<=p-1){
            temp = temp -> next;
            jump++;
        }
        
        node * n = new node(data);
        n -> next = temp -> next;
        temp -> next = n ;
        //n is a static pointer it will get deleted automatically


    }
}



int main(){
    node*head = NULL; 

    
    insertHead(head,5);
    insertHead(head,6);
    insertHead(head,88);
    insertMiddle(head,3,2);
    insertHead(head,8);
    insertTail(head, 100);
    print(head);

}