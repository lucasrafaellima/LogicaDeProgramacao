#include <stdio.h>

int main()
{
    double b1, b2, h, area;
    
    b1 = 6;
    b2 = 8;
    h = 5;
    //atribui os valores das variaveis
    area = ((b1 + b2) * h) / 2;
    //area do trapezio como resultado da equacao envolvendo as demais variaveis
    printf("area do trapezio: %.2lf", area);

    return 0;
}
