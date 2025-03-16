#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
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

Node* reverseList(Node* head) {
    Node* prevP = nullptr, *currP = head, *nextP;
    if(head==nullptr || head->next == nullptr){ return head;}
    while(currP!= nullptr){
        nextP=currP->next;
        currP->next=prevP;

        prevP=currP;
        currP=nextP;
    }    
    return prevP;
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

    head = reverseList(head);

    cout << "\nReversed Linked List:";
    printList(head);

    return 0;
}