#include<bits/stdc++.h>
using namespace std;

void buildBinaryString(vector<string>&res, int n, string s){
    if(s.length()==n){
        res.push_back(s);
        return;
    }
    buildBinaryString(res, n, s+'0');
    buildBinaryString(res, n, s+'1');
}

vector<string>generateAllBinaryStrings(int n){
    vector<string>res;
    buildBinaryString(res, n, "0");
    buildBinaryString(res, n, "1");
    return res;
}

int main(){
    int n;
    cout<<"Enter the Number:"<<endl;
    cin>>n;
    vector<string>res = generateAllBinaryStrings(n);
    for(string x : res){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}