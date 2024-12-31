#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        if (arr.empty()) return 0;

        sort(arr.begin(), arr.end());
        int longest = 1, currentStreak = 1;

        for (size_t i = 1; i < arr.size(); ++i) {
            if (arr[i] == arr[i - 1]) {
                continue;
            } else if (arr[i] == arr[i - 1] + 1) {
                currentStreak++;
            } else {
                longest = max(longest, currentStreak);
                currentStreak = 1;
            }
        }

        return max(longest, currentStreak);
    }
};

int main() {
    vector<int> ip = {53, 57, 77, 15, 78, 58, 17, 63, 90, 73, 68, 82, 40, 68, 22, 52, 81, 92, 80, 37, 62, 17, 76, 67, 55, 56, 20, 22, 37, 71, 65, 7, 30, 93, 1, 1, 90, 46, 36, 74, 0, 37, 76, 69, 39, 97, 39, 30, 14, 89, 74, 71, 27, 79, 51, 45, 51, 54, 90, 35, 68, 38, 7, 82, 55, 65, 14, 40, 2};
    Solution obj;
    cout << obj.longestConsecutive(ip) << endl;
    return 0;
}
