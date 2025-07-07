#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int>&st, int num){
    if(st.empty()){
        st.push(num);
        return;
    }

    int st_element = st.top();
    st.pop();
    insertAtBottom(st, num);
    st.push(st_element);
}

void printStack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main(){
    stack<int>st;
    int num=100;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    printStack(st);
    insertAtBottom(st, num);
    printStack(st);
    return 0;

}