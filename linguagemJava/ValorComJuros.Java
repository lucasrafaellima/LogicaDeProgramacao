package Projeto12;

import java.util.Locale;
import java.util.Scanner;

public class Main {

    
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        
        double valor, total, percentual;
        
        System.out.print("digite o valor a depositar: ");
        valor = sc.nextDouble();
        
        percentual = (valor * 0.07)/100;
        total = valor + percentual;
        
        System.out.println("valor com juros: R$"+String.format("%.2f",total));
        
    }
    
}