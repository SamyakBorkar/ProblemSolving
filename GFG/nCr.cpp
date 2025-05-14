#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int nCr(int n, int r) {
        if (k > n - k)
        k = n - k;  

    int  res = 1;
    for (int i = 0; i < k; i++) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
          
      }
};

int main(){
    Solution obj;
    cout<<obj.nCr(2, 4);
}