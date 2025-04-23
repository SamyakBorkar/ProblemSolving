#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void reverseWords(string s) {
            vector<string> ans;
            string temp = "";
            for(int i=0; i<s.length(); i++){
                if(s[i]==' '){
                    if(temp.length()!=0){
                        ans.push_back(temp);
                        temp="";
                    }
                }
                else{
                    temp+=s[i];
                }
            }
            if(!temp.empty()){
                ans.push_back(temp);
            }
            temp="";
            for(auto x : ans){
                cout<<x<<" "<<endl;
            }
        }
    };

int main(){
    Solution obj;
    string s = "the sky is blue";
    //string res = obj.reverseWords(s);
    obj.reverseWords(s);
    // cout<<res<<endl;
    return 0;
}