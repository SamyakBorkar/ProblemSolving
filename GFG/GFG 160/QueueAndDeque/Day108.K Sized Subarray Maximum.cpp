#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        deque<int>dq;
        vector<int>res;
        int n = arr.size();
        for(int i =0; i<n; i++){
            //for checking the window size 
            if(!dq.empty() && dq.front() <= i-k){
                dq.pop_front();
            }

            //maintaining the decreasing order of queue
            while(!dq.empty() && arr[dq.back()]<=arr[i]){
                dq.pop_back();
            }
            dq.push_back(i);
            if(i >= k-1) res.push_back(arr[dq.front()]);
            
        }
        return res;
    }
};
int main(){
    Solution obj;
    vector<int>arr={1,2,3,1,4};
    int k =3;
    vector<int>res = obj.maxOfSubarrays(arr, k);
    for(int x : res){
        cout<<x<<" ";
    }
    return 0;
}