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

Node* reverse(Node* head) {
    Node* prev = nullptr;
    Node* curr = head;
    Node* next;

    while (curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool checkPalindromeLL(Node* head){
    Node* fast = head;
    Node* slow = head;

    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* head2 = reverse(slow);
    Node* temp1 = head;
    Node* temp2 = head2;

    while(temp2 != nullptr) {
        if(temp1->data != temp2->data) {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    reverse(head2);
    return true;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(1);

    if (checkPalindromeLL(head)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }

    return 0;
}