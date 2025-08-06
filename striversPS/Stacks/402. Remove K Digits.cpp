class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        string res ="";
        int n = num.size();
        for(char c : num){
            while(!st.empty() && k>0 && st.top()>c){
                st.pop();
                k--;
            }
            st.push(c);
        }
        while(k-- >0 && !st.empty()){
                st.pop();
        }
        while(!st.empty()){
            res+=st.top();st.pop();
        }
        reverse(res.begin(), res.end());
        int index = 0;
        while (index < res.size() && res[index] == '0') {
            index++;
        }
        res = res.substr(index);

        return res.empty() ? "0" : res;
    }
};