#include <stdio.h>

int main()
{
    int n, i;
    
    printf("quantos numeros voce vai digitar? ");
    scanf("%d", &n);
    //primeiro le-se a quantidade de numeros para colocar a variavel na quantidade de elementos do vetor
    
    int vet[n];
    for (i=0; i<n; i++) {
        printf("digite o vet[%d]: ", i);
        scanf("%d", &vet[i]);
    }
    //sistema rodara a quantidade de numeros que foi digitada armazenando os valores no vetor

    printf("negativos: \n");
    
    for (i=0; i<n; i++) {
        if (vet[i] < 0) {
            printf("%d\n", vet[i]);
        }
    }
    //sistema rodara por todo o vetor, mas mostrara apenas seus valores negativos

    return 0;
}