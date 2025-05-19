#include<iostream>
using namespace std;

int power(int n){
    //BAse case 
    if(n==0) return 1;

    return 2*power(n-1);
}

int main(){
    int n;
    cout<<"Enter NUmber:"<<endl;
    cin>>n;

    int result = power(n);
    cout<<"The Power of "<<n<<" is "<< result<<endl;
    return 0;
}