#include <iostream>
#include <vector>
using namespace std;

// Define a structure for a Node in the linked list
class Node {
    public:
    int data;       // Data stored in the node
    Node* next;     // Pointer to the next node in the list

    // Constructor to initialize the node with data and next pointer
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr; 
    }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 0 ; i < arr.size() ; i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }   
    return head;
}

int main() {
    // Initialize a vector with some integers
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = convertArr2LL(arr);
    cout<< head->data<<endl;
    // Create a new node with the first element of the vector and no next node
    // Node* y = new Node(arr[0], nullptr); dont need to mention nullptr if it is defined in constructor
    // Node* y = new Node(arr[0]);
    // cout << y << endl;    // Prints the memory address of the node object
    // cout<< y->data<<endl;   // Prints the value of the element at index 1 in the array
    // // Print the memory address of the next node of y (which is currently nullptr)
    // cout << y->next;
    return 0;
}