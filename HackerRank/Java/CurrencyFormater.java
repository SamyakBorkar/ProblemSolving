import java.util.*;
import java.text.*;

public class Solution {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double payment = scanner.nextDouble();
        scanner.close();
        
        NumberFormat usformat = NumberFormat.getCurrencyInstance(Locale.US);
        String us = usformat.format(payment);
        
        NumberFormat Indiaformat = NumberFormat.getCurrencyInstance(new Locale("en", "IN"));
        String india = Indiaformat.format(payment);
        
        NumberFormat Chinaformat = NumberFormat.getCurrencyInstance(Locale.CHINA);
        String china = Chinaformat.format(payment);
        
        NumberFormat Franceformat = NumberFormat.getCurrencyInstance(Locale.FRANCE);
        String france = Franceformat.format(payment);
        
        
        System.out.println("US: " + us);
        System.out.println("India: " + india);
        System.out.println("China: " + china);
        System.out.println("France: " + france);
    }
}

