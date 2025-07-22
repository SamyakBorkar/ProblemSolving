#include<bits/stdc++.h>
using namespace std;
int precedence(char chr){
    if(chr == '^'){
        return 3;
    }
    else if(chr=='*' || chr == '/'){
        return 2;
    }
    else if(chr == '+' || chr =='-'){
        return 1;
    }
    else{
        return -1;
    }
}
string infixToPostfix(string exp){
    stack<char>st;
    string res ="";
    for(char c : exp){
        if((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9')){
            res+=c;
        }
        else if(c == '('){
            st.push(c);
        }
        else if(c==')'){
            while(st.top()!='('){
                res+=st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && precedence(c)<=precedence(st.top())){
                res+=st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    return res;
}

int main(){
    string exp="a+b*(c^d-e)^(f+g*h)-i";
    string result = infixToPostfix(exp);
    cout<<result;
    return 0;
}
//abcd^e-fgh*+^*+i-