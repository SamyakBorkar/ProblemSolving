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

int FindLengthofLoop(Node* head){
    Node* slow = head , *fast = head;
    int cnt = 1;
    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;

        if(slow==fast){
            fast=fast->next;
            while(fast!=slow){
                cnt++;
                fast=fast->next;
            }
            return cnt;
        }
    }
    return 0;
}
int main(){
    Node* head = createLoopinLL();
    Node* result = FindFirstElementofLoop(head);
    cout<<result->data;
    return 0;

}