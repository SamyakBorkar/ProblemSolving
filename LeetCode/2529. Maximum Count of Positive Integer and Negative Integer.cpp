#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos = 0, neg = 0, maxi = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                pos++;
            } else if (nums[i] < 0) {
                neg++;
            }
        }
        maxi = max(maxi, max(pos, neg));
        return maxi;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-2, -1, -1, 1, 2, 3};
    int result = sol.maximumCount(nums);
    cout << "Maximum count of positive or negative numbers: " << result << endl;
    return 0;
}
