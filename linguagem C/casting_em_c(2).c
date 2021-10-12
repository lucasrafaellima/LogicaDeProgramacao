#include <stdio.h>

int main()
{
    double a;
    int b;
    
    a = 5.0;
    b = (int) a;
    //variavel dentro de outra, sendo covertido seu tipo flutuante para inteiro
    //pode-se apenas colocar a variavel que seja preciso o tipo int neste caso
    
    printf("%d", b);

    return 0;
}