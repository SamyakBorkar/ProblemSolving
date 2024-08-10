#include<iostream>
using namespace std;

class LongestSubstring{
    public:
    int lengthOfLongestSubstring(string s) {
        int count;
        for(int i=0;i<s.size();i++){
           count=0;
            for(int j=1;j<s.size();j++){
                if(s[i]!=s[j]){
                    count++;

                }
            }
        }
        return count;
    }
};

int main(){
    
    LongestSubstring obj;
    string s1 = "abcabcbb";
    int result= obj.lengthOfLongestSubstring(s1);
    cout<<result<<endl;
}   