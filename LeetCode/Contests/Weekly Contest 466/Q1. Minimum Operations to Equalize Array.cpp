#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        bool allSame = true;
        for(int i=0; i<n-1; i++){
            if(nums[i]!=nums[i+1]){
                allSame = false;
                break;
            }
        }
        return allSame ? 0 : 1;
    }
};

int main(){
    Solution obj;
    vector<int>nums={1,2};
    int res = obj.minimumOperations(nums);
    cout<<res;
    return 0;
}