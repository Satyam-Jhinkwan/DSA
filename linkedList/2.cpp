#include <iostream>
using namespace std;

class Node{
public:
    int data;       // Value of the node
    Node* next;     // pointer to the next Node

    // Constructor to initialize a new node
    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* &head, int val){
    Node* newNode = new Node(val);

    if(head == NULL){       //if list is empty make the head newNode
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
}

void deleteNode(Node* &head, int key){
    if (head == NULL) return;   // Empty List

    if( head->data == key){     // if head is a node to be deleted
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    Node* prev = NULL;

    while(temp != NULL && temp->data != key){   // find the node
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return;   // key not found

    prev->next = temp->next;
    delete temp;
}

void printList(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

int main(){
    Node* head = NULL;
    insertAtHead(head,10);
    insertAtHead(head,20);
    insertAtHead(head,30);      // list : 30 -> 20 -> 10 -> NULL
    insertAtTail(head,40);
    insertAtTail(head,50);      // list : 30 -> 20 -> 10 -> 40 -> 50 -> NULL
    deleteNode(head,20);
    deleteNode(head,40);        // list : 30 -> 10 -> 50 -> NULL
    // printing the linked list
    printList(head);
    return 0;
}