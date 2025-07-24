#include<bits/stdc++.h>
using namespace std;

string prefixToPostfix(string s){
    stack<string>st;
    string res="";
    int n =s.length();
    for(int i= n-1; i>=0; i--){
        if((s[i] >='a' && s[i]<='z') || (s[i] >='A' && s[i]<='Z') || (s[i] >='0' && s[i]<='9')){
            st.push(string(1, s[i]));
        }
        else{
            string x = st.top(); st.pop();
            string y = st.top(); st.pop();
            string temp = x+y+s[i];
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
    string s="*-A/BC-/AKL";
    string res = prefixToPostfix(s);
    cout<<res; //ABC/-AK/L-*
    return 0;
}