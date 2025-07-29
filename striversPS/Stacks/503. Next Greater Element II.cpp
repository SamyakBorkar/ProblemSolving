#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int>st;
        vector<int>ans(n, -1);
        for(int i = 2*n-1; i>=0; i--){
            while(!st.empty() && st.top()<=nums[i%n]){
                st.pop();
            }
            if(i<n){
                ans[i] = st.empty()?-1: st.top(); 
            }
            st.push(nums[i%n]);
        }
        return ans;
    }
};
int main(){
    vector<int>num ={1,2,3,4,3}; 
    Solution obj;
    vector<int>res = obj.nextGreaterElements(num);
    for(int x : res){
        cout<<x<<" ";
    }
    return 0;
}