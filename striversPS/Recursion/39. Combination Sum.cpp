#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
    void generateCombinationSum(vector<int>&candidates, int target, vector<vector<int>>&res, vector<int>&temp, int index){
        if(index==candidates.size()){
            if(target==0){
                res.push_back(temp);
            }
                return;
        }

        if(candidates[index]<=target){
            temp.push_back(candidates[index]);
            generateCombinationSum(candidates, target-candidates[index], res, temp, index);
            temp.pop_back();
        }
        generateCombinationSum(candidates, target, res, temp, index+1);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        vector<vector<int>>res;
        generateCombinationSum(candidates, target, res, temp, 0);
        return res;
    }
};

int main(){
    Solution obj;
    vector<int> arr = {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> res = obj.combinationSum(arr, target);
    for(const auto& comb : res){
        for(int num : comb){
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}