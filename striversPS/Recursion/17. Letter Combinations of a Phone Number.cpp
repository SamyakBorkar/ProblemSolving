#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    void generateLetterCombinations(string digits, vector<string>&res, int indx, string op, string keypad[]){
        if(indx>=digits.size()){
            res.push_back(op);
            return;
        }
        int num = digits[indx] - '0';
        string val = keypad[num];

        for(int i=0; i<val.length(); i++){
            op.push_back(val[i]);
            generateLetterCombinations(digits, res, indx+1, op, keypad);
            op.pop_back();
        }

    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string>res;
        string keypad[] = {
        "",
        "",
        "abc",
        "def",
        "ghi",
        "jkl",
        "mno",
        "pqrs",
        "tuv",
        "wxyz"
    };
        generateLetterCombinations(digits, res, 0, "", keypad);
        return res;
    }
};
int main(){
    Solution obj;
    string digit = "23";
    vector<string>result = obj.letterCombinations(digit);
    for(string x : result){
        cout<<x<<" ";
    }
    return 0;
}