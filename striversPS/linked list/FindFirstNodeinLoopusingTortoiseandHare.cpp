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

Node* createLoopinLL(){
    Node* first = new Node(5);
    Node* second = new Node(6);
    Node* third = new Node(7);
    Node* fourth = new Node(8);
    Node* fifth = new Node(9);

    first->next= second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=second;

    return first;
}

Node* FindFirstElementofLoop(Node* head){
    Node* slow = head , *fast = head;
    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;

        if(slow==fast){
            slow = head;

            while(slow!=fast){
                slow = slow->next;
                fast=fast->next;
            }

            return slow;
        }
    }
    return nullptr;
}

int main(){
    Node* head = createLoopinLL();
    Node* result = FindFirstElementofLoop(head);
    cout<<result->data;
    return 0;

}