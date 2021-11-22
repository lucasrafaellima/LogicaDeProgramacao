#include <stdio.h>

int main()
{
    int quantidade, anos, dias, totalfuma, tempo, totaldias;
    
    printf("quantidade de cigarros fumados por dia: ");
    scanf("%d", &quantidade);
    printf("quantos anos fumando? ");
    scanf("%d", &anos);
    
    totalfuma = quantidade * (anos * 365);
    //total de cigarros fumados
    tempo = totalfuma * 10;
    //total fumado, multiplicado por 10 minutos que o fumante perde por cigarro
    totaldias = tempo / 1440;
    
    printf("o fumante perderá %d dias", totaldias);

    return 0;
}