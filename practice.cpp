// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }

    // parametrised constructor
    Node(int data)
    {

        this->data = data;
        this->next = NULL;
    }
};
// passing pointer head variable  by reference
void insertAtHead(Node* &head, int data)
{

    // dynamic memory allocation,
    // beacase we want node to persists even after fucntion call is finish
    Node *node = new Node(data);
    node->next = head;
    head = node;
}

void printList(Node* head){


    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<endl;

}



int main()
{
    // Write C++ code here
    Node *head = NULL;

    insertAtHead(head, 23);
    insertAtHead(head, 12);
    insertAtHead(head, 43);
    insertAtHead(head, 10);
    printList(head);

    return 0;
}