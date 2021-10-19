#include <stdio.h>

int main()
{
    int n, i, numero, soma;

    printf("quantidade de numeros: ");
    scanf("%d", &n);
    
    soma = 0;
    for (i=0; i<n; i++) {
        printf("digite o %dº valor: ", i);
        scanf("%d", &numero);
        soma = soma + numero;
    }
    printf("valor da soma: %d", soma);

    return 0;
}