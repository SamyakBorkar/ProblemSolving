#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<bool>isPresent(n+1, false);
        for(int x : nums){
            isPresent[x] = true;
        }
        vector<int>res;
        for(int i=1; i<=n; i++){
            if(!isPresent[i])
                res.push_back(i);
        }
        return res;
    }
};

int main(){
    Solution obj;
    vector<int>nums={4,3,2,7,8,2,3,1};
    vector<int>res = obj.findDisappearedNumbers(nums);
    for(int x : res){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}