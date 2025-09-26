#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        sort(nums.begin(), nums.end());
        for (int k = n - 1; k >= 2; --k) {
            int i = 0, j = k - 1;
            while (i < j) {
                if (nums[i] + nums[j] > nums[k]) {
                    ans += (j - i);
                    --j;
                } else {
                    ++i;
                }
            }
        }
        return ans;
    }
};

int main(){
    Solution obj;
    vector<int>nums={2,2,3,4};
    int res = obj.triangleNumber(nums);
    cout<<res;
    return 0;

}