#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void generateSubsets(vector<int>& nums, vector<vector<int>>& res, vector<int>& temp, int index) {
        if (index == nums.size()) {
            res.push_back(temp);
            return;
        }
        // Include current element
        temp.push_back(nums[index]);
        generateSubsets(nums, res, temp, index + 1);
        // Exclude current element
        temp.pop_back();
        while(index<nums.size() && nums[index]==nums[index+1]){
            index++;        
        }
        generateSubsets(nums, res, temp, index + 1);
    }

    vector<vector<int>> subsets(vector<int>& nums) { 
        vector<vector<int>> res;
        vector<int> temp;
        generateSubsets(nums, res, temp, 0);
        return res;
    }
};

int main(){
    Solution obj;
    vector<int> arr = {1, 2, 2};
    vector<vector<int>> res = obj.subsets(arr);
    for (const auto& subset : res) {
        cout << "[";
        for (size_t i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i != subset.size() - 1) cout << ", ";
        }
        cout << "]\n";
    }
    return 0;
}