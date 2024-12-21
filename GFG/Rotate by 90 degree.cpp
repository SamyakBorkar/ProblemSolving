#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    void rotateby90(vector<vector<int>>& mat) {
        int n = mat.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(mat[i][j], mat[j][i]);
            }
        }

        for (int j = 0; j < n; j++) {
            int top = 0, bottom = n - 1;
            while (top < bottom) {
                swap(mat[top][j], mat[bottom][j]);
                top++;
                bottom--;
            }
        }
    }
};

int main(){
    Solution obj;
    vector<vector<int>>mat={{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>>res=obj.rotateby90(mat);
    for (const auto& row : res) {      
        for (const auto& elem : row) { 
            std::cout << elem << " ";
        }
        std::cout <<endl; 
    }
}