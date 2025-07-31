#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int smallest=arr[0]+k;
        int largest = arr[n-1]-k;
        int ans = arr[n-1]-arr[0];
        int maxI=0, minI=0;
        for(int i = 0; i<n-1; i++){
            minI = min(smallest, arr[i+1]-k);
            maxI = max(largest, arr[i]+k);
            
            if(minI < 0) continue ;
        ans = min(ans, maxI - minI);
        }
        return ans;
    }
};
int main(){
    Solution obj;
    int k = 3;
    vector<int>arr = {1,5,8,10};
    int res = obj.getMinDiff(arr, k);
    cout<<res<<endl;
    return 0;
}