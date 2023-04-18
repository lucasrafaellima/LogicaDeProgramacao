package Projeto07;

import java.util.Scanner;
import java.util.Locale;

public class Main {

    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Locale.setDefault(Locale.US);
        float consumo, distancia, combustivel;
                
        System.out.print("qual a distancia percorrida? ");
        distancia = sc.nextFloat();
        System.out.print("litros gastos: ");
        combustivel = sc.nextFloat();
        
        consumo = combustivel/distancia;
        
        System.out.print("o consumo medio e de "+ consumo);
        System.out.print(" litros por kilometro");
        
    }
    
}