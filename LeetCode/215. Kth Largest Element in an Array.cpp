#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), greater<int>());
        return nums[k-1];
    }
};

int main(){
    Solution obj;
    vector<int>arr={3,2,1,5,6,4};
    int k = 2;
    int res = obj.findKthLargest(arr, k);
    return 0;
}