#include <stdio.h>

int main()
{
    int idade;
    double salario, altura;
    char nome[50];
    
    printf("idade: ");
    scanf("%d", &idade);
    printf("salario: ");
    scanf("%lf", &salario);
    printf("altura: ");
    scanf("%lf", & altura);
    printf("nome: ");
    scanf("%s", nome);
    //scanf apenas funciona para ler um texto sem espacos
    //excecao do "&" acompanhado na variavel "nome" devido ao vetor ja ser uma referencia
    printf("idade é de %d anos\n", idade);
    printf("salario é de %.2lf reais\n", salario);
    printf("altura é de %.2lf metros\n", altura);
    printf("nome = %s", nome);
    
    return 0;
}