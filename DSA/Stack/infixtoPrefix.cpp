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
            while(!st.empty() && st.top()!='('){
                res+=st.top();
                st.pop();
            }
            if(!st.empty()) st.pop();
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

string infixToPrefix(string s){
    reverse(s.begin(), s.end());
        for(char &c : s){
        if(c == '(') c = ')';
        else if(c == ')') c = '(';
    }
    string newString = infixToPostfix(s);
    reverse(newString.begin(), newString.end());
    return newString; 
}

int main(){
    string s ="(a-b/c)*(a/k-l)";
    string res = infixToPrefix(s);
    cout << res;
    return 0;
}