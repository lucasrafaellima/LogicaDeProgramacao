#include <stdio.h>

int main()
{
    int n, i;
    double media, soma;
    
    printf("quantidade de numeros a serem digitados: ");
    scanf("%d", &n);
    
    soma = 0;
    double vet[n];
    for (i=0; i<n; i++) {
        printf("digite o vet[%d]: ", i);
        scanf("%lf", &vet[i]);
        soma = soma + vet[i];
    }
    //estrutura de repetição para armazenar os elementos do vetor e soma-los

    printf("valores: ");
    
    for (i=0; i<n; i++){
        printf("%.1lf ", vet[i]);
    }
    //mesma estrutura de repetição para retornar os elementos do vetor
    
    printf("\nsoma: %.1lf\n", soma);
    media = soma / n; 
    printf("media: %.1lf", media);
    //retorno dos valor da soma e da media

    return 0;
}