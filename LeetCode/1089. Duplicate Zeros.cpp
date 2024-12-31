class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        vector<int>a;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                a.push_back(0);
                a.push_back(0);
            }
            else{
                a.push_back(arr[i]);
            }
        }
        for(int i=0;i<n;i++){
            arr[i]=a[i];
            }
        }
    
};