import java.io.*;
import java.util.*;

public class lexicographically {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        String A=sc.next();
        String B=sc.next();
        int result = A.length()+B.length();
        System.out.println(result);
        int i= A.compareTo(B);
        if(i<=0){
            System.out.println("No");
        }
        else{
            System.out.println("Yes");
        }
        
        System.out.println(A.substring(0,1).toUpperCase()+A.substring(1)+" "+B.substring(0,1).toUpperCase()+B.substring(1));
        
    }
}




