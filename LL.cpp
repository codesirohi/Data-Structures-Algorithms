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
    node*n = new node(data);  //n is a pointer of node type s it will only store the value of node type
    //let we have node n [data | next]
    //if we want to update the data we will write (*n).data
    //short cut     n -> data
    n->next =head;
    head = n; 
}
 
 //if you do not want your head to be modified in the main
 // (node*head) but if you want changes in main pass it by refrence
 // (node*&head)
void printlist(node*head){
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
//value of head will change thats we are pasiing it by reference
void buildList(node*&head){

    int data;
    cin>> data;

    while(data!=-1){
        insertTail(head,data);
        cin>>data;
    }
}

bool searchRecursive(node*head, int key){
    if(head==NULL){
        return false;
    }
    if(head->data ==key){
        return true;
    }
    else{
        return searchRecursive(head->next,key);
    }   
}

//reversing a linkedlist using iteration
void reverse(node*&head)
{
    node*C = head;
    node*P = NULL;
    node*N;

    while(C!=NULL){
        //save the next node 
        N = C-> next; 
        //making the current node point to prev
        C->next = P;
        //just update current and previous node
        P = C;
        C = N;




    }
    head = P;
}

node* rev_rec(node*head){

    //base case for
    if(head -> next == NULL || head == NULL){
        return head;
    }
    node*smallHead = rev_rec(head->next);
    node*C =head;
    C-> next-> next = C;
    C-> next = NULL;
    return smallHead;

}

//middle node using runners technique
node* midPoint(node*head){

    if(head== NULL ||  head ->next == NULL){
        return head;
    }

    node*slow = head;
    node*fast = head->next;

    while(fast != NULL && fast -> next != NULL){
        fast = fast->next->next;
        slow = slow -> next;
    }
    return slow;
}

//operator overloading
//cascading
istream& operator>>(istream &is,node*&head){
    buildList(head);
    return is;
}

ostream& operator<<(ostream &os,node*head){
    printlist (head);
    return os;
}

int main(){
    node*head = NULL; 
    //buildList(head);
    
    //printlist(head);

    cin>>head;
    cout<<endl<<head<<endl;

    //head = rev_rec(head);
    //printlist(head);
    node*m = midPoint(head);
    cout<<m->data;
    


    //if(searchRecursive(head,3)){
    //    cout<< "element is present.. "<<endl;
    //}
    return 0;

}