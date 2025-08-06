#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for (int i = 0; i < asteroids.size(); i++) {
            bool destroyed = false;
            while (!st.empty() && st.top() > 0 && asteroids[i] < 0) {
                if (abs(st.top()) < abs(asteroids[i])) {
                    st.pop();
                } else if (abs(st.top()) == abs(asteroids[i])) {
                    st.pop();
                    destroyed = true;
                    break;
                } else {
                    destroyed = true;
                    break;
                }
            }
            if (!destroyed) {
                st.push(asteroids[i]);
            }
        }

        vector<int> res;
        while (!st.empty()) {
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

int main() {
    Solution obj;
    vector<int> arr = {5, 10, -5};
    vector<int> res = obj.asteroidCollision(arr);
    for (int x : res) {
        cout << x << " ";
    }
    return 0;
}
