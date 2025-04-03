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

Node* segregate(Node* head) {
    int zero_count=0, one_count=0, two_count=0;
    Node* temp = head;
    while(temp!=nullptr){
        if(temp->data==0){
            zero_count++;
        }
        else if(temp->data==1){
            one_count++;
        }
        else{
            two_count++;
        }
        temp=temp->next;
    }
    temp=head;
    while(zero_count){
        temp->data=0;
        zero_count--;
        temp=temp->next;
    }
    while(one_count){
        temp->data=1;
        one_count--;
        temp=temp->next;
    }
    while(two_count){
        temp->data=2;
        two_count--;
        temp=temp->next;
    }
return head;

}

void printList(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* head = new Node(1);
    Node* two = new Node(2);
    Node* three = new Node(2);
    Node* four = new Node(1);
    Node* five = new Node(2);
    Node* six = new Node(0);
    Node* seven = new Node(2);
    Node* eight = new Node(2);

    head->next=two;
    two->next=three;
    three->next=four;
    four->next=five;
    five->next=six;
    six->next=seven;
    seven->next=eight;
    cout<<"Original Linked List:"<<" ";
    printList(head);
    cout<<endl;

    Node* newNode = segregate(head);
    cout<<"Resultant Linked List:"<<" ";
    printList(newNode);
    
    return 0;
}