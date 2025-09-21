#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumLength(string s) {
        int left =0; 
        int right= s.size()-1;

        while(left<right && s[left] == s[right]){
            char c = s[left];
            while(left <= right && s[left] == c) left++;
            while(right >=left && s[right] == c) right--;
        }
        int ans = right - left +1;
        return ans ;
    }
};

int main(){
    Solution obj;
    string s = "cabaabac";
    int ans = obj.minimumLength(s);
    cout<<ans<<endl;
    return 0;
}