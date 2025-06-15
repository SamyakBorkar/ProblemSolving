#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> result;

    void backtrack(int k, int n, int start, vector<int>& combination) {
        if (k == 0 && n == 0) {
            result.push_back(combination);
            return;
        }
        if (k == 0 || n <= 0) return;

        for (int i = start; i <= 9; ++i) {
            combination.push_back(i);
            backtrack(k - 1, n - i, i + 1, combination);
            combination.pop_back();
        }
    }
 
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> combination;
        backtrack(k, n, 1, combination);
        return result;
    }
};


int main(){
    Solution obj;
    int k = 3, n = 9;
    vector<vector<int>> res = obj.combinationSum3(k, n);
    for(const auto& comb : res){
        for(int num : comb){
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}