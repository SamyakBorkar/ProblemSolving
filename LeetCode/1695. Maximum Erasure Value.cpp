#include<bits/stdc++.h>
using namespace std;
    class Solution {
    public:
        int maximumUniqueSubarray(vector<int>& nums) {
            long long maxSum = INT_MIN;
            long long currentSum=0;
            int left=0 ,right=0;
            int n = nums.size();
            unordered_map<int, bool>freq;
            while(right<n){
                if(freq.count(nums[right])){
                    freq.erase(nums[left]);
                    currentSum-=nums[left];
                }
                else{
                    currentSum+=nums[right];
                    freq[nums[right]]= true;
                    right++;
                    maxSum = max(maxSum, currentSum);
                }
            }
            return maxSum;
        }
    };
int main(){
    Solution obj;
    vector<int>nums={5,2,1,2,5,2,1,2,5};
    int res = obj.maximumUniqueSubarray(nums);
    cout<<res;
    return 0;
}