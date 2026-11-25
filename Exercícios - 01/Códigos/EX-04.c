#include <stdio.h>

int main(){
    float num, soma;
    
    soma = 0;

    while (num != 0)
    {
        printf("\nDigite um número (0 - Sair):\n");
        scanf("%f", &num);
        soma += num;
    }
    printf("Acabou! Soma: %.2f", soma);
    
    return 0;
}