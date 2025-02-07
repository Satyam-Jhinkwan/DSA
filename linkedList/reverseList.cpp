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

void insertAtTail(Node* &head,int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

Node* reverseList(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

Node* reverseListRecursive(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* newHead = reverseListRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}

void printList(Node* head){
    while(head != NULL){
        cout<< head->data << " -> ";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head= NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    cout<<"Original List : ";
    printList(head);
    cout<<"Reversed List : ";
    head = reverseListRecursive(head);
    printList(head);
    return 0;
}