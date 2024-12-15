#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
        //_______________________first Solution ____________________________________________________
        int findMin(vector<int>& arr){
            sort(arr.begin(), arr.end());
            return arr[0];
         }

        //______________________Second Solution ______________________________________________________
        int findMin(vector<int>& arr){
            int min_number=arr[0];
            int current_element=0;;
            for(int i=1; i<arr.size(); i++){
                if(arr[i-1]<arr[i]){
                    current_element=arr[i-1];
                    min_number=min(current_element, min_number);
                }
                else if(arr[i-1]>arr[i]){
                    current_element=arr[i];
                    min_number=min(current_element, min_number);
                }
                
            }
            return min_number;
        }
};


int main(){
    vector<int>arr={4,2,3};
    Solution obj;
    cout<<obj.findMin(arr)<<endl;
    
}
