#include<iostream>
using namespace std;

class Node{
    
    public:
        int data;
        Node* next;

        Node(int data){
            this->data=data;
            this->next=NULL;
        }
};

void insetAtHead(Node* &head, int data){
    Node* newNode = new Node(data);
    newNode->next=head;
    head=newNode;
}

void insertAtTail(Node* &tail, int data){
    Node* temp= new Node(data);
    tail->next=temp;
    tail=tail->next;
}

void printLL(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<< endl;
}
int main(){
    Node* node1= new Node(10);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;
    //Node* node2= new Node(20);
    //node1->next=node2;
    printLL(node1);
    insetAtHead(node1, 20);
    insetAtHead(node1, 30);
    printLL(node1);
}