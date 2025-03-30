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
    Node* temp = head;
    if(head->next==nullptr && n==1){
        return nullptr;
    }
    int cnt =0;
    while(temp!=nullptr){
        temp=temp->next;
        cnt++;
    }
    int length = cnt - n;
    if(length==0) return head->next;
    cnt=0, temp=head;
    while(cnt < length-1){
        temp=temp->next;
        cnt++;
    }
    Node* NodetoDelete = temp->next;
    if(temp->next) temp->next=temp->next->next;
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