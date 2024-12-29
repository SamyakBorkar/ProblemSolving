#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
  public:
    int nthTerm(int n) {
        int ans=0;
        ans = recursive_function(n);
        return ans ;
    }
    
    int recursive_function(int num){
        if(num==1 || num==2) return 1;
        else if(num<1){
            return -1;
        }
        else{
            return num*recursive_function(num-1)-(num-1)*recursive_function(num-2)+(num-2)*3;
        }
    }
};

int main()
{   
    int n=3;
    Solution obj;
    cout<<obj.nthTerm(n);
    return 0;
}
