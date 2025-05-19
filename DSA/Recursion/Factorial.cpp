#include<iostream>
using namespace std;

int factorial(int n){
    //Base Case:
    if(n==0) return 1;

    // int chotaProblem = factorial(n-1)
    // int badiProblem = n*chotaProblem
    //return badiProblem
    return n* factorial(n-1);
}

int main(){
    int n;
    cout<<"Enter Number: "<<endl;
    cin>>n;

    int res = factorial(n);
    cout<<"The Factorial of "<<n<<" is "<<res<<endl;
    return 0;
}