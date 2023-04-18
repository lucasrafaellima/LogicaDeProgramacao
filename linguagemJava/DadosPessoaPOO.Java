package Projeto20;

import java.util.Locale;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        
        Pessoa objeto = new Pessoa();
        
        System.out.print("digite a altura: ");
        objeto.setAltura(sc.nextDouble());
        System.out.print("digite o peso: ");
        objeto.setPeso(sc.nextDouble());
        
        System.out.println("imc: "+String.format("%.2f", objeto.calcularimc()));
    }
    
}