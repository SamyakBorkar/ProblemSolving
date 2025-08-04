#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextLargerElement(vector<int> arr) {
       vector<int>res;
       stack<int>st;
       int n = arr.size();
       for(int i =n-1; i>=0; i--){
        while(!st.empty() && st.top()<=arr[i]){
            st.pop();
        }
        if(st.empty()){
            res.push_back(-1);
        }
        else{
            res.push_back(st.top());
        }
        st.push(arr[i]);
       }
       reverse(res.begin(), res.end());
       return res;
    }
};

int main(){
    Solution obj;
    vector<int>ip={6, 8, 0, 1, 3};
    vector<int>res = obj.nextLargerElement(ip);
    for(int x: res){
        cout<<x<<" ";
    }
    return 0;
}
