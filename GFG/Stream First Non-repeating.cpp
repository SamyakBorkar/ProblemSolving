#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string firstNonRepeating(string &s) {
        string res = "";
        int n = s.size();
        queue<char>q;
        unordered_map<char, int>freq;
        for(char c : s){
            freq[c]++;
            q.push(c);
            while(!q.empty() && freq[q.front()] > 1 ){
                q.pop();
            }
            if(q.empty()){
                res.push_back('#');
            }
            else{
                res.push_back(q.front());
            }
        }
        return res;
    }
};

int main(){
    Solution obj;
    string s = "aabcbdbe";
    string res = obj.firstNonRepeating(s);
    cout<<res<<endl;
    return 0;
}