#include <stdio.h>

int main()
{
    int x, y;
    
    printf("digite dois numeros: ");
    scanf("%d", &x);
    scanf("%d", &y);
    //leitura das duas variaveis
    
    while (x != y) {
        if (x > y) {
            printf("decrescente");
            printf("\ndigite dois numeros: ");
            scanf("%d", &x);
            scanf("%d", &y);
    
        }
        else {
            printf("crescente");
            printf("\ndigite dois numeros: ");
            scanf("%d", &x);
            scanf("%d", &y);
    
        }
    }
    //enquanto o x for diferente de y, o programa pedira os valores
    //e escrevera se a ordem é crescente ou decrescente

    return 0;
}