#include <stdio.h>
#include <string.h>

void ler_texto(char *buffer, int length) { 
 fgets(buffer, length, stdin); 
 strtok(buffer, "\n"); 
} 

void limpar_entrada() { 
 char c; 
 while ((c = getchar()) != '\n' && c != EOF) {} 
} 


int main()
{
    char nome[50], nome1[50];
    int idade, idade1;
    
    printf("digite o primeiro nome: ");
    ler_texto(nome, 50);
    printf("idade 1: ");
    scanf("%d", &idade);
    printf("digite o segundo nome: ");
    limpar_entrada();
    ler_texto(nome1, 50);
    printf("idade 2: ");
    scanf("%d", &idade1);
    
    printf("nome 1: %s\n", nome);
    printf("nome 2: %s\n", nome1);
    printf("idade 1: %d\n", idade);
    printf("idade 2: %d\n", idade1);
    
    return 0;
}
