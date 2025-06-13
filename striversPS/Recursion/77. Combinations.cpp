#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
    void generateCombinations(int n, int k, vector<vector<int>>&res, vector<int>&temp){
        if(k==0){
            res.push_back(temp);
            return;
        }
        if(n==0){
            return;
        }

        temp.push_back(n);
        generateCombinations(n-1, k-1, res, temp);
        temp.pop_back();
        generateCombinations(n-1, k, res, temp);

    }

public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>res;
        vector<int>temp;
        generateCombinations(n, k, res, temp);
        return res;
    }
};

int main(){
    int n=4, k=2;
    Solution obj;
    vector<vector<int>>res = obj.combine(n, k);
    for(const auto& arr:res){
        for(int x : arr){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}