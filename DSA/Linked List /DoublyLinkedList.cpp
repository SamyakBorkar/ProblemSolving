#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};

void printLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertATHead(Node*& head, int data){
    Node* temp = new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void insertATTail(Node*& tail, int data){
    Node* temp=new Node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertAtPosition(Node*& head, Node*& tail, int position, int data){
    if(position==1){
        insertATHead(head, data);
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertATTail(tail, data);
    }
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    if (temp->next != NULL) {
        temp->next->prev = nodeToInsert;
    }
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

int main(){
    Node* node1 = new Node(10);
    Node* head=node1;
    Node* tail=node1;
    printLL(head);
    insertATHead(head, 15);
    insertATHead(head, 20);
    insertATHead(head, 25);
    printLL(head);
    insertATTail(tail, 100);
    printLL(head);
    insertAtPosition(head, tail, 3, 100001);
    printLL(head);
}