class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int indx=0;
        for(int i = 0 ; i < arr.size(); i++){
            if(arr[i]!=0){
                arr[indx] = arr[i];
                indx++;
            }
        }
        while(indx < arr.size()){
            arr[indx] = 0;
            indx++;
        }
    }
};