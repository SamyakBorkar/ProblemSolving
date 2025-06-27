#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mid = nums.size()/2;
        return nums[mid];
    }
};

int main(){
    Solution obj;
    vector<int>arr={2,2,1,1,1,2,2};
    int res = obj.majorityElement(arr);
    cout<<res;
    return 0;
}