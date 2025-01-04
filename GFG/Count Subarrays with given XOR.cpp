#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        int res=0;
        for(int i=0; i<arr.size(); i++){
            int ans=0;
            for(int j=i; j<arr.size(); j++){
                ans^=arr[j];

                if(ans==k){
                    res++;
                }
            }
        }
    return res;
    }
};

int main(){
    vector<int>res={1,1,1,1};
    int k=0;
    Solution obj;
    cout<<obj.subarrayXor(res, k);
    return 0;
}