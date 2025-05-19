#include<iostream>
using namespace std;


void Counting(int n){
    if(n==0) return;
    cout<<n<<endl;
    Counting(n-1);

}

int main(){
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    cout<<endl;
    Counting(n);
    return 0;
}