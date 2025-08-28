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

public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty()) return 0;
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> heights(cols, 0);
        int maxArea = 0;

        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                if(matrix[i][j] == '1')
                    heights[j]++;
                else
                    heights[j] = 0;
            }
            maxArea = max(maxArea, largestRectangleArea(heights));
        }
        return maxArea;
    }
};


int main(){
    Solution obj;
    vector<vector<char>> matrix={
        {"1","0","1","0","0"},
        {"1","0","1","1","1"},
        {"1","1","1","1","1"}
    }
    int res = obj.maximalRectangle();
}