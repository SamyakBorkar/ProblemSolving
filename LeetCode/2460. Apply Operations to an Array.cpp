#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> applyOperations(vector<int>& nums) {
            for(int i =1; i<nums.size(); i++){
                if(nums[i-1]==nums[i]){
                    nums[i-1]*=2;
                    nums[i]=0;
                }
            }
            int left = 0;
            for(int right=0; right<nums.size(); right++){
                if (nums[right] != 0) {
                    swap(nums[right], nums[left]);
                    left++;
            }
            
        }
        return nums;
    }
};

int main(){
    Solution obj;
    vector<int>arr={1,2,2,1,1,0};
    vector<int>res = obj.applyOperations(arr);
    for(int x: res){
        cout<<x<<" ";
    }
return 0;
}