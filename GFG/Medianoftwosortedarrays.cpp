//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
public:
    int SumofMiddleElements(vector<int>& arr1, vector<int>& arr2) {
        vector<int> SvVector;

        // Combine the two arrays into one
        SvVector.insert(SvVector.end(), arr1.begin(), arr1.end());
        SvVector.insert(SvVector.end(), arr2.begin(), arr2.end());

        // Sort the combined vector
        sort(SvVector.begin(), SvVector.end());

        int k = SvVector.size();

        // If the size is even, return the sum of the two middle elements
        if (k % 2 == 0) {
            int n1 = k / 2;
            int n2 = k / 2 - 1;
            return (SvVector[n1] + SvVector[n2]);
        }
        // If the size is odd, return the middle element (though unlikely for an even total number of elements)
        else {
            int odd = k / 2;
            return SvVector[odd];
        }
    }
};


//{ Driver Code Starts.
//Back-end complete function template in C++

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        Solution ob;
        int res = ob.SumofMiddleElements(arr, brr);
        cout << res << endl;
    }
}
// } Driver Code Ends