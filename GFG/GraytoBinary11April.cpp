#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:

    int grayToBinary(int n)
    {
        int res=n;
        while(n>0){
            
            n>>=1;
            res^=n;
        }
        
        return res;
        
    }
};


int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        
        Solution ob;
       
       cout<< ob.grayToBinary(n)<<endl;
    }
}
