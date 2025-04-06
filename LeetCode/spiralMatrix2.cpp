#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<vector<int>> generateMatrix(int n) {
            int left=0, top=0;
            int right=n-1, bottom=n-1;
            int cnt=1;

            vector<vector<int>>arr(n, vector<int>(n,0));
            while(top<=bottom && left<=right){
                for(int i=left; i<=right; i++){
                    arr[top][i]=cnt;
                    cnt++;
                }  
                top++;
                for(int i=top; i<=bottom; i++){
                    arr[i][right]=cnt;
                    cnt++;
                }     
                right--;
                if (top <= bottom) { 
                    for (int i = right; i >= left; i--) {
                        arr[bottom][i] = cnt++;
                    }
                    bottom--;
                }
    
                if (left <= right) { 
                    for (int i = bottom; i >= top; i--) {
                        arr[i][left] = cnt++;
                    }
                    left++;
                }
            }
            return arr;
        }
};

int main() {
    int n;
    cout << "Enter the size of matrix: ";
    cin >> n;

    Solution obj;
    vector<vector<int>> result = obj.generateMatrix(n);

    cout << "Generated Spiral Matrix:\n";
    for (const auto &row : result) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << "\n";
    }
}