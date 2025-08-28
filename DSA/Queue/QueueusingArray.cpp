#include<bits/stdc++.h>
using namespace std;

class Queue{
    int *arr;
    int size;
    int qfront, rear;
    public:
        Queue(){
            int size = 100;
            arr = new int[size];
            qfront=0; 
            rear=0;
        }

    void enqueue(int data){
        if(rear == size-1){
            cout<<"Queue Overflow"<<endl;
        }
        arr[rear++] = data;
    }

    int dequeue(){
        int ans = arr[qfront];
        if(qfront == rear){
            return -1;
        }
        else{
            arr[qfront] = -1;
            qfront++;
            if(qfront == rear){
                qfront =0; rear=0;
            }
        }
        return ans;
    }

    int front(){
        if(qfront == rear){
            return -1;
        }
        else{
            return arr[qfront];
        }
    }

    bool isEmpty(){
        if(qfront == rear){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    cout<<q.front()<<endl;
    q.dequeue();
    cout<<q.front()<<endl;

    return 0;
}