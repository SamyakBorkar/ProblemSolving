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

bool hasCycle(Node* head){
    unordered_map<Node*, bool> mp;
    Node* current= head;
    while(current!=nullptr){
        if(mp[current]){
            return true;
        }
        else{
            mp[current]=true;
            current=current->next;
        }
    }
    return false;
}

int main(){
    Node* head = createLoopedList();
    bool result = hasCycle(head);
    cout<<result;
    return 0;
}