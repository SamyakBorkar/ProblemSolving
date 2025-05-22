#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDigits(int num) {
        int count=0, n=num;
        while(n>0){
            int digit = n%10;
            if(num%digit==0) count++;
            n=n/10;
        }
        return count;
    }
};

int main(){
    int n = 7;
    Solution obj;
    int result = obj.countDigits(n);
    cout<<result<<endl;
    return 0;
}