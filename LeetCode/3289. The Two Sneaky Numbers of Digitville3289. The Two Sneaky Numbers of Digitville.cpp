#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>res;
        unordered_map<int, int>freq;
        for(int x: nums){
            freq[x]++;
        }

        for(const auto &p : freq){
            if(p.second == 2) res.push_back(p.first);
        }
        return res;
    }
};

int main(){
    Solution obj;
    vector<int>arr={7,1,5,4,3,4,6,0,9,5,8,2};
    vector<int>res = obj.getSneakyNumbers(arr);
    for(int x: res){
        cout<<x<<" ";
    }
    return 0;
}