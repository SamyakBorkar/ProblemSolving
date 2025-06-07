#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int kthSmallest(vector<vector<int>> &matrix, int k) {
        vector<int>flatArray;
        for(int i =0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                flatArray.push_back(matrix[i][j]);
            }
        }
        sort(flatArray.begin(), flatArray.end());
        return flatArray[k-1];
    }
};

int main(){
    Solution obj;
    vector<vector<int>>mat={{16, 28, 60, 64},{22, 41, 63, 91},{27, 50, 87, 93},{36, 78, 87, 94}};
    int k =3;
    int result = obj.kthSmallest(mat, k);
    cout<<"The "<<k <<" Smallest Element is :"<<result<<endl;
    return 0;
}