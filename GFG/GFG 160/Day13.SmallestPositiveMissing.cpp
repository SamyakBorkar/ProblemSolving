#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        int n =arr.size();
        for(int i=0; i<n; i++){
            while(arr[i]>=1 && arr[i]<=n && arr[i]!=arr[arr[i]-1]){
                swap(arr[i], arr[arr[i]-1]);
            }
        }
        for(int i = 0; i < n; i++) {
            if(arr[i] != i + 1) return i + 1;
        }
        return n+1;
    }
};

int main(){
    vector<int>arr={2, -3, 4, 1, 1, 7};
    Solution obj;
    int res = obj.missingNumber(arr);
    cout<<res;
}