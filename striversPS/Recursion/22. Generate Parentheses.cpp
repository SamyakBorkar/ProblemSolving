#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void generateBalancedParenthesis(vector<string>&res, int n, int opening_brace_count, int closing_brace_count, string s){
        if(opening_brace_count==n && closing_brace_count==n){
            res.push_back(s);
            return;
        }
        if(closing_brace_count<opening_brace_count){
            generateBalancedParenthesis(res, n, opening_brace_count, closing_brace_count+1, s+')');
        }
        if(opening_brace_count<n){
            generateBalancedParenthesis(res, n, opening_brace_count+1, closing_brace_count, s+'(');
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string>res;
        int opening_brace_count=0;
        int closing_brace_count=0;
        generateBalancedParenthesis(res, n, opening_brace_count, closing_brace_count, "");
        return res;
    }
};

int main(){
    Solution obj;
    int n = 3;
    vector<string>res=obj.generateParenthesis(n);
    for(string x : res){
        cout<<x<<" ";
    }
    return 0;
}