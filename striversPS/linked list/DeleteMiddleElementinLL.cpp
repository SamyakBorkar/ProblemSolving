#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    
Node(int data){
    this->data=data;
    this->next=nullptr;
    }
};

ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr || head->next==nullptr){ return nullptr}
        slowP = head;
        if(head->next) fastP=head->next->next;

        while(fastP->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* nodetodel = slow->next;
        slow->next = slow->next->next;
        delete(nodetodel);
        return head ;
}

int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);
    head->next = second;
    second->next = third;
    third->next=fourth;
    fourth->next=fifth;
    return 0;
}