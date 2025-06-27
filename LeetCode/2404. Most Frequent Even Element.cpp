#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int mostFrequentEven(vector<int>& nums) {
        int small;
        unordered_map<int, int>mp;
        for(int x:nums){
            if(x%2==0){
                mp[x]++;
            }
        }
        if(mp.empty()) return -1;
        vector<pair<int, int>>arr;
        for(auto &it: mp){
            arr.push_back({it.second, it.first});
        }
        sort(arr.begin(), arr.end(), greater<pair<int, int>>());
        int maxFreq = arr[0].first;
        small = arr[0].second;
        for (auto &p : arr) {
            if (p.first == maxFreq) {
            small = min(small, p.second);
            } else {
            break;
            }
        }
        return small;
    }
};

int main(){
    Solution obj;
    vector<int>arr={0,1,2,0,0,0,2,4,4,1};
    int result = obj.mostFrequentEven(arr);
    cout<<result;
    return 0;
}