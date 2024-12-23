#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node *next;
        Node(int data){
            this->data=data;
            this->next= NULL;
        }

};
void printLL(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<< endl;
}

void insertAtEnd(Node* &head, int data){
    Node* newNode= new Node(data);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}


int main(){
    Node* node1= new Node(10);
    Node* head=node1;
    printLL(node1);
    insertAtEnd(head, 100);
    printLL(head);
}