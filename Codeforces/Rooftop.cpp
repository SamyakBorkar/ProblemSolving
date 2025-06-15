#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long w, h, a, b;
        cin >> w >> h >> a >> b;
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        long long col1 = x1 / a, row1 = y1 / b;
        long long col2 = x2 / a, row2 = y2 / b;

        if (col1 != col2 || row1 != row2)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
