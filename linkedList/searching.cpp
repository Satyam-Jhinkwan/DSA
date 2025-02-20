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
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1 ; i < arr.size() ; i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

bool findElement(Node* &head, int val){
    Node* temp = head;
    while (temp)
    {
        if(temp->data == val){
            return true;
        }
        temp = temp->next;
    }
    return false;
    
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    Node* head = convertArr2LL(arr);
    int result = findElement(head,11);
    if(result==1){
        cout<<"Yes the element was in the LL";
    }else{
        cout<<"No the element wasn't in the LL";
    }
    return 0;
}