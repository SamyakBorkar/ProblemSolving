#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt = 0;
        string res = "";
        for(int i=0; i<s.length(); i++){
            if(s[i]=='('){
                if(cnt!=0){
                    res+=s[i];
                }
                cnt++;
            }
            else if(s[i]==')'){
                cnt--;
                if(cnt!=0){
                    res+=')';
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