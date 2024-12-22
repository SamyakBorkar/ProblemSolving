#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
        bool matSearch(vector<vector<int>> &mat, int x) {
        for(int i=0; i<mat.size(); i++){
           int low=0;
           int high=mat[i].size()-1;
           while(low<=high){
            int mid= low+(high-low)/2;
            if(mat[i][mid]==x){
                return true;
              }
            else if(mat[i][mid]<x){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
           }
        }
        return false;
    }
};




int main(){
    vector<vector<int>>ip={{3, 30, 38},{20, 52, 54},{35, 60, 69}};
    int x=69;
    Solution obj;
    cout<<obj.matSearch(ip, x);
}

