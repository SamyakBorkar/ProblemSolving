#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int sp=0;
        for(int i =0; i<=n; i++){
            if(i ==n || s[i] == ' '){
                reverse(s.begin()+sp, s.begin()+i);
                sp=i+1;
            }
        }
        return s;
    }
};

int main(){
    string s = "Let's take LeetCode contest";
    Solution obj;
    string res = obj.reverseWords(s);
    cout<<res<<endl;
    return 0;
}