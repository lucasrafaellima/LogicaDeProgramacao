#include <stdio.h>

int main()
{
    double nota1, nota2, soma;
    
    printf("digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("digite a segunda nota: ");
    scanf("%lf", &nota2);
    
    soma = 0;
    soma = nota1 + nota2;
    
    
    printf("nota final: %.1lf\n", soma);
    if (soma < 60) {
        printf("reprovado!");
    }
    else {
        printf("aprovado!");
    }

    return 0;
}