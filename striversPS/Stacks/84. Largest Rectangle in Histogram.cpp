#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    vector<int> nextSmallerElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> res(n);
        stack<int> st;
        for(int i = n-1; i >= 0; i--) {
            while(!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            res[i] = (st.empty()) ? n : st.top();
            st.push(i);
        }
        return res;
    }

    vector<int> prevSmallerElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> res(n);
        stack<int> st;
        for(int i = 0; i < n; i++) {
            while(!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            res[i] = (st.empty()) ? -1 : st.top();
            st.push(i);
        }
        return res;
    }
    
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int> NSE = nextSmallerElement(heights);
        vector<int> PSE = prevSmallerElement(heights);
        int n = heights.size();
        int maxArea = 0;

        for(int i = 0; i < n; i++) {
            int width = NSE[i] - PSE[i] - 1;
            int currentArea = heights[i] * width;
            maxArea = max(maxArea, currentArea);
        }
        return maxArea;
    }
};

int main(){
    Solution obj;
    vector<int>heights={2,1,5,6,2,3};
    int result = obj.largestRectangleArea();
}