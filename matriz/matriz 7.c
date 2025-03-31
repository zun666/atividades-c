#include <stdio.h>

int main() {
    int matriz[2][2]; // Declara uma matriz 2x2 do tipo inteiro

    // Preenchendo a matriz com valores informados pelo usuário
    for (int i = 0; i < 2; i++) {    // Loop para percorrer as linhas
        for (int j = 0; j < 2; j++) {    // Loop para percorrer as colunas
            printf("Digite o valor para [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);    // Lê o valor e armazena na posição correspondente
        }
    }

    // Exibindo a matriz
    printf("\nMatriz digitada:\n");
    for (int i = 0; i < 2; i++) {    // Loop para percorrer as linhas novamente
        for (int j = 0; j < 2; j++) {    // Loop para colunas
            printf("%d\t", matriz[i][j]);    // Imprime o valor da posição i,j
        }
        printf("\n");    // Quebra de linha após cada linha da matriz
    }

    return 0;
}