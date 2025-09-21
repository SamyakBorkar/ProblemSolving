#include<bits/stdc++.h>
using namespace std;

int findEquilibrium(vector<int>&arr){
    int n = arr.size();
    int prefixSum =0;
    int totalSum = accumulate(arr.begin(), arr.end(), 0);
    for(int i=0; i<n; i++){
        int suffixSum = totalSum - arr[i] - prefixSum;
        
        if(prefixSum == suffixSum){
            return arr[i];
        }
        prefixSum +=arr[i];
    }

    return -1;
}


int main(){
    vector<int>arr ={1, 7, 3, 6, 5, 6};
    int res = findEquilibrium(arr);
    cout<<res;
    return 0;
}