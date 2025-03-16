#include<iostream>
#include<vector>
#include<algorithm>
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

Node* reverseDLL(Node* head) {
    Node* prevp = nullptr;
    Node* currp = head;
    if(head==nullptr || head->next == nullptr){ return head;}
    while(currp!=nullptr){
        prevp = currp->prev;
        currp->prev = currp->next;
        currp->next=prevp; 
    
        currp=currp->prev;
    }

    return prevp->prev;
}
  void printList(Node *node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;
    head->next->next->next = new Node(4);
    head->next->next->next->prev = head->next->next;
    cout << "Original Doubly Linked List" << endl;
    printList(head);
    head = reverseDLL(head);
    cout << "Reversed Doubly Linked List" << endl;
    printList(head);
    return 0;
}