#include <stdio.h>
#include <string.h>

void limpar_entrada() { 
 char c; 
 while ((c = getchar()) != '\n' && c != EOF) {} 
} 


void ler_texto(char *buffer, int length) { 
 fgets(buffer, length, stdin); 
 strtok(buffer, "\n"); 
} 

int main()
{
    int idade1, idade2, soma;
    char nome1[50], nome2[50];
    
    printf("primeiro nome: ");
    ler_texto(nome1, 50);
    printf("idade: ");
    scanf("%d", &idade1);
    printf("segundo nome: ");
    limpar_entrada();
    ler_texto(nome2, 50);
    printf("idade: ");
    scanf("%d", &idade2);
    
    soma = 0;
    soma = idade1 + idade2;
    
    printf("a soma das idades de %s e %s é: %d anos", nome1, nome2, soma);

    return 0;
}