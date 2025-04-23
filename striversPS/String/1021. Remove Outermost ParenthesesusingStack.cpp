#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string res = "";
        for (int i = 0; i < s.length(); i++) {  
            if (s[i] == '(') {
                if (!st.empty()) {
                    res += s[i]; 
                }
                st.push(s[i]);
            } else if (s[i] == ')') {
                st.pop();
                if (!st.empty()) {
                    res += s[i]; 
                }
            }
        }
        return res;
    }
};

int main() {
    Solution obj;
    string ip = "(()())(())"; // Expected output: ()()()
    string res = obj.removeOuterParentheses(ip);
    cout << res;
    return 0;
}