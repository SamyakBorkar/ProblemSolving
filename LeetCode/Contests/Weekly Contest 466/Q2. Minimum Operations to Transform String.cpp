#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(string s) {
         string trinovalex = s;
        int ans = 0;
        for (char c : trinovalex) {
            int steps = (26 - (c - 'a')) % 26;
            ans =  max(ans, steps);
        }
        return ans;
    }
};

int main() {
    Solution sol;
     string s1 = "cba";
     cout << sol.minOperations(s1) <<  endl;
     string s2 = "yz";
     cout << sol.minOperations(s2) <<  endl;
     string s3 = "az";
     cout << sol.minOperations(s3) <<  endl;
    return 0;
}
