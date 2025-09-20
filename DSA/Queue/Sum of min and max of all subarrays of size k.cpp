#include<bits/stdc++.h>
using namespace std;
//maintain two deque in the ascending and descending order 
//for that particular window the max and min element will bbe the front of both the queues simply do the addition and make sure tot include the last window sum ;

int sumofMin_Max(int arr[], int n, int k){
    int sum =0;
    deque<int>mindq(k);
    deque<int>maxdq(k);

    // processing the first k sized window 
    for(int i=0; i<k; i++){
        while(!mindq.empty() && arr[mindq.back()]>=arr[i]){
            mindq.pop_back();
        }
        while(!maxdq.empty() && arr[maxdq.back()]<=arr[i]){
            maxdq.pop_back();
        }
        mindq.push_back(i);
        maxdq.push_back(i);
    }

    for(int i =k; i<n; i++){
        sum += arr[maxdq.front()] + arr[mindq.front()];

        if(!mindq.empty() &&  mindq.front() <= i - k){
            mindq.pop_front();
        }
        if(!maxdq.empty() &&  maxdq.front() <= i - k){
            maxdq.pop_front();
        }

        while(!mindq.empty() && arr[mindq.back()]>=arr[i]){
            mindq.pop_back();
        }
        while(!maxdq.empty() && arr[maxdq.back()]<=arr[i]){
            maxdq.pop_back();
        }
        mindq.push_back(i);
        maxdq.push_back(i);
    }
    sum +=arr[maxdq.front()] + arr[mindq.front()];
    return sum;

} 

int main(){
    int arr[] = {2, 5, -1, 7, -3, -1, -2} ;
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    int res = sumofMin_Max(arr, n , k);
    // output : 18
    cout<<res<<endl;
    return 0;
}