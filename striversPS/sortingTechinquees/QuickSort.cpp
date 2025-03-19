#include<bits/stdc++.h>
using namespace std;


int partition(vector<int>&arr, int low, int high){
    int pivot = arr[high];
    int i = low -1;
    for(int j = low; j<=high-1; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}
void QuickSort(vector<int>&arr, int low, int high){
    
    if(low< high){
        int pivot = partition(arr, low, high);
        QuickSort(arr, low, pivot-1);
        QuickSort(arr, pivot+1, high);
    }
}
int main(){
    vector<int>arr={6,3,9,5,2,8,7};
    QuickSort(arr, 0, arr.size()-1);
    for(int i =0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}