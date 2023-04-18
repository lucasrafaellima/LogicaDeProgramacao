package Projeto01;

public class Main {


    public static void main(String[] args) {
     System.out.println("Hello, World!");
     
     
     double variavel, salario1, salario2, total;
     String nome;
     
     nome = "Lucas Lima";
     salario1 = 2500.0;
     salario2 = 3400.4;
     total = salario1 + salario2;
     variavel = 2.5;
     
     System.out.println(variavel);
     System.out.println("meu nome e " + nome);
     System.out.println(String.format("%.2f", total));
    }
    
}