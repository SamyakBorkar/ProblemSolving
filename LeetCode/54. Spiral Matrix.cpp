#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
    vector<int> spirallyTraverse(vector<vector<int>>&mat){
        vector<int>result;
        int n=mat.size();
        int m=mat[0].size();
        int left=0,top=0;
        int right=m-1,bottom=n-1;
        while(top<=bottom && left<=right){
        for(int i=left; i<=right; i++){
            result.push_back(mat[top][i]);
        }
        top++;
        for(int i=top;i<=bottom; i++){
            result.push_back(mat[i][right]);
        }
        right--;
        
        if(top<=bottom){
            for(int i=right; i>=left; i--){
            result.push_back(mat[bottom][i]);
        }
        bottom--;}
        
        if(left<=right){
            for(int i=bottom; i>=top; i--){
            result.push_back(mat[i][left]);
        }
        left++;
        }}
        return result;
    }
    
};

int main(){
    Solution obj;
    vector<vector<int>>mat={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    vector<int>res=obj.spirallyTraverse(mat);
    for(int x: res){
        cout<<x<<" ";
    }
}