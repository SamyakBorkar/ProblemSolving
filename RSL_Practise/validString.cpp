#include <bits/stdc++.h>
using namespace std;

bool checkValidString(string str) {
    int low = 0, high = 0;
    for (char ch : str) {
        if (ch == '(') {
            low++;
            high++;
        } else if (ch == ')') {
            low--;
            high--;
        } else if (ch == '*') {
            low--;
            high++;
        }
        if (high < 0) return false;
        if (low < 0) low = 0;
    }
    return low == 0;
}

int main() {
    cout << checkValidString("(*))") << endl;
    return 0;
}
