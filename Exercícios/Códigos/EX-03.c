#include <stdio.h>

int main(){
    float mph, kph;

    printf("\nDigite a velocidade em mph:\n");
    scanf("%f", &mph);
    kph = mph * 1.6;
    
    if (kph >= 80 && kph <= 100) {
        printf("MANTENHA");
    }
    else if (kph < 80) {
        printf("ACELERE");
    }
    else {
        printf("DESACELERE");
    }
    return 0;
}