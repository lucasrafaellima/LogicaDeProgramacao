package Projeto13;

import java.util.Locale;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        
        double compra, prestacao;
        
        System.out.print("digite o preco do produto: ");
        compra = sc.nextDouble();
        
        prestacao = compra/5;
        
        System.out.println("valor da prestacao em 5 vezes fica: R$"+ prestacao);
        
    }
    
}