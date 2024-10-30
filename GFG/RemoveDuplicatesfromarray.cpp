#include <vector>
#include <iostream>
using namespace std;

class RemoveDuplicateClass{
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        vector<int> res; 
        int n = arr.size();
        
        for (int i = 0; i < n; i++) {
            bool present = checkForElement(arr[i], res);
            if (!present) {
                res.push_back(arr[i]);
            }
        }
        return res;
    }

    bool checkForElement(int element, const vector<int>& res) {
        for (int i = 0; i < res.size(); i++) {
            if (res[i] == element) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {2, 2, 3, 3, 7, 5};
    vector<int> result = sol.removeDuplicate(arr);

    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
