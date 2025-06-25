#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        unordered_map<int, int> mp;
        for(int i =0; i<nums.size(); i++){
            int complement = target - nums[i];
            if(mp.find(complement)!=mp.end()){
                return {mp[complement], i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};
int main(){
    Solution obj;
    vector<int>arr = {2,3,4};
    int target = 6;
    vector<int>res = obj.twoSum(arr, target);
    for(int x : res){
        cout<<x<<" ";
    }
    return 0;
}