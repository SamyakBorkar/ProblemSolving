#include<bits/stdc++.h>
using namespace std;

int myAtoi(string ip){
    int i =0, n=ip.size();

    while(i<n && ip[i]==' '){
        i++;
    }

    int signNumber=1;
    if(i<n&& (ip[i]=='+' || ip[i]=='-')){
        signNumber=(ip[i]=='-')? -1: 1;
        i++;
    }
    long result = 0 ;
    while(i<n && isdigit(ip[i])){
        int digit = ip[i] - '0';
        result =result*10 + digit;
        if (sign * result > INT_MAX) return INT_MAX;
        if (sign * result < INT_MIN) return INT_MIN;
        i++;
    }
    return result*signNumber;
}

int main(){
    string ip; //" -42"
    cout<<"Enter the number String:"<<endl;
    cin>>ip;

    int result = myAtoi(ip);
    cout<<result<<endl;
    return 0;
}