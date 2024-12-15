#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mergeArray(vector<int>& arr, int low, int right, int mid); 

void MergeSort(vector<int>& arr, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2;
    MergeSort(arr, low, mid);
    MergeSort(arr, mid + 1, high);
    mergeArray(arr, low, high, mid);
}

void mergeArray(vector<int>& arr, int low, int right, int mid) { 
    vector<int> temp;
    int first = low;
    int second = mid + 1;


    while (first <= mid && second <= right) {
        if (arr[first] <= arr[second]) {  
            temp.push_back(arr[first]);
            first++;
        } else {
            temp.push_back(arr[second]);
            second++;
        }
    }

    
    while (first <= mid) {
        temp.push_back(arr[first]);
        first++;
    }

    while (second <= right) {
        temp.push_back(arr[second]);
        second++;
    }

    for (int i = 0; i < temp.size(); i++) {
        arr[low + i] = temp[i];
    }
}

int main() {
    vector<int> ip = {3, 1, 2, 4, 1, 5, 2, 6, 4};
    int low = 0;
    int right = ip.size() - 1;
    MergeSort(ip, low, right);

    for (int i = 0; i < ip.size(); i++) {
        cout << ip[i] << " ";
    }
    cout << endl;

    return 0;
}
