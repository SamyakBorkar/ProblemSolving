#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        vector<int>res;
        for(int x:nums){
            mp[x]++;
        }
        vector<pair<int, int>>arr;
        for(auto &it: mp){
            arr.push_back({it.second, it.first});
        }
        sort(arr.begin(), arr.end(), greater<pair<int, int>>());
        for(int i=0; i<k; i++){
            res.push_back(arr[i].second);
        }
        return res;
    }
};

int main(){ 
    Solution obj;
    vector<int>arr={1,1,1,2,2,3};
    // vector<int>arr={1,2};

    int k =2;
    vector<int>res = obj.topKFrequent(arr, k);
    for(int x: res){
    cout<<x<<" ";
    }
    return 0;
}