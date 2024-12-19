#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
    public:
        int kthMissing(vector<int> &arr, int k) {
            vector<int>result;
            int count=1;
            int n=arr[arr.size()-1];
            while(result.size()<=k){
                if(isPresentinArray(arr, count)){
                    count++;
                }
                else{
                    result.push_back(count);
                    count++;                
                }
            
            }
            return result[k-1];
    }

    bool isPresentinArray(vector<int>&arr, int num){
        bool isPresent= false;
        int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; 
        if (arr[mid] == num) {
            isPresent = true; 
            break;
        } else if (arr[mid] < num) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }
        return isPresent;
    }
};

int main()
{
     vector<int>ip={2, 3, 4, 7, 11};
    //vector<int>ip={1,2,3};

    int k=5;
    Solution obj;
    cout<<obj.kthMissing(ip, k);
    //vector<int>res=obj.dummy(ip, k);
    // for(int x: res){
    //     cout<<x<<" ";
    // }
    return 0;
}