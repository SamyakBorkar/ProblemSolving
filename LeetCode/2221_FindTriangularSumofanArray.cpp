class Solution {
public:
    int triangularSum(vector<int>& nums) {
        while(nums.size()>1){
            vector<int>newNums(nums.size()-1);
            for(int i=0; i<newNums.size(); i++){
                newNums[i]=(nums[i]+nums[i+1])%10;
            }
            nums=newNums;
        }
        return nums[0];
    }
};