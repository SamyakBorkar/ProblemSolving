#include<iostream>
#include<vector>
#include<algorithm>
#include<typeinfo>
using namespace std;
class Solution {
public:
    string addStrings(string num1, string num2) {
     /*   long long result=stoll(num1)+stoll(num2);
        string res = to_string(result);
        return res;
        */  
       int m=num1.size()-1;
       int n=num2.size()-1;
       int carry=0;
       string result="";


       while(m>0 || n>0 || carry>0){
           int a= m>0?num1[m]-'0':0;
           int b= n>0?num2[n]='0':0;
        int res=a+b;
           if(res>9){
                int temp=to_string(res);
                carry=temp[0]-'0';
           }
           result+=to_string(a+b+carry);
           m--;
           n--;

       }
       return reverse(result.begin(), result.end());

    }
};


int main(){
    /*Input: num1 = "11", num2 = "123"
    Output: "134"*/
    Solution obj;
    cout<<obj.addStrings("samyak", "borkar");
}