#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string>findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string>res(n);
        vector<pair<int, int>>arr;
        for(int i=0; i<n; i++){
            arr.push_back({score[i], i});
        }
        sort(arr.begin(), arr.end(), greater<pair<int, int>>());
        //10 9 8 4 3 
        for(int i =0; i<n; i++){
            if(i== 0) res[arr[i].second] = "Gold Medal";
            else if(i== 1) res[arr[i].second] = "Silver Medal";
            else if(i==2) res[arr[i].second] = "Bronze Medal";
            else{
                res[arr[i].second] = to_string(i+1);
            }
        }

        return res;
    }
};

int main(){
    Solution obj;
    vector<int>arr={10,3,8,9,4};
    vector<string>ans = obj.findRelativeRanks(arr);
    for(string x: ans){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}