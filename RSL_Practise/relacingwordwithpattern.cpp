#include <bits/stdc++.h>
using namespace std;

bool wordPattern(string pattern, string str) {
    vector<string> words;
    string temp = "";
    for(char c : str) {
        if(c == ' ') {
            words.push_back(temp);
            temp = "";
        } else {
            temp += c;
        }
    }
    if(!temp.empty()) words.push_back(temp);

    if(pattern.size() != words.size()) return false;

    unordered_map<char, string> charToWord;
    unordered_map<string, char> wordToChar;

    for(int i = 0; i < pattern.size(); i++) {
        char p = pattern[i];
        string w = words[i];
        if(charToWord.count(p)) {
            if(charToWord[p] != w) return false;
        } else {
            charToWord[p] = w;
        }
        if(wordToChar.count(w)) {
            if(wordToChar[w] != p) return false;
        } else {
            wordToChar[w] = p;
        }
    }
    return true;
}

int main() {
    cout << wordPattern("abba", "dog cat cat dog") << endl;    
    return 0;
}