#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    int findMaxSum(int n, int m, vector<vector<int>> mat) {
        // Ensure the grid has at least 3 rows and 3 columns
        if (n < 3 || m < 3) {
            return -1; // No hourglass is possible
        }

        int maxSum = INT_MIN; // Initialize with the lowest possible integer value

        // Loop through all possible top-left corners of hourglasses
        for (int i = 0; i <= n - 3; ++i) {
            for (int j = 0; j <= m - 3; ++j) {
                // Calculate the hourglass sum
                int currentSum =
                    mat[i][j] + mat[i][j + 1] + mat[i][j + 2] + // Top row of the hourglass
                    mat[i + 1][j + 1] +                         // Middle row of the hourglass
                    mat[i + 2][j] + mat[i + 2][j + 1] + mat[i + 2][j + 2]; // Bottom row

                // Update maxSum if currentSum is greater
                maxSum = max(maxSum, currentSum);
            }
        }

        return maxSum;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, i, j;
        cin >> N >> M;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (i = 0; i < N; i++)
            for (j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        cout << ob.findMaxSum(N, M, Mat) << "\n";
    }
}
