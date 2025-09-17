class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int>freq;
        for(int x: nums){
            freq[x]++;
        }

        sort(nums.begin(), nums.end());
        for(int i = n-1; i>=0; i--){
            if(nums[i]>0){
                if(freq.find(-nums[i])!=freq.end()){
                    return nums[i];
                }
            }
        }
        return -1;
    }
};