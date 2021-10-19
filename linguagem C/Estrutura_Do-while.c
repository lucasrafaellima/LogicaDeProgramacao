#include <stdio.h>

void limpar_entrada() { 
 char c; 
 while ((c = getchar()) != '\n' && c != EOF) {} 
} 
//comando para limpar o valor da variavel resp

int main()
{
    double c, f;
    char resp;
    
    do {
        printf("digite a temperatura em graus Celsius: ");
        scanf("%lf", &c);
        f = 9.0 * c / 5.0 + 32.0;
        printf("fahrenheit: %.1lf\n", f);
        printf("deseja continuar[s/n]? ");
        limpar_entrada(); 
        scanf("%c", &resp);
        
    } while (resp == 's');

    return 0;
}