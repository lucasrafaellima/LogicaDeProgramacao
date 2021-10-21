#include <stdio.h>

int main()
{
    int n1, n2, n3;
    
    printf("primeiro valor: ");
    scanf("%d", &n1);
    printf("segundo valor: ");
    scanf("%d", &n2);
    printf("terceiro valor: ");
    scanf("%d", &n3);
    //leitura das variaveis
    
    if (n1 < n2 && n1 < n3) {
        printf("menor: %d", n1);
    }
    else {
        if (n2 < n1 && n2 < n3) {
            printf("menor: %d", n2);
        }
        else {
            printf("menor: %d", n3);
        }
    }
    //condicao para encontrar o menor numero dentre os tres

    return 0;
}