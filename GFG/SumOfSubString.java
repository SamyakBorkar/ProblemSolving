import java.util.Scanner;

class GFG {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while (t-- > 0) {
            String s = sc.nextLine();
            Solution ob = new Solution();
            System.out.println(ob.sumSubstrings(s));
        }
    }
}

class Solution {
    public long sumSubstrings(String s) {
        long result = 0;
        long prev = 0;
        long mod = 1000000007;

        for (int i = 0; i < s.length(); i++) {
            prev = (prev * 10 + (i + 1) * (s.charAt(i) - '0')) % mod;
            result = (result + prev) % mod;
        }

        return result;
    }
}

