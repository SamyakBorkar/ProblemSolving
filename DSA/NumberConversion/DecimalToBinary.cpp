#include<bits/stdc++.h>
using namespace std;

int convertToBinary(int num){
    int ans = 0, pow = 1;
    while(num > 0){
        int rem = num % 2;
        num = num / 2;
        ans += rem * pow;
        pow *= 10;
    }
    return ans;
}

int main(){
    int decNum;
    cout << "Enter Number" << endl;
    cin >> decNum;

    int res = convertToBinary(decNum);
    cout << res;
    return 0;
}