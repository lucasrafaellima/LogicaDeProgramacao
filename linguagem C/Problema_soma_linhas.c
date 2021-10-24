#include <stdio.h>

int main()
{
    int l, j, i, c;
    
    printf("digite a linha: ");
    scanf("%d", &l);
    printf("digite a coluna: ");
    scanf("%d", &c);
    
    int vet[l][c];
    
    for (i=0;i<l;i++) {
        printf("digite os valores da %dª linha: \n", i);
        for (j=0;j<c;j++) {
            scanf("%d", &vet[i][j]);
        }
    }

    printf("vetor gerado: ");
    
    int mat[l];
    for (i=0;i<l;i++) {
        mat[i] = 0;
        for (j=0;j<c;j++) {
            mat[i] = mat[i] + vet[i][j];
        }
    }
    
    for (i=0;i<l;i++) {
        printf("%d\n", mat[i]);
    }
    
    return 0;
}
