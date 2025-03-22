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

bool hasCycle(Node *head) {
        Node* slow = head;
        Node* fast = head;
        
        while(fast!= nullptr && fast->next!= nullptr){
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow == fast){
                return true;
            }
        }
    return false ; 
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

    bool result = hasCycle(head);
    cout<< result;
    return 0;
}