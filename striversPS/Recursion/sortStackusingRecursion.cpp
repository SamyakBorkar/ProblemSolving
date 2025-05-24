#include<iostream>
#include<stack>
using namespace std;

void insertSorted(stack<int>&s, int x){
    if(s.empty() || s.top()<x){
        s.push(x);
        return;
    }
    int temp = s.top();
    s.pop();
    insertSorted(s, x);
    s.push(temp);
}

void sort(stack<int>&s){
    if(!s.empty()){
        int x = s.top();
        s.pop();
        sort(s);
        insertSorted(s, x);
    }
}
int main(){
    stack<int>s;
    s.push(11);
    s.push(2);
    s.push(32);
    s.push(3);
    s.push(41);

    sort(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;

}