#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool hasZero(int x){
        while(x){
            if(x%10==0) return true;
            x/=10;
        }
        return false;
    }

public:
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1; i<n; i++){
            if(!hasZero(i) && !hasZero(n-i)){
                return{i, n-i};
            }
        }
        return {};
    }
};

int main(){
    Solution obj;
    int k = 11;
    vector<int>res = obj.getNoZeroIntegers(k);
    for(int x: res){
        cout<<x<<" ";
    }
    return 0;
}