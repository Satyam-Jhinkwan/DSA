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

Node* mergeSortedLists(Node* l1, Node* l2 ){
    Node* dummy = new Node(-1);     // dummy node to simplify merging
    Node* tail = dummy;

    while(l1 != NULL && l2 != NULL){
        if ( l1->data < l2->data){
            tail->next = l1;
            l1 = l1->next;
        }else{
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;  // move tail forward
    }

    // if any node remain in l1,l2 attach them 
    if(l1 != NULL) tail->next = l1;
    if(l2 != NULL) tail->next = l2;

    return dummy->next;     // skip dummy node and return merged list
}

// using reccursion

Node* mergeSortedListsRecursive(Node* l1 , Node* l2){
    if ( l1 == NULL) return l2;
    if ( l2 == NULL) return l1;

    if (l1->data < l2->data){
        l1->next = mergeSortedListsRecursive(l1->next,l2);
        return l1;
    }else{
        l2->next = mergeSortedListsRecursive( l1,l2->next);
        return l2;
    }
}

void insertAtTail(Node* &head, int val){
    Node* newNode = new Node(val);
    
    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;
    while( temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void printList(Node* head){
    while(head != NULL){
        cout<< head->data << " -> ";
        head = head->next;
    }
    cout<<"NULL\n";
}

int main(){
    Node* list1 = NULL;
    Node* list2 = NULL;

    insertAtTail(list1, 1);
    insertAtTail(list1, 3);
    insertAtTail(list1, 5);

    insertAtTail(list2, 2);
    insertAtTail(list2, 4);
    insertAtTail(list2, 6);

    cout << "List 1: ";
    printList(list1);
    cout << "List 2: ";
    printList(list2);

    Node* mergedList = mergeSortedLists(list1, list2);
    cout << "Merged List: ";
    printList(mergedList);
    return 0;
}