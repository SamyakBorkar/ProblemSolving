#include<bits/stdc++.h>
using namespace std;

int converttoInteger(string n){
    int ans =0 ;
    for (char c : n) {
        ans = ans * 10 + (c - '0');
    }
    return ans;

}

string productofString(string n1, string n2){
    int x = converttoInteger(n1);
    int y = converttoInteger(n2);    
    int product = x*y;
    string res="";
    while(product > 0) {
        char digit = (product % 10) + '0';
        res = digit + res;
        product /= 10;
    }
    
    return res;
}

int main(){
    string num1 = "2";
    string num2 = "3";
    string res = productofString(num1, num2);
    cout<<res<<endl;
    return 0;

}