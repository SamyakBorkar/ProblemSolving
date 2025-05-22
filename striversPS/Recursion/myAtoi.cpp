#include<bits/stdc++.h>
using namespace std;

int myAtoiHelper(const string& ip, int idx, int sign) {
    if (idx == ip.size() || !isdigit(ip[idx]))
        return 0;
    return (ip[idx] - '0') + 10 * myAtoiHelper(ip, idx + 1, sign);
}

int myAtoi(string ip) {
    int idx = 0, n = ip.size();
    while (idx < n && isspace(ip[idx])) idx++;
    int sign = 1;
    if (idx < n && (ip[idx] == '-' || ip[idx] == '+')) {
        if (ip[idx] == '-') sign = -1;
        idx++;
    }
    return sign * myAtoiHelper(ip, idx, sign);
}

int main(){
    string ip;
    cout<<"enter the number string:"<<endl;
    cin>>ip;

    int result = myAtoi(ip);
    cout<<result;
    return 0;
}