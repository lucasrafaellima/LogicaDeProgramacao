package Projeto19;

import java.util.Locale;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        
        double valor, desconto;
        int ano, q;
        char continuar;
        
        q = 0;
        
        System.out.print("digite o valor do carro: ");
        valor = sc.nextDouble();
        System.out.print("ano do carro: ");
        ano = sc.nextInt();
        if (ano <= 2000) {
            desconto = valor - ((valor * 12)/100);
            System.out.println("preco com o desconto: "+ desconto);
            q = q + 1;
            }else{
                desconto = valor - ((valor * 6)/100);
                System.out.println("preco com o desconto: "+ desconto);
            }
        System.out.print("deseja coninuar? ");
        continuar = sc.next().charAt(0);
        
        while (continuar != 'n') {
            System.out.print("digite o valor do carro: ");
            valor = sc.nextDouble();
            System.out.print("ano do carro: ");
            ano = sc.nextInt();
            if (ano <= 2000) {
            desconto = valor - ((valor * 12)/100);
            System.out.println("preco com o desconto: "+ desconto);
            q = q + 1;
            }else{
                desconto = valor - ((valor * 6)/100);
                System.out.println("preco com o desconto: "+ desconto);
            }
            System.out.print("deseja coninuar? ");
            continuar = sc.next().charAt(0);
        }
        System.out.println("carros ate 2000: "+q);
    }
    
}