#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        for(int i=0; i<prices.size()-1; i++){
            for(int j=i+1; j<prices.size(); j++){
                if(prices[i]>=prices[j]){
                    prices[i]-=prices[j];
                    break;
                }
            }
        }
        return prices;
    }
};

int main(){
    //[8,4,6,2,3], [1,2,3,4,5], [10,1,1,6]
    Solution obj;
    vector<int>input={10,1,1,6};
    vector<int>res=obj.finalPrices(input);
    for(int x: res){
        cout<<x<<" "<<endl;

    }
    return 0;
}