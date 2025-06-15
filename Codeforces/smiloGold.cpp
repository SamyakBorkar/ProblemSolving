#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<string> grid(n);
        for (int i = 0; i < n; ++i)
            cin >> grid[i];

        int maxGold = 0;
        for (int x = 0; x < n; ++x) {
            for (int y = 0; y < m; ++y) {
                if (grid[x][y] != '.') continue;

                int gold = 0;
                int xmin = x - k, xmax = x + k;
                int ymin = y - k, ymax = y + k;

                for (int i = xmin; i <= xmax; ++i) {
                    for (int j = ymin; j <= ymax; ++j) {
                        if (i < 0 || j < 0 || i >= n || j >= m) continue;
                        if (grid[i][j] == 'g') {
                            if (i == xmin || i == xmax || j == ymin || j == ymax)
                                gold++;
                        }
                    }
                }

                maxGold = max(maxGold, gold);
            }
        }
        cout << maxGold << '\n';
    }
    return 0;
}
