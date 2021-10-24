#include <stdio.h>

int main()
{
    int n, j, i, negativos;
    
    printf("digite a ordem da matriz: ");
    scanf("%d", &n);
    
    int vet [n][n];
    negativos = 0;
    //os indices sao duplicados para receber a quantidade de linhas e colunas
    
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            printf("digite o valor[%d,%d]: ", i, j);
            scanf("%d", &vet[i][j]);
            if (vet[i][j] < 0) {
                negativos = negativos + 1;
            }
        }
    }
    //necessita de duas repeticoes do for para receber os valores nas linhas e colunas ex: 3x3
    //condicao if para acumular a quantidade de valores negativos
    
    printf("diagonal principal: \n");
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            if (i == j) {
                printf("%d ", vet[i][j]);
            }
        }
    }
    //mostrar apenas os valores da diagonal principal
    printf("\nquantidade de negativos: %d", negativos);

    return 0;
}