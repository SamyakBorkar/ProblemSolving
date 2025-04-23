#include<bits/stdc++.h>
using namespace std;
#define n 20
class Queue{
    int *arr;
    int front =-1, back =-1;

    public:
        Queue(){
            arr= new int[n];
        }

        void push(int x){
            if(back==n-1){
                cout<<"Queue overflow"<<endl;
            }
            back++;
            arr[back] = x;

            if(front == -1){
                front++;
            }
        }

        void pop(){
            if(front == -1 || front > back){
                cout<<"queue is underflow"<<endl;
            }

            front++;
        }

        int peek(){
            if(front == -1 || front > back){
                cout<<"queue is empty"<<endl;
                return -1;
            }

            return arr[front];
        }

        bool empty(){
            if(front == -1 || front > back){
                cout<<"queue is empty"<<endl;
                return  true;
            }
            return false;
        }
};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.empty();

}