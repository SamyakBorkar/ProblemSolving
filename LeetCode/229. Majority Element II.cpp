#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int k = int(nums.size()/3);
        vector<int>res;
        unordered_map<int, int>mp;
        for(int x : nums){
            mp[x]++;
        }
        for(auto &it: mp){
            if(it.second >k){
                res.push_back(it.first);
            }
        }
        return res;
        
    }
};

int main(){
    Solution obj;
    vector<int>arr={3,2,3};
    vector<int> res = obj.majorityElement(arr);
    for(int x : res){
        cout<<x<<" ";
    }
    return 0;
}