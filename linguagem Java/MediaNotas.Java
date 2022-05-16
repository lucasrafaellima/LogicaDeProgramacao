package Projeto09;

import java.util.Locale;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        
        String nome;
        double media, nota, total;
        
        System.out.print("Digite o nome do aluno: ");
        nome = sc.nextLine();
        
        total = 0;
        
        for (int i = 0; i < 3; i++) {
            System.out.print("digite a "+i+" nota: ");
            nota = sc.nextDouble();
            total = total + nota;
            
        }
        media = total/3;
        System.out.println("media: "+ String.format("%.2f", media));
        
    }
    
}