#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while (k > 0) {
            int current_index = 0;
            int minimum_element = nums[0];
            for (int i = 1; i < nums.size(); i++) {
                if (nums[i] < minimum_element) {
                    minimum_element = nums[i];
                    current_index = i;
                }
            }
            nums[current_index] *= multiplier;
            k--;
        }
        return nums;
    }
};
int main(){

vector<int>nums={2,1,3,5,6};
int k=5;
int multiplier=2;
Solution obj;
vector<int>result=obj.getFinalState(nums, k, multiplier);
    cout<<"[";
    for(int x: result){
        cout<<x<<" ";
    }
    cout<<"]";
    //[8,4,6,5,6]

    return 0;
}