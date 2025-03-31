#include <stdio.h>

int main() {
    char presenca[4][5];
    int i, j;
    char dias[5][10] = {"Segunda", "Terca", "Quarta", "Quinta", "Sexta"};

    // Solicita os dados de presença
    for(i = 0; i < 4; i++) {
        printf("Aluno %d:\n", i+1);
        for(j = 0; j < 5; j++) {
            printf("%s (P/F): ", dias[j]);
            scanf(" %c", &presenca[i][j]);
        }
    }

    // Exibe a tabela formatada
    printf("\nTabela de Presencas:\n");
    printf("Aluno\\Dia ");
    for(j = 0; j < 5; j++) {
        printf("%-8s", dias[j]);
    }
    printf("\n");

    for(i = 0; i < 4; i++) {
        printf("Aluno %-4d", i+1);
        for(j = 0; j < 5; j++) {
            printf("%-8c", presenca[i][j]);
        }
        printf("\n");
    }

    return 0;
}