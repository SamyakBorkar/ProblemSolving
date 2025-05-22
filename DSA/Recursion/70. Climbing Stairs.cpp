#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        //Base CAse 
        if(n<0) return 0;
        if(n==0) return 1;

        return climbStairs(n-1)+ climbStairs(n-2);
    }
};


/*      THE ABOVE SOLUTION GIVES US THE TIME LIMIT EXCEED ERROR TO SOLVE THIS OR TO OPTIMISE THIS WE ARE USING THE DP WITH MEMOIZATION
class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n + 1, -1);
        return helper(n, dp);
    }

    int helper(int n, vector<int>& dp) {
        if (n < 0) return 0;
        if (n == 0) return 1;
        if (dp[n] != -1) return dp[n];
        return dp[n] = helper(n - 1, dp) + helper(n - 2, dp);
    }
};
*/
int main(){
    Solution obj;
    int n;
    cout<<"Enter the Number of Stairs:"<<endl;
    cin>>n;
    int result = obj.climbStairs(n);
    cout<<result<<endl;
    return 0;
}