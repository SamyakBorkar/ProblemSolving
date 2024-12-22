#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
  public:
    bool isPossible(string &s) {
       bool isPossibletoWin=false;
       int length=s.size();
       int remaining_chance=14-length;
       int wins=0, lose=0;
       for(int i=0; i<length; i++){
        if(s[i]=='W'){
            wins++;
            }
        else{
            lose++;
        }
        if(remaining_chance+wins>=8){
            isPossibletoWin=true;
        }

       } 
       return isPossibletoWin;
    }
};

int main(){
    string s="LLLLLLLLLL";
    Solution obj;
    cout<<obj.isPossible(s);
}