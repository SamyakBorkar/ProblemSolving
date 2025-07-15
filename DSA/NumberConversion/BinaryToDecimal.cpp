#include<bits/stdc++.h>
using namespace std;

int convertToDecimal(int num){
    int ans = 0, pow = 1;
    while(num > 0){
        int rem = num %10;
        ans+=rem*pow;
        num/=10;
        pow*=2;
    }
    return ans;
}

int main(){
    int binNum;
    cout << "Enter Number" << endl;
    cin >> binNum;

    int res = convertToDecimal(binNum);
    cout << res;
    return 0;
}