#include <iostream>
using namespace std;

long long maxPortions(long long &k, long long required, long long drop) {
    if (k < required) return 0;
    long long count = (k - required) / drop + 1;
    k -= count * drop;
    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;

        long long total = 0;

        if (y < x) {
            total += maxPortions(k, b, y);
            total += maxPortions(k, a, x);
        } else {
            total += maxPortions(k, a, x);
            total += maxPortions(k, b, y);
        }

        cout << total << '\n';
    }

    return 0;
}
    