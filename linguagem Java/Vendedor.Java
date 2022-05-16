package Projeto08;


import java.util.Locale;
import java.util.Scanner;

public class Main {

    
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        
        String nome;
        double salario, totalSalario, vendas;
        
        System.out.print("digite o nome do vendedor: ");
        nome = sc.nextLine();
        System.out.print("salario do vendedor: ");
        salario = sc.nextDouble();
        System.out.print("total de vendas realizadas(em dinheiro): ");
        vendas = sc.nextDouble();
        
        totalSalario = salario + ((vendas*15)/100);
        
        System.out.println("salario fixo: "+ salario);
        System.out.println("nome do vendedor e: "+ nome);
        System.out.println("salario no fim do mes: "+ String.format("%.2f", totalSalario));
        
    }
    
}