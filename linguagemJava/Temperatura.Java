package Projeto11;

import java.util.Locale;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        
        double c, f;
        
        System.out.print("digite a temperatura em celsius: ");
        c = sc.nextDouble();
        
        f = ((9 * c) +160) / 5;
        
        System.out.print("Temperatura em Fahrenheit: "+ String.format("%.2f", f));
    }
    
}