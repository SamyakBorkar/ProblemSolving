#include<bits/stdc++.h>
#include<stack>
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

bool isPalindrome(Node* head){
    stack<int>st;
    Node* temp = head;
    while(temp!=nullptr){
        st.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp!=nullptr){
        int topelement = st.top();
        st.pop();

        if(temp->data!=topelement){
            return false;
        }
        temp=temp->next;
    }
    return true;
}

int main(){
Node head(1);
head.next = new Node(2);
head.next->next = new Node(3);
head.next->next->next = new Node(4);
head.next->next->next->next = new Node(1);

bool result = isPalindrome(&head);

if (result)
    cout << "true\n";
else
    cout << "false\n";

return 0;
}