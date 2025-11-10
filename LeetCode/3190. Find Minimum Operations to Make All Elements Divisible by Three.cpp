#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int moves = 0;
        for(int x : nums){
            if(x%3!=0){
                moves += min(x%3, 3-(x%3));
            }
        }
        return moves;
    }
};