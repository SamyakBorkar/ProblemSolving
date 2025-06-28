#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c : s){
            if(c == '(' || c == '{' || c == '['){
                st.push(c);
            }
            else{
                if(st.empty()) return false;

                char top = st.top();
                if( (c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[') ){
                    return false;
                }

                st.pop();
            }
        }
        return st.empty();
    }
};


int main(){
    Solution obj;
    string s = "([])";
    if(obj.isValid(s)){
        cout<<"It is valid"<<endl;
    }
    else{
        cout<<"It is not valid"<<endl;
    }
    return 0;
}