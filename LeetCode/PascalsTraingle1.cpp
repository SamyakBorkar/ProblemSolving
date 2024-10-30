#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for(int i = 0; i < numRows; i++) {
            vector<int> rows(i + 1, 1);
            result.push_back(rows);
        }

        for(int i=2; i<numRows; i++){
            for(int j=1; j< result[i].size()-1; j++){
                result[i][j]=result[i-1][j]+result[i-1][j-1];
            }
        }
        return result;
    }
};

int main() {
    Solution obj;
    vector<vector<int>> ans = obj.generate(5);
    for (const auto& row : ans) {      
        for (const auto& elem : row) { 
            cout << elem << " ";
        }
        cout << endl;                  
    }

    return 0;
}
