#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtHead(Node* &head,int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* &head, int val){
    Node* newNode = new Node(val);
    newNode->next = NULL;
    if(head==NULL){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}



void printList(Node* head){
    while (head)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<"NULL"<<endl;
    
}

int main(){
    Node* head = NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);

    printList(head);
    return 0;
}