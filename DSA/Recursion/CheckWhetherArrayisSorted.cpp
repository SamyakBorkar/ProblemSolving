#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n){
        if(n==0 || n==1){
            return true;
        }

        if(arr[0]>arr[1]) return false;
        else{
            return isSorted(arr + 1, n - 1);
        }
}

int main(){
    int arr[]={1,2,3,98,4,6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    bool result=isSorted(arr, size);
    cout<<result;
    return 0;
}