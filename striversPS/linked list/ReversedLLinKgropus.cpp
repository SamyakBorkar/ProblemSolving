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

void printList(Node *node) {
    while (node != nullptr) {
        cout << " " << node->data;
        node = node->next;
    }
}

Node* ReverseLinkedListinKGroups(Node* head, int k){
    Node* prevP=nullptr, *currp=head, *nextp;
    Node* temp=head;
    for(int i=0; i<k; i++){
        if(!temp)return head;
        temp=temp->next;
    }
    int count = 0 ; 
    while(currp!=nullptr && count<k){
        nextp=currp->next;
        currp->next=prevP;

        prevP=currp;
        currp=nextp;
        count++;
    }

    if(nextp!=nullptr){
        head->next= ReverseLinkedListinKGroups(nextp, k);
    }

    return prevP;
}

int main(){
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);

    cout << "Given Linked list:";
    printList(head);
    cout<<endl;

    Node* Revpointer = ReverseLinkedListinKGroups(head, 2);
    cout<<"REversed Linked List"<<" ";
    printList(Revpointer);
    cout<<endl;
}