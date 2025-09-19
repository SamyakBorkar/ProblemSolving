#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int balance = 0 ;
        int deficit = 0 ;
        int start =0;
        int n = gas.size();

        for(int i=0; i<n; i++){
            balance += gas[i] - cost[i];
            if(balance<0){
                start = i+1;
                deficit += balance;
                balance=0;
            }
        }
        return (deficit + balance>=0) ? start : -1;
    }
};

int main(){
    Solution obj;
    vector<int>gas={2,3,4};
    vector<int>cost={3,4,3};
    int res = obj.canCompleteCircuit(gas, cost);
    cout<<res;
    return 0;
}