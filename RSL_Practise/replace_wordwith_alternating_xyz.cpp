#include<bits/stdc++.h>
using namespace std;

string replace(string ip, string word){
    string ans = "";
    int n = ip.length();
    vector<string>tempV;
    string temp = "";
    for(char c: ip){
        if(c == '.'){
            tempV.push_back(temp);
            temp="";
        }
        else{
            temp+=c;
        }
    }
    if(!temp.empty())tempV.push_back(temp);

    for(int i=0; i<tempV.size(); i++){
        if( i % 2 == 0){
            ans += tempV[i];
        }
        else{
            ans += word;
        }
        if(i != tempV.size() - 1) ans += '.';
    }
    return ans;
}

int main(){
string input = "i.like.this.program.very.much";
string word = "xyz";
string ans =replace(input, word);
cout<<ans;
return 0;
}
