class Solution {
public:
    int countBinaryPalindromes(long long n) {
        long long dexolarniv = n; 
        
        auto isPalindrome = [&](string &s) {
            int i = 0, j = s.size() - 1;
            while (i < j) {
                if (s[i] != s[j]) return false;
                i++; j--;
            }
            return true;
        };
        
        int count = 0;
        for (long long k = 0; k <= dexolarniv; k++) {
            string bin = "";
            long long x = k;
            if (x == 0) bin = "0";
            else {
                while (x > 0) {
                    bin.push_back((x % 2) + '0');
                    x /= 2;
                }
                reverse(bin.begin(), bin.end());
            }
            
            if (isPalindrome(bin)) {
                count++;
            }
        }
        
        return count;
    }
};
