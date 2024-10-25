#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int minAddToMakeValid(string s) {
        int opening_bracket=0;
        int closing_bracket=0;
        for(int i=0; i<s.size(); i++){
        if(s[i]=='('){
            opening_bracket++;
        }
        else if(s[i]==')'){
            if(opening_bracket>0){
                opening_bracket--;
                }
            else{
                closing_bracket++;
            }
            }
        
        }
        return opening_bracket+closing_bracket;
        
        
    }
};


int main(){
    string s= "()))((";
    Solution obj;
    cout<<obj.minAddToMakeValid(s);
}
