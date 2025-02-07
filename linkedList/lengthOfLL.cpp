#include <iostream>
#include <vector>
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

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node (arr[0]);
    Node* mover = head;
    for(int i = 1 ; i < arr.size() ; i++){
        Node* temp = new Node (arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int lengthOfLL(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    cout<<"length of the LL : ";
    return cnt;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    Node* head = convertArr2LL(arr);
    cout<< lengthOfLL(head);
    return 0;
}