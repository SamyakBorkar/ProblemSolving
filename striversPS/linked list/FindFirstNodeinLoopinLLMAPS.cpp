#include<iostream>
#include<vector>
#include<unordered_map>
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

Node* createLoopedList() {
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = second; 

    return head;
}

Node* FirstNode(Node* head){
    unordered_map<Node*, bool>mp;
    Node* temp = head;
    while(temp!=nullptr){
        if(mp[temp]){
            return temp;
        }
    mp[temp]=true;
    temp=temp->next;
    }
    return NULL;
}

int main(){
    Node* head = createLoopedList();
    Node* result = FirstNode(head);

    cout<<result->data;
    return 0;
}