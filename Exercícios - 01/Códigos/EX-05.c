#include <stdlib.h>
#include <stdio.h>

int main(){
    int num, soma;
    soma = 0;
    printf("\nDigite um número:\n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        soma += (i*i);
    }

    printf("\nSomatório: %d\n", soma);
    return 0;
}