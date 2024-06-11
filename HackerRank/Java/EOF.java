import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class EOF {

    public static void main(String[] args) {
      File file = new File("example.txt");
      Scanner sc = new Scanner(System.in);
      int i=1;
      while(sc.hasNext()){
          String str = sc.nextLine();
          System.out.printf("%d"+" "+"%s",i,str);
          System.out.println();
          i++;
          
      }
      sc.close();
}
}
