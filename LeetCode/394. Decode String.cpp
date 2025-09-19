#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string decodeString(string s) {
        stack<int> numStack;
        stack<string> strStack;
        string curr = "";
        int num = 0;
        for(char c : s) {
            if(isdigit(c)) {
                num = num * 10 + (c - '0');
            } else if(c == '[') {
                numStack.push(num);
                strStack.push(curr);
                num = 0;
                curr = "";
            } else if(c == ']') {
                int repeat = numStack.top(); numStack.pop();
                string prev = strStack.top(); strStack.pop();
                string temp = "";
                for(int i = 0; i < repeat; i++) temp += curr;
                curr = prev + temp;
            } else {
                curr += c;
            }
        }
        return curr;
    }
};

int main(){
    Solution obj;
    string s = "3[a2[c]]";
    string res = obj.decodeString(s);
    cout<<res;
    return 0;
}