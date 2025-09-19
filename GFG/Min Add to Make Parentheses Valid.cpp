class Solution {
  public:
    int minParentheses(string& s) {
        stack<int>st;
        int cnt = 0;
        for(char c: s){
            if(c == '('){
                st.push(c);
            }
            else{
                if(!st.empty() && st.top() == '('){
                    st.pop();
                }
                else{
                    cnt++;
                }
            }
        }
        cnt = cnt + st.size();
        return cnt;
    }
};