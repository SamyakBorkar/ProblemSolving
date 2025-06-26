#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char>st;
        for(char c:s){
            if(st.count(c)){
                return c;
            }
            st.insert(c);
        }
        return '\0';
    }
};

int main(){
    Solution obj;
    string s="abccbaacz";
    char res = obj.repeatedCharacter(s);
    cout<<res;
    return 0;
}