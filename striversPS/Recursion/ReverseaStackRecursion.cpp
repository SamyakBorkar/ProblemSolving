#include<iostream>
#include<stack>
using namespace std;


void insertAtBottom(stack<int>&st, int ele){
    if(st.empty()){
        st.push(ele);
    }
    
    else{
        int temp = st.top();
        st.pop();
        insertAtBottom(st, ele);
        st.push(temp);
    }
}

void reverseStack(stack<int>&st){
    if(!st.empty()){
        int x = st.top();
        st.pop();
        reverseStack(st);
        insertAtBottom(st, x);
    }
}

int main(){
    stack<int>st;
    st.push(10);
    st.push(9);
    st.push(8);
    st.push(7);
    st.push(6);

    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    cout<<endl;
    cout<<"Reverse of STack is:";
    reverseStack(st);
        while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0 ;
}