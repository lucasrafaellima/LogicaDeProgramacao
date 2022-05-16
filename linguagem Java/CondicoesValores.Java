package Projeto15;

import java.util.Locale;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        
        int valor1, valor2, maior;
        
        System.out.print("informe o primeiro valor: ");
        valor1 = sc.nextInt();
        System.out.print("informe o segundo valor: ");
        valor2 = sc.nextInt();
        
        if (valor1 > valor2) {
            maior = valor1;
            System.out.print("maior: "+ maior);
        }else{
            if (valor2 > valor1) {
                maior = valor2;
                System.out.print("maior: "+ maior);
            }else{
            System.out.print("ambos sao iguais");
            }
        }
    }
    
}