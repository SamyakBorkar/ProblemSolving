#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        Node* prev;
        Node* next;
        int data;

        Node(int data){
            this->data=data;
            this->next=nullptr;
            this->prev=nullptr;
        }
};

Node *addNode(Node *head, int pos, int data) {
    int cnt=0;
    Node* temp = head;
    if(pos==0){
        Node* Nodetoinsert = new Node(data);
        Nodetoinsert->prev=nullptr;
        Nodetoinsert->next=head;
        head=Nodetoinsert;
    }
    else{
        while(cnt!=pos){
            temp=temp->next;
            cnt++;
        }
        Node* block = new Node(data);
        if(temp->next==nullptr){
            temp->next=block;
            block->prev=temp;
        }
        else {
            block->next=temp->next;
            if(temp->next != nullptr) {
                temp->next->prev=block;
            }
            temp->next=block;
            block->prev=temp;
        }
        
    }
    return head;
}

void PrintLL(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main() {
    Node* head = new Node(6);
    head->next = new Node(5);
    head->next->prev = head;
    head->next->next = new Node(5);
    head->next->next->prev = head->next;
    head->next->next->next = new Node(6);
    head->next->next->next->prev = head->next->next;
    head->next->next->next->next = new Node(3);
    head->next->next->next->next->prev = head->next->next->next;
    head->next->next->next->next->next = new Node(5);
    head->next->next->next->next->next->prev = head->next->next->next->next;
    head->next->next->next->next->next->next = new Node(8);
    head->next->next->next->next->next->next->prev = head->next->next->next->next->next;

    
    int pos = 9;
    int data = 7;
    head = addNode(head, pos, data);
    PrintLL(head);
    return 0;
}