#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        deque<int>dq;
        vector<int>res;
        int n = arr.size();
        for(int i=0 ;i<k; i++){
            if(arr[i]<0){
                dq.push_back(i);
            }
        }
        if(dq.size()>0){
            res.push_back(arr[dq.front()]);
        }
        else{
            res.push_back(0);
        }

        for(int i = k; i<n; i++){
            if(!dq.empty() &&  i - dq.front()>=k){
                dq.pop_front();
            }
            if(arr[i]<0) dq.push_back(i);

            if(!dq.empty()){
                res.push_back(arr[dq.front()]);
            }
            else{
                res.push_back(0);
            }
        }
        return res;
    }
};
int main(){
    Solution obj;
    vector<int>arr = {-8, 2, 3, -6, 10};
    int k =2;
    vector<int>res = obj.firstNegInt(arr, k);
    for(int x : res){
        cout<<x<<" ";
    }
    return 0;
}