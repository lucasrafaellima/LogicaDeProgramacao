package Projeto10;

import java.util.Locale;
import java.util.Scanner;

public class Main {
    
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        
        int a, b, aux;
        
        System.out.print("digite o valor de a: ");
        a = sc.nextInt();
        System.out.print("digite o valor de b: ");
        b = sc.nextInt();
        
        if (a != b) {
            aux = a;
            a = b;
            b = aux;
        }else{
            System.out.println("as variaveis tem valores iguais");
        }
        System.out.println("a: "+ a);
        System.out.println("b: "+b);
        
    }
    
}