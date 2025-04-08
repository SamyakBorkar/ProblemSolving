#include<bits/stdc++.h>
using namespace std ;

class Node{
    public:
        Node* next;
        int data;

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

Node* ReverseLLusingRecurssion(Node* head){
    if(head == nullptr || head->next==nullptr){
        return head;
    }
    Node* revhead = ReverseLLusingRecurssion(head->next);
    head->next->next=head;
    head->next=nullptr;

    return revhead;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Given Linked list:";
    printList(head);

    head = ReverseLLusingRecurssion(head);

    cout << "\nReversed Linked List:";
    printList(head);

    return 0;
}