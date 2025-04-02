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

Node* findMiddleofLinkedList(Node* head){
    if (!head || !head->next) return head;

    Node* slow = head;
    Node* fast = head->next;
    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

Node* MergeLinkedList(Node* left, Node* right){
    if(!left) return right;
    if(!right) return left;

    Node* result = nullptr;
    if(left->data <= right->data){
        result=left;
        result->next=MergeLinkedList(left->next, right);
    }
    else{
        result=right;
        result->next=MergeLinkedList(left, right->next);
    }

    return result;
}

Node* sortLL(Node* head){
    if (!head || !head->next) {
        return head;
    }
    Node* middle = findMiddleofLinkedList(head);
    Node* right = middle->next;
    middle->next=nullptr;

    Node* left = sortLL(head);
    right = sortLL(right);


    return MergeLinkedList(left, right);
}

void printLL(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head = new Node(4);
    Node* second = new Node(2);
    Node* third = new Node(1);
    Node* fourth = new Node(3);

    head->next=second;
    second->next=third;
    third->next=fourth;
    printLL(head);

    Node* newhead = sortLL(head);
    printLL(newhead);

    return 0;
}