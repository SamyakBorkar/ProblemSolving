#include<bits/stdc++.h>
using namespace std;


void sayDigit(int n){
    string num_mapper[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
        if(n==0) return;
        int digit = n%10;
        n=n/10;
        sayDigit(n);
        cout<<num_mapper[digit]<<" ";
    
}

int main(){
   int number;
    cout<<"Enter the number:"<<endl;
    cin>>number;

    sayDigit(number);
    return 0;
}