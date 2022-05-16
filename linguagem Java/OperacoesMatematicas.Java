package Projeto06;

import java.util.Scanner;
import java.util.Locale;

public class Main {

    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Locale.setDefault(Locale.US);
        
        double num1, num2, soma, sub, multi, div;
        
        System.out.print("Digite o primeiro numero: ");
        num1 = sc.nextDouble();
        System.out.print("Digite o segundo numero: ");
        num2 = sc.nextDouble();
        
        soma = num1 + num2;
        sub = num1 - num2;
        multi = num1 * num2;
        div = num1/num2;
        
        System.out.println("soma: "+soma);
        System.out.println("sub: "+ sub);
        System.out.println("multi: "+ multi);
        System.out.println("div: "+ String.format("%.2f", div));
        

    }
    
}