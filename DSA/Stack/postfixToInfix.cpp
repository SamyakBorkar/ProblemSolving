#include<bits/stdc++.h>
using namespace std ;

string postfixToInfix(string s){
    string res = "";
    stack<string>st;
    for(char c : s){
        if((c >='a' && c<='z') || (c >='A' && c<='Z') || (c >='0' && c<='9')){
            st.push(string(1, c));
        }
        else{
            string x =st.top(); st.pop();
            string y =st.top(); st.pop();
            string temp = '('+y+c+x+')';
            st.push(temp);
        }
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    return res;
}

int main(){
    string s = "ab*c+";
    string res = postfixToInfix(s);
    cout<<res; //((a*b)+c)
    return 0;
}