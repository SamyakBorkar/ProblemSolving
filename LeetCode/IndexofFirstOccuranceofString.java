class Solution {
    public int strStr(String haystack, String needle) {
        if (needle.isEmpty()) {
            return 0;
        }
        
        int a = needle.length();
        int b = haystack.length();
        
        for (int i = 0; i <= b - a; i++) {
            if (haystack.substring(i, i + a).equals(needle)) {
                return i;
            }
        }
        
        return -1;
    }
}
