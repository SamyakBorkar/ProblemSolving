#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<int> broken(26, 0);
        for(char c : brokenLetters) broken[c - 'a'] = 1;
        int cnt = 0;
        int n = text.size();
        int i = 0;
        while(i < n) {
            bool canType = true;
            // Find the start of the word
            while(i < n && text[i] == ' ') i++;
            int j = i;
            // Find the end of the word
            while(j < n && text[j] != ' ') {
                if(broken[text[j] - 'a']) canType = false;
                j++;
            }
            if(i < n && canType) cnt++;
            i = j + 1;
        }
        return cnt;
    }
};

int main(){
    Solution obj;
    string st = "hello world";
    string bl = "ad";
    int res = obj.canBeTypedWords(st, bl);
    cout<<res<<endl;
    return 0;
}