#include <stdio.h>
#include <string.h>
// inclui a biblioteca string para a variaveis de caractere "nome" receber o texto
int main()
{
    int idade;
    double salario, altura;
    char genero;
    // o caractere da variavel "genero" sem matriz so recebe apenas uma letra
    char nome[50];
    // caractere "nome" tem que ser usado como matriz para receber um texto 
    
    idade = 10;
    salario = 5405.0;
    altura = 1.88;
    genero = 'F';
    strcpy(nome, "Maria Luisa");
    // comando responsavel por atribuir a variavel "nome" ao texto 
    
    printf("idade = %d\n", idade);
    printf("salario = %.2lf\n", salario);
    printf("altura = %.2lf\n", altura);
    printf("genero = %c\n", genero);
    printf("nome = %s\n", nome);

    printf("%s tem %d anos, é do genero %c, seu salario é de %.2lf reais e sua altura é de %.2lf metros", nome, idade, genero, salario, altura);
    // placeholders especificos para cada tipo de variavel    
    return 0;
}