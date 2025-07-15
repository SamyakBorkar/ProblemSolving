#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string word) {
        string vowels="aeiouAEIOU";
        int n = word.length();
        int vowelCount=0, consonentCount=0;
        if(n<3) return false;
        for(char c: word){
            if(isalpha(c)){
                if(vowels.find(c)!=string::npos){
                    vowelCount++;
                }
                else{
                    consonentCount++;
                }
            }
            else if(!isdigit(c)){
                return false;
            }
        }
        return vowelCount>=1 && consonentCount>=1; 
    }
};

int main(){
    Solution obj;
    string word="234Adas";
    if(obj.isValid(word)){
        cout<<"valid Word";
    }
    else{
        cout<<"Invalid word";
    }
    return 0;
}