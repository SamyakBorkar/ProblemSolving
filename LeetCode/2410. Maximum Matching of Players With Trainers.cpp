#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        int n = players.size();
        int m = trainers.size();
        int i=0,j=0,cnt=0;
        while(i<n && j<m){
            if(players[i]<=trainers[j]){
                cnt++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return cnt;
    }
};

int main(){
    Solution obj;
    vector<int>player={1,1000000000};
    vector<int>trainers={1000000000,1};
    int res = obj.matchPlayersAndTrainers(player, trainers);
    cout<<res<<endl;
    return 0;
}