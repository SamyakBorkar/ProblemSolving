#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int>count(60, 0);
        int result=0;
        for(int t : time){
            int rem = t % 60;
            int complement = (rem == 0) ? 0 : 60 - rem;
            result+=count[complement];
            count[rem]++;
        }        
        return result;
    }
};

int main(){
    Solution obj;
    vector<int>time={30,20,150,100,40};
    int result = obj.numPairsDivisibleBy60(time);
    cout<<result<<endl;
    return 0;
}