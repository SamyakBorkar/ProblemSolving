#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            for(int i=0; i<matrix.size(); i++){
                for(int j=0; j<matrix[i].size(); j++){
                    if(matrix[i][j]==target){
                        return true;
                    }
                }
            }
            return false;
        }
    };


int main(){
    Solution obj;
    vector<vector<int>>mat={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    bool res = obj.searchMatrix(mat, 3);
    cout<<res;
    return 0;
}