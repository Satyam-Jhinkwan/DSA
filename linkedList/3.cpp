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

bool detectCycle(Node* &head){
    Node* slow = head;
    Node* fast = head;
    
    while(fast != NULL && fast->next != NULL ){
        slow = slow->next;              // move slow pointer 1 step
        fast = fast->next->next;        // move fast pointer 2 steps

        if (slow == fast){      // if they meet , cycle exists
            return true;
        }
    }
    return false;   // NO cycle
}

void createCycle(Node* &head,int pos){
    Node* temp = head;
    Node* cycleNode = NULL;
    int count = 1;

    while( temp->next != NULL){
        if(count == pos){
            cycleNode = temp;       // store the node where cycle should be formed
        }
        temp = temp->next;
        count++;
    }
    temp->next = cycleNode;     // create cycle
}

void removeCycle(Node* &head){
    Node* slow = head;
    Node* fast = head;

    // step 1 : detect cycle
    do{
        slow = slow->next;
        fast = fast->next->next;
    }while(slow != fast);

    // step 2 : find the cycle starting node
    slow = head;
    Node* prev = NULL;
    while(slow != fast){
        prev = fast;            // store previous node
        slow = slow->next;
        fast= fast->next;
    }

    // step 3 : break the cycle 
    prev->next = NULL;
}

void insertAtTail(Node* &head, int val){
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

void printList(Node* &head){
    while(head!= NULL){
        cout<<head->data<<" -> ";
        head = head->next;
    }
    cout<<"NULL\n";
}

int main(){
    Node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    printList(head);
    createCycle(head,3);        // creating a cycle at position 3

    if(detectCycle(head)){
        cout << "Cycle detected! Removing cycle..." << endl;
        removeCycle(head);
        if(!detectCycle(head)){
            cout<<"Cycle removed sucessfully"<<endl;
        }
    }else{
        cout<<"No Cycle Detected"<<endl;
    }
    return 0;
}