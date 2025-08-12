#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int left =0, right=n-1;
        while(left<right){
            int mid = (left + right)/2;
            if(mid%2==1) mid--;
            if(nums[mid] == nums[mid+1]){
                left=mid+2;
            }
            else{
                right=mid;
            }
        }
        return nums[left];
    }
};

int main(){
    Solution obj;
    vector<int>arr={3,3,7,7,10,11,11};
    int result = obj.singleNonDuplicate(arr);
    cout<<result;
    return 0;
// using the binary search TC:
}