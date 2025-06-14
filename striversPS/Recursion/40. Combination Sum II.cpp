#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
        void generateCombination(vector<int>&candidates, vector<vector<int>>&res, vector<int>&temp, int target, int indx){
            if(indx==candidates.size()){
                if(target==0){
                    res.push_back(temp);
                }
                return;
            }

            if(target >= candidates[indx]){
                temp.push_back(candidates[indx]);
                generateCombination(candidates, res, temp, target-candidates[indx], indx+1);
                temp.pop_back();
            }
            while(indx + 1 < candidates.size() && candidates[indx] == candidates[indx+1]) indx++;
            generateCombination(candidates, res, temp, target, indx+1);
    }

    public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>temp;
        sort(candidates.begin(), candidates.end());
        generateCombination(candidates, res, temp, target, 0);
        return res;
    }
};

int main() {
    Solution obj;
    vector<int> arr = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;
    vector<vector<int>> res = obj.combinationSum2(arr, target);
    for (const auto& comb : res) {
        for (int num : comb) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}