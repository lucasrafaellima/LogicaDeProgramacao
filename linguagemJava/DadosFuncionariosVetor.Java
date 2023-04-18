package vatores1;

import java.util.Locale;
import java.util.Scanner;

public class Main {

    
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        
        int i;
        String[] funcionario = new String[10];
        double[] salario = new double[10];
        double salarioMinimo, totalReajuste;
        double[] reajuste = new double[10];
        double[] novoSalario = new double[10];
        
        System.out.print("digite o valor do salario minimo: ");
        salarioMinimo = sc.nextDouble();
        sc.nextLine();
        
        totalReajuste = 0;
        
        for (i = 0; i<10; i++) {
            System.out.println("digite o nome do funcionario["+i+"]: ");
            funcionario[i] = sc.nextLine();
        }
        for (i=0; i < 10; i++) {
            System.out.println("digite o salario do "+funcionario[i]+": ");
            salario[i] = sc.nextDouble();
            if (salario[i] < (salarioMinimo*3)) {
                reajuste[i] = (salario[i]*50)/100;
                novoSalario[i] = reajuste[i] + salario[i];
            } else {
                if (salario[i] >= (salarioMinimo*3) && salario[i] <= (salarioMinimo*10)) {
                    reajuste[i] = (salario[i]*20)/100;
                    novoSalario[i] = reajuste[i] + salario[i];
                } else {
                    if (salario[i] > (salarioMinimo*10) && salario[i] <= (salarioMinimo*20)) {
                        reajuste[i] = (salario[i]*15)/100;
                        novoSalario[i] = reajuste[i] + salario[i];
                    } else {
                        reajuste[i] = (salario[i]*10)/100;
                        novoSalario[i] = reajuste[i] + salario[i];
                    }
                }
            }
        }
        for (i = 0; i < 10; i++) {
            System.out.println("nome["+i+"]: "+funcionario[i]);
            System.out.println("reajuste salarial: R$"+String.format("%.2f", reajuste[i]));
            System.out.println("Novo salario: R$"+String.format("%.2f", novoSalario[i]));
            totalReajuste = totalReajuste + reajuste[i];
        }
        
        System.out.println("aumento da folha de pagamento: R$"+String.format("%.2f", totalReajuste));
    }
    
}