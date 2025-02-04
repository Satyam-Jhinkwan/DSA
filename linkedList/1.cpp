#include <iostream>
using namespace std;

// Node structure
class Node{
public:
    int data;
    Node* next;

    // Constructor
    Node(int val){
        data = val;
        next = NULL;
    }
};

// Function to print linked list
void printList(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp -> data<<" -> ";
        temp= temp->next;
    }
    cout<<"NULL\n";
}

int main(){
    // Creating nodes
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    // print the linked list
    printList(head);

    return 0;
}