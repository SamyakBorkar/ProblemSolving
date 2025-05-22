#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    
    //Edge Case:
    if(n<=1) return n;
    //Base Case:
    if(n==0)return 0;
    if(n==1)return 1;

    //Recursive Function
    return fibonacci(n-1)+fibonacci(n-2);


    /*  SECOND SOLUTION
        return (n==0) ? 0 : (n==1 ? 1 : fibonacci(n-1)+ fibonacci(n-2));
    */
}


int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;

    int result = fibonacci(n);
    cout<<result;
    return 0;
}