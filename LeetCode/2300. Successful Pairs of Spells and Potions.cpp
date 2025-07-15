#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        // int n = spells.size();
        vector<int>res;
        for(int x:spells){
            int cnt=0;
            for(int y: potions){
                if(x*y>=success){
                    cnt++;
                }
            }
            res.push_back(cnt);
        }
        return res;
    }
};

int main(){
    Solution obj;
    vector<int> spells={3,1,2};
    vector<int> potions={8,5,8};
    long long success=16;
    vector<int>res = obj.successfulPairs(spells, potions, success);
    for(int x:res){
        cout<<x<<" ";
    }
    return 0;
}   
