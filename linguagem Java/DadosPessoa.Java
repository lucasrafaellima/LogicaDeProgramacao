package Projeto18;

import java.util.Locale;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        
        int mulher, homem, q;
        String nome;
        char sexo;
        
        homem = 0;
        mulher = 0;
        
        System.out.print("quantidade de individuos: ");
        q = sc.nextInt();
        
        for (int i = 0;i < q; i++) {
            System.out.print("informe o nome do num "+i+": ");
            nome = sc.nextLine();
            sc.nextLine();
            System.out.print("informe o sexo com a inicial: ");
            sexo = sc.next().charAt(0);
            
            if (sexo == 'm') {
                homem = homem + 1;
            }else{
                if (sexo == 'f') {
                    mulher = mulher + 1;
                }
            }
        }
        System.out.println("quantidade de homens: "+homem);
        System.out.println("quantidade de mulheres: "+mulher);
    }
    
}