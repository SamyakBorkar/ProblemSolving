#include<bits/stdc++.h>
using namespace std;

class Node{
    int data;
    Node* next;

    public:
        Node(int x){
            this->data=x;
            this->next=nullptr;
        }
};

class Queue{
    Node* front;
    Node* back;

    public:
        Queue(){
            front=nullptr,back=nullptr;
        }

        void Enqueue(int x){
            Node* newnode = new Node(x);
            if(front == nullptr){
                front = newnode;
                back = newnode;
                return;
            }

            back->next = newnode;
            back = newnode;
        }
};