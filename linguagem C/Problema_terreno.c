#include <stdio.h>

int main()
{
    double comprimento, largura, valorq, valorterreno, area;
    
    printf("largura do terreno: ");
    scanf("%lf", &largura);
    printf("comprimento do terreno: ");
    scanf("%lf", &comprimento);
    printf("valor do metro quadrado: ");
    scanf("%lf", &valorq);
    //leitura das variaveis
    
    area = comprimento * largura;
    valorterreno = area * valorq;
    //manipulando variaveis
    
    printf("area do terreno: %.2lf\n", area);
    printf("valor do terreno: %.2lf\n", valorterreno);
    //saida de valores

    return 0;
}