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

Node* sortLL(Node* head){
    vector<int>data;
    Node* curr = head;
    while(curr!=nullptr){
        data.push_back(curr->data);
        curr=curr->next;
    }
    sort(data.begin(), data.end());
    curr=head;
    for(int i=0; i<data.size(); i++){
        curr->data=data[i];
        curr=curr->next;
    }

    return head;
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
    
    sortLL(head);
    printLL(head);

    return 0;
}