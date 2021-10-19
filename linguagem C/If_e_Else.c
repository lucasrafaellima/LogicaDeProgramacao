#include <stdio.h>

int main()
{
    double nota;
    
    printf("digite sua nota: ");
    scanf("%lf", &nota);
    
    if (nota > 5.0) {
        printf("Parabens, voce passou! \n");
        //condicao "se" caso a condicao da variavel seja verdadeira
    }
    else {
        printf("infelizmente voce nao passou :( \n");
        //condicao "senao" caso a condicao da variavel seja negativa
    }
    
    printf("nota: %.1lf", nota);

    return 0;
}