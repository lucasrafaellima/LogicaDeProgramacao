#include <stdio.h>

int main()
{
    int n1, n2, i, soma, troca;
    
    printf("primeiro numero: ");
    scanf("%d", &n1);
    printf("segundo numero: ");
    scanf("%d", &n2);
    
    soma = 0;
    if (n1 > n2) {
        troca = n1;
        n1 = n2;
        n2 = troca;
    }
    
    for (i = n1+1; i < n2; i++) {
        if (i % 2 != 0) {
            soma = soma + i;
        }
    } 
    
    printf("soma dos impares: %d\n", soma);

    return 0;
}