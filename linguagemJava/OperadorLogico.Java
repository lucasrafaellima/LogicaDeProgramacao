package Projeto03;

import java.util.Scanner;

public class Main {


    
    public static void main(String[] args) {
         Scanner sc = new Scanner(System.in);
         
         int valor;
         
         System.out.print("enter the number: ");
         valor = sc.nextInt();
         
         switch (valor) {
             
             case 1:
                 System.out.println("you're right");
                 break;
             case 2:
                 System.out.println("you're wrong");
                 break;
             default:
                 System.out.println("your value is not on System");
                 
         }
    }
    
}