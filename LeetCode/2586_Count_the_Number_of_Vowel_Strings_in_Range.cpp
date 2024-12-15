#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool isVowelString(string s){
        bool is_vowel= false;
        if(s.size()==1 && (s[0]=='a' || s[0]=='e' || s[0]=='i' || s[0]=='o' || s[0]=='u')){
            is_vowel=true;
            }
        else{
            if((s[0]=='a' || s[0]=='e' || s[0]=='i' || s[0]=='o' || s[0]=='u') && (s[s.size()-1]=='a' || s[s.size()-1]=='e' || s[s.size()-1]=='i' || s[s.size()-1]=='o' || s[s.size()-1]=='u')){
                    is_vowel=true;
                }
            }
            return is_vowel;
        }
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        for(int i=left; i<=right; i++){
            if(isVowelString(words[i])){
                count++;
            }
        }
        return count;
    }
};


int main()
{
    Solution obj;
    vector<string>arr={"are","amy","u"};
    cout<<obj.vowelStrings(arr, 0, 2)<<endl;
}