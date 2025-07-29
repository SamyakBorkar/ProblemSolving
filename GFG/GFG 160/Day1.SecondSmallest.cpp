#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int firstLargest=INT_MIN, secondLargest=INT_MIN;
        for(int x : arr){
            if(x>firstLargest){
                secondLargest = firstLargest;
                firstLargest=x;
            }
            else{
                if(x>secondLargest && x!=firstLargest){
                    secondLargest=x;
                }
            }
        }
        return (secondLargest == INT_MIN)? -1 : secondLargest;
    }
};

int main(){
    Solution obj;
    vector<int>arr ={12, 35, 1, 10, 34, 1};
    int result = obj.getSecondLargest(arr);
    cout<<result;
    return 0;
}