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