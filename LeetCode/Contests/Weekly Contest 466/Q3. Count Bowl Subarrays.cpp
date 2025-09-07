#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long bowlSubarrays(vector<int>& nums) {
        int n = nums.size();
        long long cnt = 0;
        for(int l = 0; l < n; l++) {
            int curr_max = INT_MIN;
            for(int r = l + 2; r < n; r++) {
                curr_max = max(curr_max, nums[r-1]);
                if(min(nums[l], nums[r]) > curr_max) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};

int main(){
    Solution obj;
    vector<int>nums={2,5,3,1,4};
    long long ans = obj.bowlSubarrays(nums);
    cout<<ans<<endl;
    return 0; 
}