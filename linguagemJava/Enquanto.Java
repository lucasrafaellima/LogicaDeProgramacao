package Projeto14;

import java.util.Locale;
import java.util.Scanner;

public class Main {

    
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        
        int num;
        
        System.out.print("informe o numero: ");
        num = sc.nextInt();
        
        if (num > 10) {
            System.out.println("numero maior que 10");
        }else{
            System.out.print(num +" < 10");
        }
        
    }
    
}