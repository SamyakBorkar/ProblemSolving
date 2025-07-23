#include<bits/stdc++.h>
using namespace std;

string prefixToInfix(string exp){
    stack<string>st;
    string res =  "";
    int n = exp.length()-1;
    for(int i =n; i>=0; i--){
        if(exp[i] == '^' || exp[i] == '/' || exp[i] == '*' || exp[i] == '+' || exp[i] == '-' ){
            string x = st.top(); st.pop();
            string y = st.top(); st.pop();
            string str = '(' + x + exp[i] + y + ')';
            st.push(str);
        }
        else{
            st.push(string(1, exp[i]));
        }
    }
    if(!st.empty()){
        res = st.top();
        st.pop();
    }
    return res;
}

int main(){
    string exp = "*-A/BC-/AKL";
    string res = prefixToInfix(exp);
    cout<<res;
    return 0;
    }