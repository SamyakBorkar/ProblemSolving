#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

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

        void Dequeue(){
            if(front == nullptr){
                cout<<"Bhai Queue underflow"<<endl;
            }

            Node* nodetodelete = front;
            front=front->next;
            delete nodetodelete;
        }

        int peek(){
            if(front == nullptr){
                cout<<"Bhai Queue empty h......"<<endl;
                return -1;
            }  

            return front->data;
        }

        bool empty(){
            if(front == nullptr){
                cout<<"Bhai Queue empty h......"<<endl;
                return true;
            }

            return false;
        }
};

int main(){
    Queue q;
    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    q.Enqueue(4);
    q.Enqueue(5);

    cout<<q.peek()<<endl;
    q.Dequeue();

    cout<<q.peek()<<endl;
    q.Dequeue();

    cout<<q.peek()<<endl;
    q.Dequeue();

    return 0;
}