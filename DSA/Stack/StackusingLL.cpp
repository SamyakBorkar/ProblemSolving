#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = nullptr;
        }
};

class Stack{
    Node* head;
    public:
        Stack(){
            this->head = nullptr;        
        }
    bool isEmpty(){
        if(head == nullptr) return true;
        return false;
    }

    void push(int data){
        Node* newNode = new Node(data);
        if(!newNode) {
            cout<<"Stack Overflow";
        }
        newNode->next=head;
        head=newNode;
    }
    void pop(){
        if(isEmpty()){
            cout<<"Stack Underflow";
        }

        Node* temp = head;
        head=head->next;
        delete temp;
    }

    int peek(){
        if(head == nullptr){
            cout<<"Stack is empty";
            return -1;
        }

        return head->data;
    }

};

int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.pop();
    cout<<st.peek();
    return 0;
}
