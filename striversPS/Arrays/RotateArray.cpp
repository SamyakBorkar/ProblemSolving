#include<bits/stdc++.h>
using namespace std;

vector<int>rotateArray(vector<int>&arr, int pivot){
    pivot=pivot%arr.size(); //ye isiliye agar pivot bada rha to arr ke sixe se to negative value aayegi fir AddressSanitizer heap-buffer-overflow error aayega
    int k = arr.size()-pivot;
    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k, arr.end());
    reverse(arr.begin(), arr.end());
    return arr;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    int k=3;

    vector<int>res = rotateArray(arr, k);
    for(int c : res){
        cout<<c<<" ";
    }
    return 0;
}