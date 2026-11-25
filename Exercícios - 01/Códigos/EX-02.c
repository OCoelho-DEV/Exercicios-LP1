#include <stdio.h>

int main(){
    float dolar = 3.17;
    float preco, preco_real;

    printf("\nQual o preço do celular (U$) ?:\n");
    scanf("%f", &preco);
    
    preco_real = preco * dolar;
    printf("Está custando R$ %.2f\n", preco_real);
    if (preco_real <= 1000){
        printf("Bom negócio!\n");
    }
    return 0;
}