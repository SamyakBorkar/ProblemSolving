#include <iostream>
#include <cstdio>
#include<string>
using namespace std;

int main() {
    int a ,b;
    cin>>a;
    cin>>b;
    for(int i=a; i<=b;i++){
        if(i>=1&&i<=9){
            
            string arr[]={"one","two","three","four","five","six","seven","eight","nine"};
            
            cout<<arr[i-1]<<endl;
            
            
            
        }
        else if(i>9&&i%2==0)
        {
            cout<<"even"<<endl;
        }
        else if(i>9&&i%2==!0){
            cout<<"odd"<<endl;
        }
        else{
            return 0;
        }
    }
    return 0;
}
