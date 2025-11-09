class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        unordered_map<char, int>freq;

        for(char ch : s){
            freq[ch] = freq[ch]+1;
        }

        for(char ch: t){
            if(freq.find(ch) == freq.end() || freq[ch] == 0){
                return false;
            }
            freq[ch] = freq[ch] - 1;
        }
        return true;
    }
};