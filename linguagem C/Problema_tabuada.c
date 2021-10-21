#include <stdio.h>

int main()
{
    int valor, i;
    
    printf("digite o valor para a tabuada: ");
    scanf("%d", &valor);
    //leitura do primeiro valor
    
    for (i=0; i<=10; i++) {
        printf("%d X %d = %d\n", valor, i, valor*i);
    }
    //repeticao continua dos resultados da multiplicacao do valor com a ordem dos numeros de 0 ate 10

    return 0;
}