#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }

    int original = x;
    long long result = 0;
    while (x > 0) {
        int r = x % 10;
        result = (result * 10) + r;
        x = x / 10;
    }

    return result == original;
}