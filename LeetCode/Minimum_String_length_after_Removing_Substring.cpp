#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    int minLength(string s) {
        vector<char> temp;
        for(int i=0; i<s.size(); i++){
            temp.push_back(s[i]);
            if(temp.size() >= 2 && temp[temp.size()-1] == 'B' && temp[temp.size()-2] == 'A'){
                temp.pop_back();
                temp.pop_back();
            }
            if(temp.size() >= 2 && temp[temp.size()-1] == 'D' && temp[temp.size()-2] == 'C'){
                temp.pop_back();
                temp.pop_back();
            }
        }    
        return temp.size();
    }
};

int main(){
    Solution obj;
    string s1="ACBBD";
    cout<<obj.minLength(s1);
    return 0;
}
