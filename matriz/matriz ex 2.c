#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j, soma = 0;
    float media;

    // Solicita os valores da matriz
    printf("Digite os 9 valores da matriz 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    // Calcula a média
    media = soma / 9.0;

    // Exibe os resultados
    printf("\nSoma de todos os elementos: %d\n", soma);
    printf("Media dos elementos: %.2f\n", media);
    printf("Diagonal principal: ");
    for(i = 0; i < 3; i++) {
        printf("%d ", matriz[i][i]);
    }

    return 0;
}