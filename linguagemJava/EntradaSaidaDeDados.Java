package Projeto02;


import java.util.Scanner;

public class Main {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String nome1;
        int idade;
        
        System.out.print("Enter your age: ");
        idade = sc.nextInt();
        System.out.print("Enter your name: ");
        sc.nextLine();
        nome1 = sc.nextLine();
        System.out.println("your name is " + nome1+ " and you are "+ idade+ " years old");
            
        if (idade >= 18) {
            System.out.println("you have enough to join in our company");
            
        }
        else {
            System.out.println("you haven't enough to join in our company");
        }
        
    }
    
}