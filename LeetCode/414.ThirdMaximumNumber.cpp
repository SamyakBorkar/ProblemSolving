#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class thirdMaxClass{
    public:
        int thirdMax(vector<int>& nums){
            sort(nums.begin(), nums.end());
            auto newEnd = unique(nums.begin(), nums.end());
            nums.erase(newEnd, nums.end());
            reverse(nums.begin(), nums.end());
            if(nums.size()<3){
                return nums[0];
            }
            return nums[2];
        }
};

int main(){
    //nums = [3,2,1]
    //nums = [1,2]
    //nums = [2,2,3,1]
    vector<int> nums={1,2};
    thirdMaxClass obj;
    cout<<obj.thirdMax(nums);

    return 0;
}