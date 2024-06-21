//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

class GFG {
    public static void main(String args[]) throws IOException {

        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));

        Solution ob = new Solution();
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String str = read.readLine().trim();
            String ans = ob.compareFrac(str);
            System.out.println(ans);
        }
    }
}

// } Driver Code Ends


// User function Template for Java

class Solution {

    String compareFrac(String str) {
        String[] fractions = str.split(", ");
        String fraction1 = fractions[0];
        String fraction2 = fractions[1];
        
        String[] parts1 = fraction1.split("/");
        String[] parts2 = fraction2.split("/");
        
        int a = Integer.parseInt(parts1[0]);
        int b = Integer.parseInt(parts1[1]);
        int c = Integer.parseInt(parts2[0]);
        int d = Integer.parseInt(parts2[1]);
        
        double value1 = (double) a / b;
        double value2 = (double) c / d;
        
        if (value1 > value2) {
            return fraction1;
        } else if (value1 < value2) {
            return fraction2;
        } else {
            return "equal";
        }
    }
}
