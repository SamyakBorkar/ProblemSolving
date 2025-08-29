#include<bits/stdc++.h>
using namespace std;

class Deque{
    private:
        int *arr;
        int front, size , rear;
    public:
        Deque(){
            size = 100;
            front = rear = -1;
            arr = new int[size];
        }

        bool isEmpty(){
            return (front == -1);
        }

        bool isFull(){
            return ((front == 0 && rear == size-1) || (front == rear+1));
        }

        void push_front(int x){
            if(isFull()){
                cout << "Queue is Full\n";
                return;
            }
            if(front == -1){  // first element
                front = rear = 0;
            }
            else if(front == 0){
                front = size - 1;
            }
            else{
                front--;
            }
            arr[front] = x;
        }

        void push_back(int value) {
            if (isFull()) {
                cout << "Queue is Full\n";
                return;
            }
            if (front == -1) {
                front = rear = 0;
            }
            else if (rear == size - 1) {
                rear = 0;
            }
            else {
                rear++;
            }
            arr[rear] = value;
        }

        void pop_front() {
            if (isEmpty()) {
                cout << "Queue is Empty\n";
                return;
            }
            if (front == rear) {
                front = rear = -1;
            }
            else if (front == size - 1) {
                front = 0;
            }
            else {
                front++;
            }
        }

        void pop_back() {
            if (isEmpty()) {
                cout << "Queue is Empty\n";
                return;
            }
            if (front == rear) {
                front = rear = -1;
            }
            else if (rear == 0) {
                rear = size - 1;
            }
            else {
                rear--;
            }
        }

        int getFront() {
            if (isEmpty()) {
                cout << "Deque is Empty\n";
                return -1;
            }
            return arr[front];
        }

        int getRear() {
            if (isEmpty()) {
                cout << "Deque is Empty\n";
                return -1;
            }
            return arr[rear];
        }

        void display() {
            if (isEmpty()) {
                cout << "Deque is Empty\n";
                return;
            }
            int i = front;
            while (true) {
                cout << arr[i] << " ";
                if (i == rear) break;
                i = (i + 1) % size;
            }
            cout << endl;
        }
};

int main(){
    Deque dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);
    dq.push_back(30);

    dq.display(); // 5 10 20 30

    dq.pop_front();
    dq.pop_back();

    dq.display(); // 10 20

    cout << "Front: " << dq.getFront() << endl;
    cout << "Rear: " << dq.getRear() << endl;

    return 0;
}
