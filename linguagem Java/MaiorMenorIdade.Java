package Projeto17;

import java.util.Locale;
import java.util.Scanner;

public class Main {

    
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        
        int idade, q;
        
        System.out.print("quantidade de selecionados: ");
        q = sc.nextInt();
        
        for (int i = 0;i < q; i++) {
            System.out.print("digite a idade "+i+": ");
            idade = sc.nextInt();
            if (idade >= 18) {
                System.out.println("maior de idade");
            }else{
                System.out.println("menor de idade");
            }
        }
    }
    
}