    // intuation is that i can do this with the help of set storing that particular element in that and will find if its current +1 element exist or not if exist i will increment a counter

    // 2 intiation with sorting and checking i am using merge sort code to optimze the time complexity to O(n logn)
#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    for (int j = 0; j < n2; j++) R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int longestConsecutiveSequence(int arr[], int n){
    mergeSort(arr, 0, n - 1);
    int maxCounter = 1;
    int currCounter = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1] + 1) {
            currCounter++;
        } else if (arr[i] != arr[i - 1]) {
            currCounter = 1;
        }
        maxCounter = max(maxCounter, currCounter);
    }
    return maxCounter;
    
}


int main(){
    int arr[]={100, 4, 200, 1, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = longestConsecutiveSequence(arr, n);
    cout<<ans<<endl;
    return 0;
}