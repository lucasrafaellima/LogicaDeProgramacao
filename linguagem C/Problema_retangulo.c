#include <stdio.h>
#include <math.h>
//incluida a biblioteca math para o uso de raiz quadrada

int main()
{
    double largura, comprimento, area, perimetro, diagonal;
    
    printf("digite a largura: ");
    scanf("%lf", &largura);
    printf("digite o comprimento: ");
    scanf("%lf", &comprimento);
    
    area = largura * comprimento;
    perimetro = (largura * 2) + (comprimento * 2);
    diagonal = sqrt(pow(comprimento, 2.0) + pow(largura, 2.0));
    
    printf("area: %.4lf\n", area);
    printf("perimetro: %.4lf\n", perimetro);
    printf("diagonal: %.4lf\n", diagonal);

    return 0;
}