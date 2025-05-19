#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int res = 0, temp = nums[i];
            while (temp > 0) {
                res += temp % 10;
                temp = temp / 10;
            }
            if (res == i) {
                return i;
            }
        }
        return -1;  
    }
};


int main(){
    Solution obj;
    vector<int>arr = {1,10,11};
    cout<<obj.smallestIndex(arr)<<endl;
    return 0;
}