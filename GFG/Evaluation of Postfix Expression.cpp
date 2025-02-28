#include<bits/stdc++.h>
using namespace std ;

class Solution {
    public:
      int evaluate(vector<string>& arr) {
          stack<int>st;
          for(string token: arr){
            if (isdigit(token[0]) || (token.size() > 1 && token[0] == '-')) {
                st.push(stoi(token));
            } 
            else{
                int val1=st.top();st.pop();
                int val2=st.top();st.pop();

                switch(token[0]){
                    case '+': st.push(val2+val1); break;
                    case '-': st.push(val2-val1); break;
                    case '*': st.push(val2*val1); break;
                    case '/': st.push(val2/val1); break;
                }
            }
          }
          return st.top();
      }
  };

  int main(){
    Solution obj;
    //vector<string>arr={"2","3","1","*","+","9","-"};
    vector<string>arr={"-8","3","/"};

    //-8 3 /
    cout<<obj.evaluate(arr);
  }