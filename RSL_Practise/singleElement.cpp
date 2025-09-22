/*Q1. Given: A non-empty array of integer numbers, every element appears twice except for one.
Goal: Determine the element that appears only once.
(DO NOT use any inbuilt functionalities like Collections or related things from any other languages)
Example 1:
Input: [2,2,1]
Output: 1
Explanation: Each element appears twice except for 1.
Example 2:
Input: [4,1,2,1,2]
Output: 4
Explanation: Each element appears twice except for 4.
*/

#include<bits/stdc++.h>
using namespace std;

int findSingleElement(int arr[], int n){
    int res =0;
    for(int i=0; i<n; i++){
        res ^=arr[i];
    }
    return res;
}

int main(){
    int arr[]={4,1,2,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = findSingleElement(arr, n);
    cout<< result<<endl;
    return 0;
}