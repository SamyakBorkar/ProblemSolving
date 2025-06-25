#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool doesWordForm(vector<vector<char>>& board, string word, int indx, int i, int j, vector<vector<bool>>& visited) {
        if(indx == word.length()) {
            return true;
        }

        // Check all 4 directions
        if(i - 1 >= 0 && board[i - 1][j] == word[indx] && !visited[i - 1][j]) {
            visited[i - 1][j] = true;
            if(doesWordForm(board, word, indx + 1, i - 1, j, visited)) return true;
            visited[i - 1][j] = false;
        }

        if(j - 1 >= 0 && board[i][j - 1] == word[indx] && !visited[i][j - 1]) {
            visited[i][j - 1] = true;
            if(doesWordForm(board, word, indx + 1, i, j - 1, visited)) return true;
            visited[i][j - 1] = false;
        }

        if(i + 1 < board.size() && board[i + 1][j] == word[indx] && !visited[i + 1][j]) {
            visited[i + 1][j] = true;
            if(doesWordForm(board, word, indx + 1, i + 1, j, visited)) return true;
            visited[i + 1][j] = false;
        }

        if(j + 1 < board[0].size() && board[i][j + 1] == word[indx] && !visited[i][j + 1]) {
            visited[i][j + 1] = true;
            if(doesWordForm(board, word, indx + 1, i, j + 1, visited)) return true;
            visited[i][j + 1] = false;
        }

        return false;
    }

public:
    bool exist(vector<vector<char>>& board, string word) {
        int rows = board.size();
        int cols = board[0].size();
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));
        for(int i = 0; i < board.size(); i++) {
            for(int j = 0; j < board[0].size(); j++) {
                if(board[i][j] == word[0]) {
                    visited[i][j] = true;
                    if(doesWordForm(board, word, 1, i, j, visited)) {  
                        return true;
                    }
                    visited[i][j] = false;
                }
            }  
        } 
        return false;
    }
};

int main() {
    Solution obj;
    vector<vector<char>> board = {
        {'A','B','C','E'},
        {'S','F','C','S'},
        {'A','D','E','E'}
    };
    string word = "ABCCED";
    
    if(obj.exist(board, word)) {
        cout << "The word exists";
    }
    else {
        cout << "The word doesn't exist";
    }
    return 0;
}