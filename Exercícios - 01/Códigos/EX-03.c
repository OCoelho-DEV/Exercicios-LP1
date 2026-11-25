#include <stdio.h>

int main(){
    float mph, kph, converter, lim_superior, lim_inferior;
    converter = 1.6; // km/milha
    lim_superior = 100;
    lim_inferior = 80;

    printf("\nDigite a velocidade em mph:\n");
    scanf("%f", &mph);
    kph = mph * converter;
    
    if (kph >= lim_inferior && kph <= lim_superior) {
        printf("MANTENHA");
    }
    else if (kph < lim_inferior) {
        printf("ACELERE");
    }
    else {
        printf("DESACELERE");
    }
    return 0;
}