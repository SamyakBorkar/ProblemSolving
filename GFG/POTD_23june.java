import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out = new PrintWriter(System.out);
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String S = read.readLine();
            Solution ob = new Solution();
            ArrayList<Integer> result = ob.bracketNumbers(S);
            for (int value : result) out.print(value + " ");
            out.println();
        }
        out.close();
    }
}
class Solution {
    ArrayList<Integer> bracketNumbers(String str) {
        Stack<Integer> stack = new Stack<>();
        int counter = 1;
        ArrayList<Integer> result = new ArrayList<>();

        for (char ch : str.toCharArray()) {
            if (ch == '(') {
                stack.push(counter);
                result.add(counter);
                counter++;
            } else if (ch == ')') {
                result.add(stack.pop());
            }
        }

        return result;
    }
}
