#include <stdio.h>

int main() {
    float notas[3][3];
    float mediaAluno, mediaMateria;
    int i, j;

    // Solicita as notas
    for(i = 0; i < 3; i++) {
        printf("Aluno %d:\n", i+1);
        for(j = 0; j < 3; j++) {
            printf("Nota da materia %d: ", j+1);
            scanf("%f", &notas[i][j]);
        }
    }

    // Calcula e exibe a média de cada aluno
    printf("\nMedia por aluno:\n");
    for(i = 0; i < 3; i++) {
        mediaAluno = 0;
        for(j = 0; j < 3; j++) {
            mediaAluno += notas[i][j];
        }
        printf("Aluno %d: %.2f\n", i+1, mediaAluno/3);
    }

    // Calcula e exibe a média de cada matéria
    printf("\nMedia por materia:\n");
    for(j = 0; j < 3; j++) {
        mediaMateria = 0;
        for(i = 0; i < 3; i++) {
            mediaMateria += notas[i][j];
        }
        printf("Materia %d: %.2f\n", j+1, mediaMateria/3);
    }

    return 0;
}