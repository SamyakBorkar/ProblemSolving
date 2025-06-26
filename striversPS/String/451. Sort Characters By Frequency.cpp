#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>mp;
        for(char x : s){
            mp[x]++;
        }
        int len = s.length();
        vector<pair<char, int>>arr(mp.begin(), mp.end());
        sort(arr.begin(), arr.end(), [](pair<char,int>&a, pair<char,int>&b){
            return a.second > b.second;
        });

        string res="";
        for(auto& c:arr){
            res+=string(c.second, c.first);
        }
        return res;
    }
};

int main(){
    Solution obj;
    string s = "Aabb";
    string result = obj.frequencySort(s);
    cout<<result<<endl;
    return 0;
}