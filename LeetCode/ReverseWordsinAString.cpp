class Solution {
public:
    string reverseWords(string s) {
        string temp="";
        vector<string>res;
        for(int i=0; i<s.length();i++){
            if(s[i]!=' '){
                temp+=s[i];
            }
            else{
                if(!temp.empty()){
                res.push_back(temp);
                temp="";
                }
            }
        }
        if(!temp.empty()){
            res.push_back(temp);
        }
        temp="";
        for(int j = res.size() - 1; j >= 0; j--) {
        temp += res[j];
        if (j > 0) {
            temp += " ";
        }
    }

        return temp;
    }
};
