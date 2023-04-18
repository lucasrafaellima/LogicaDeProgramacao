package Projeto16;

import java.util.Locale;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        
        int num;
        
        System.out.print("digite o valor: ");
        num = sc.nextInt();
        
        if (num > 100 && num < 200) {
            System.out.print("o numero "+num+" esta no intervalo de 100 e 200");
        }else{
            System.out.print("o numero "+num+" nao esta no intervalo de 100 e 200");
        }
        
    }
    
}