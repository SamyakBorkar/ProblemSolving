#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = rear = nullptr;
    }

    void enqueue(int val) {
        Node* newNode = new Node(val);
        if (rear == nullptr) {
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }

    void dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty!\n";
            return;
        }
        Node* temp = front;
        front = front->next;
        if (front == nullptr)
            rear = nullptr;
        delete temp;
    }

    int peek() {
        if (front == nullptr) {
            cout << "Queue is empty!\n";
            return -1;
        }
        return front->data;
    }

    void display() {
        if (front == nullptr) {
            cout << "Queue is empty!\n";
            return;
        }
        Node* temp = front;
        while (temp != nullptr) {
            cout << temp->data << " <- ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    bool isEmpty() {
        return (front == nullptr);
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    cout << "Front element: " << q.peek() << endl;
    q.dequeue();
    q.display();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    return 0;
}
