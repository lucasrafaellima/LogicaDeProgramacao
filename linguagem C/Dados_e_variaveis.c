#include <stdio.h>
#include <string.h>
int main()
{
    int idade;
    double salario, altura;
    char genero;
    char nome[50];
    
    idade = 10;
    salario = 5405.0;
    altura = 1.88;
    genero = 'F';
    strcpy(nome, "Maria Luisa");
    
    printf("idade = %d\n", idade);
    printf("salario = %.2lf\n", salario);
    printf("altura = %.2lf\n", altura);
    printf("genero = %c\n", genero);
    printf("nome = %s\n", nome);
    
    return 0;
}