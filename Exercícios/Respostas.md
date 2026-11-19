# Respostas 

## Exercício 01
### Enunciado:
```
Faça um programa que leia dois valores e exiba o maior valor lido.
```
### Código:
```c
#include <stdio.h>

int main(){
    int a, b;
    printf("\nDigite dois valores:\n");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("Maior: %d\n", a);
    }
    else if (b > a)
    {
        printf("Maior: %d\n", b);
    }
    else {
        printf("Iguais!");
    }
    
    return 0;
}
```
---
## Exercício 02
### Enunciado:
```
Um aluno de LP1 está indo aos Estados Unidos e quer comprar um celular novo. Ele não quer gastar mais do que 1000 reais. Um dólar está custando 3.17 reais. Faça um programa que leia o preço de um celular em dólares e, caso seja um bom negócio, escreva BOM NEGÓCIO.
```
### Código:
```c
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
```
---
## Exercício 03
### Enunciado:
```
Agora o aluno alugou um carro. Ele está preocupado com o limite de velocidade, mas não entende muito bem o sistema de milhas por hora (mph). Ele pretende manter sempre uma velocidade entre 80 e 100 quilômetros por hora (kph). Sabe-se que que 1 milha tem aproximadamente 1.6 quilômetros. Crie um programa que leia a velocidade atual do carro em mph e escreva na tela ACELERE, DESACELERE ou MANTENHA.

```
### Código:
```c
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
```
---