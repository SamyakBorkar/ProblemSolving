#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        bool ispalindrome= false;
        int n=x;
        long rev=0;
        while(n!=0){
            int d=n%10;
            rev=rev*10+d;
            n=n/10;

        }
        if(rev==x){
            ispalindrome =true;
             
        }
        return ispalindrome;
    }
};

int main(){
    Solution obj;
    int num=-121;
    bool result=obj.isPalindrome(num);
    cout<<result<<endl;
}