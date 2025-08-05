#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    vector<int>nextSmallerElement(vector<int>&arr){
        int n =arr.size();
        vector<int>res(n, 0);
        stack<int>st;
        for(int i = n-1; i>=0; i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(st.empty()){ 
                res[i] = n;
            }
            else{
                res[i] = st.top();
            }
            st.push(i);
        }
        return res;
    }

    vector<int>previousSmallerElement(vector<int>&arr){
        int n =arr.size();
        vector<int>res(n, 0);
        stack<int>st;
        for(int i = 0; i<n; i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }
            if(st.empty()){ 
                res[i] = -1;
            }
            else{
                res[i] = st.top();
            }
            st.push(i);
        }
        return res;
    }

public:
    int sumSubarrayMins(vector<int>& arr) {
        vector<int>NSE = nextSmallerElement(arr);
        vector<int>PSE = previousSmallerElement(arr);
        long long sum =0; 
        int mod = (int)1e9+7;
        int n = arr.size();

        for(int i =0; i<n; i++){
            int left = i - PSE[i];
            int right = NSE[i] - i;
            sum = (sum+(1LL*left*right%mod)*arr[i]%mod)%mod;
        }
        return sum;
    }
};

int main(){
    Solution obj;
    vector<int>arr={11,81,94,43,3};
    int result = obj.sumSubarrayMins(arr);
    cout<<result<<endl;
    return 0;
}