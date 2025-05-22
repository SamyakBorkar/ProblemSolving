#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
       int count = 0, n=nums.size();
       for(int i=0; i<n-1; i++){
            if(nums[i]>nums[i+1]){
                count++;
            }
       }
       if(nums[n-1]>nums[0]){
        count++;
       } 
       
       return count<=1;
    }
};

int main(){
    Solution obj;
    vector<int>nums={2,1,3,4};
    bool res =obj.check(nums);
    if(res){
        cout<<"The Array is Sorted and Rotated"<<endl;
    }
    else{
        cout<<"The Array is not Sprted and Rotated";
    }
    return 0;
}