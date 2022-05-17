package Vetores;

import java.util.Locale; 
import java.util.Scanner; 
public class Main { 
    public static void main(String[] args) { 
        Locale.setDefault(Locale.US); 
        Scanner sc = new Scanner(System.in); 
        int i, j;
        
        System.out.print("digite a quantidade a inserir: ");
        i = sc.nextInt();
        
        double[] valor = new double[i];
        
        for (j = 0; j < i; j++) {
            System.out.print("digite o valor["+(j+1)+"]: ");
            valor[j] = sc.nextDouble();
        } 
        
        System.out.println("valores digitados: ");
        
        for (j = 0; j <i; j++) {
            System.out.println(valor[j]);
        }
        sc.close();
    } 
} 