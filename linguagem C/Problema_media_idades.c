#include <stdio.h>

int main()
{
    double idade, media, i, soma;
    
    printf("digite a 1ª idade: ");
    scanf("%lf", &idade);
    //leitura da primeira variavel fora do enquanto
    
    i = 0.0;
    soma = 0.0;
    if (idade < 0) {
        printf("impossivel calcular!");
    }
    else {
        while (idade >= 0) {
            soma = soma + idade;
            i = i + 1;
            printf("digite a %.0lfª idade: ", i + 1);
            scanf("%lf", &idade);
        }
        media = soma / i;
        printf("media das idades: %.2lf", media);
        //sistema retorna a media de todas as idades, exceto a negativa
    }
    //caso a primeira variavel seja menor que 0, sera retornado: impossivel calcular
    //caso a variavel seja superiora a 0, a variavel soma vai acumular as idades e pedir novos valores 

    return 0;
}