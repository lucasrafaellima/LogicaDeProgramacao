#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, delta, x1, x2;
    
    printf("coeficiente a: ");
    scanf("%lf", &a);
    printf("coeficiente b: ");
    scanf("%lf", &b);
    printf("coeficiente c: ");
    scanf("%lf", &c);
    
    delta = (b*b) - (4*a*c);
    if (a == 0) {
        printf("nao possui raizes reais\n");
    }
    else if (delta < 0) {
        printf("nao possui raizes reais\n");
    }
    else {
        x1 = (-b + sqrt(delta))/(2*a); 
        x2 = (-b - sqrt(delta))/(2*a);
    }
    
    printf("x1: %.4lf\n", x1);
    printf("x2: %.4lf", x2);

    return 0;
}