#include<bits/stdc++.h>

class Node{
    public:
        int data;
        Node* next;
    
Node(int data){
    this->data=data;
    this->next=nullptr;
    }
};

Node* removeNthFromEnd(Node* head, int n) {
    Node* fastP = head;
    Node* slowP= head;
     
    for(int i=0; i<=n; i++){
        fastP=fastP->next;
    }

    while(fastP!=nullptr){
        fastP=fastP->next;
        slowP=slowP->next;
    }

    Node* NodetoDelete = slowP->next;
    slowP->next = slowP->next->next;
    delete(NodetoDelete);
    return head;
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