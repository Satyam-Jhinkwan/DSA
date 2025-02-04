#include <iostream>
using namespace std;

class ListNode{
public: 
    int data;
    ListNode* next;

    ListNode(int val){
        data = val;
        next = NULL;
    }
};

ListNode* reverseList(ListNode* head){
    ListNode* prev = NULL;
    ListNode* curr = head;

    while(curr != NULL){
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

int main(){
    ListNode* head = new ListNode(10);
    head->next = new ListNode(20);
    head->next->next = new ListNode(30);
    ListNode* reversedHead = reverseList(head);
    while (reversedHead != NULL) {
        cout << reversedHead->data << " ";
        reversedHead = reversedHead->next;
    }
    return 0;
}