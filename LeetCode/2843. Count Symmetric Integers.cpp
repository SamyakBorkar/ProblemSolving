#include<bits/stdc++.h>
using namespace std ;

class Solution {
    public:
        int countSymmetricIntegers(int low, int high) {
            int cnt = 0 ;
            for(int i=low; i<=high; i++){
                string num = to_string(i);
                int size = num.length();
                if(size%2==0){
                    int mid = size/2;
                    int left_mid=0, right_mid=0;
                    for(int j=0; j<mid; j++){
                        left_mid+=num[j]-'0';
                    }

                    for(int k=mid; k<=size-1; k++){
                        right_mid+=num[k]-'0';
                    }

                    if(left_mid == right_mid){
                        cnt++;
                    }
                }
            }
            return cnt;
        }
};

int main(){
    Solution obj;
    int low = 1;
    int high = 100; 
    cout<< obj.countSymmetricIntegers(low, high)<<endl;
    return 0;
}