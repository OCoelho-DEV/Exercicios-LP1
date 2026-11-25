# Respostas 

# Exercício 01
```
Feito em aula
```
---
# Exercício 02
### Enunciado:

Faça um programa que leia dois valores e exiba o maior valor lido.

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
# Exercício 03
### Enunciado:

Um aluno de LP1 está indo aos Estados Unidos e quer comprar um celular novo. Ele não quer gastar mais do que 1000 reais. Um dólar está custando 3.17 reais. Faça um programa que leia o preço de um celular em dólares e, caso seja um bom negócio, escreva BOM NEGÓCIO.

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
# Exercício 04
### Enunciado:

Agora o aluno alugou um carro. Ele está preocupado com o limite de velocidade, mas não entende muito bem o sistema de milhas por hora (mph). Ele pretende manter sempre uma velocidade entre 80 e 100 quilômetros por hora (kph). Sabe-se que que 1 milha tem aproximadamente 1.6 quilômetros. Crie um programa que leia a velocidade atual do carro em mph e escreva na tela ACELERE, DESACELERE ou MANTENHA.


### Código:
```c
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
```
---
# Exercício 05
### Enunciado:

Faça um programa que leia números continuamente até que seja digitado 0. Ao final, o programa deve exibir a soma de todos os números lidos.

### Código:
```c
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
```
---
# Exercício 06
### Enunciado:

Faça um programa que leia um número N e calcule o somatório de i²

### Código:
```c
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
```
---
# Exercício 07
### Enunciado:

O Campeonato Brasileiro está na reta final com 20 times na disputa.

Uma vitória vale 3 pontos, um empate vale 1 ponto e uma derrota vale 0 pontos. Escreva um programa que, para cada time, leia o nome (ou um identificador numérico), número de vitórias, número de empates e número de derrotas.

Ao final, o programa deve escrever os nomes (ou identificadores) dos times com mais e menos pontos até o momento.

### Código:
```c
#include <stdio.h>

struct time
{
    char identificador;
    int pts;
};

int main(){
    struct time time[20];
    for (int i = 0; i < 20; i++) {
        int vitorias, empates, derrotas;
        char nome;
        printf("\nQual o identificador do time (Um caractere)\n");
        scanf(" %c", &nome);
        printf("Quantas vitórias, empates e derrotas?\n");
        scanf("%d%d%d", &vitorias, &empates, &derrotas);
        time[i].identificador = nome;
        time[i].pts = (vitorias * 3) + empates;
    };
    
    int idx_max = 0, idx_min = 0;


    for (int i = 0; i < 20; i++) {
        if (time[i].pts > time[idx_max].pts) {
            idx_max = i;
        }
        if (time[i].pts < time[idx_min].pts) {
            idx_min = i;
        }
    }
    

    printf("Time com mais pontos / Time com menos pontos:\n");
    printf("Time: %c | Pts: %d\n", time[idx_max].identificador, time[idx_max].pts);
    printf("Time: %c | Pts: %d\n", time[idx_min].identificador, time[idx_min].pts);


    return 0;
}
```
---
# Exercício 08
### Enunciado:

Ler dois números n1 e n2
Exibir todos os números entre n1 e n2
Fazer em Python e em C

## Códigos:

### Em Python:
```py
n1 = int(input("Digite um número: "))
n2 = int(input("Digite outro número: "))

if (n1 > n2):
    for i in range(n2 + 1, n1):
        print(i, " ")
else:
    for i in range(n1 + 1, n2):
        print(i, " ")
```
### Em C:
```c
#include <stdio.h>

int main(){
    long long n1, n2;
    printf("\nDigite dois números:");
    scanf("%lld %lld", &n1, &n2);

    if (n1 > n2) {
        for (long long i = n2 + 1; i < n1; i++) {
            printf("%lld ", i);

        }
    }
    else {
        for (long long i = n1 + 1; i < n2; i++) {
            printf("%lld ", i);
        }
    }
    return 0;
}
```
---