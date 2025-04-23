#include<bits/stdc++.h>
using namespace std;

void findDuplicatesinArray(vector<int>arr){
    int n = arr.size();
    unordered_map<int, int>freq;
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }
    cout<<"Duplicates elements are :"<<endl;
    for(auto x : freq){
        if(x.second>1){
            cout<<x.first<<" ";
        }
    }
}

int main(){
    vector<int>arr = {4, 2, 7, 2, 3, 4, 1, 7, 8};
    findDuplicatesinArray(arr);
    return 0;
}