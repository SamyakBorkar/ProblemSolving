#include<bits/stdc++.h>
using namespace std;

//observed the pattern for which on the summation for indices if i have odd then i will move left and for even i will move right also taking note for last col and first row

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size(); 
        int row=0, col=0;
        vector<int>res(m*n);
        for(int i=0; i<m*n; i++){
            res[i] = mat[row][col];

         if ((row + col) % 2 == 0) {
                if (col == n - 1) row++;
                else if (row == 0) col++;
                else { row--; col++; }
            } else {
                if (row == m - 1) col++;
                else if (col == 0) row++;
                else { row++; col--; }
            }
        }
        return res;
    }
};

int main(){
    Solution obj;
    vector<vector<int>>arr={{1,2,3},{4,5,6},{7,8,9}};
    vector<int>res = obj.findDiagonalOrder(arr);
    for(int num : res) cout << num << " ";
    cout << endl;
}