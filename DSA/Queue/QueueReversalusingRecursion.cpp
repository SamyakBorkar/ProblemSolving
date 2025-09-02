#include<bits/stdc++.h>
using namespace std;

void reverseQueueusingRecursion(queue<int>&q){
    if(q.empty()) return;

    int ele = q.front();
    q.pop();
    reverseQueueusingRecursion(q);

    q.push(ele);
}

int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout << "Original Queue: ";
    queue<int> temp = q;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    reverseQueueusingRecursion(q);

    cout << "Reversed Queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}

