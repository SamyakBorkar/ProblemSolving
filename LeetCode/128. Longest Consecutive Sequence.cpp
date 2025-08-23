#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(), nums.end());
        if(nums.empty()) return 0;
        int longestStreak=0;
        for(int n : s){
            if(s.find(n-1) == s.end()){
                int currentNum = n;
                int streak = 1;
                while(s.find(currentNum+1)!= s.end()){
                    streak++;
                    currentNum++;
                }
            longestStreak = max(longestStreak, streak);
            }
        }
        return longestStreak;
    }
};

int main(){
    Solution obj;
    vector<int>arr={0,3,7,2,5,8,4,6,0,1};
    int result = obj.longestConsecutive(arr);
    cout<<result<<endl;
    return 0;
}