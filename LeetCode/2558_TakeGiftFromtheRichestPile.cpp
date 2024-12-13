#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long sum=0;
        while(k>0){
            sort(gifts.begin(), gifts.end(), greater<int>());
            gifts[0]=floor(sqrt(gifts[0]));
            k--;
        }
        for(int i=0; i<gifts.size(); i++){
            sum+=gifts[i];
        }
        // for(int element: gifts){
        //     cout<< element<<endl;
        // }
        return sum;
    }
};

int main(){
    // vector<int> input={25,64,9,4,100};
    vector<int> input={1,1,1,1};
    int k=4;
    Solution obj;
    cout<<obj.pickGifts(input, k)<<endl;
    //obj.pickGifts(input, k);
}