#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n){
    for(int i =0; i<n-1; i++){
        int minI=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minI]){
                minI=j;
            }
        }
        int temp = arr[minI];
        arr[minI] = arr[i];
        arr[i] = temp;
    }
    cout<<(*arr)<<endl;
}

int main(){
    int arr[]={1,34,54,23,657,9,70};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    SelectionSort(arr, size);
    return 0;
}