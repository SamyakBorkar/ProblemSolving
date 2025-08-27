#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    string traverseMatrix(vector<vector<char>>& ds, int row, int col) {
    string res;
    for (int i = 0; i < col; i++) {   
        int m = 0, n = i;
        while (m < row && n < col) {  
            res.push_back(ds[m][n]);
            m++; n++;
        }
    }
    while (!res.empty() && res.back() == ' ') {
            res.pop_back();
    }
    return res;
}

    string solve(int rows, int col, string encodedText){
        vector<vector<char>>ds(rows, vector<char>(col));
        int indx=0;
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < col; j++) {
                ds[i][j] = encodedText[indx++];
            }
        }
        string ans = traverseMatrix(ds, rows, col);
        return ans;
    }

public:
    string decodeCiphertext(string encodedText, int rows) {
        int col = (encodedText.length()/rows);
        string result = solve(rows, col, encodedText);
        return result;
    }
};

int main(){
    Solution obj;
    string encodedText = "ch   ie   pr";
    int rows = 3;
    string res = obj.decodeCiphertext(encodedText, rows);
    cout<<res;
    return 0;
}