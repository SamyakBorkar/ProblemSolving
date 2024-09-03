#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
         vector<int> v;
        for(char c : s){
            if (c == 'I') v.push_back(1);
            else if (c == 'V') v.push_back(5);
            else if (c == 'X') v.push_back(10);
            else if (c == 'L') v.push_back(50);
            else if (c == 'C') v.push_back(100);
            else if (c == 'D') v.push_back(500);
            else v.push_back(1000);
        }

        int sum = 0;
        for(size_t i = 0; i < v.size() - 1; i++){
            if(v[i] >= v[i + 1]) sum += v[i];
            else sum -= v[i];
        }
        sum += v[v.size() - 1];
        return sum;
    }
};

int main() {
    Solution sl;
     string roman = "MCMXCIV"; 
     cout << "The integer value of " << roman << " is " << sl.romanToInt(roman) <<endl;
    return 0;
}
