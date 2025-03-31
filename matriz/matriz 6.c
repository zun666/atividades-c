#include <stdio.h>

int main() {
    int matriz[2][2]; // Declara uma matriz 2x2 do tipo inteiro
    int soma = 0;
    
    // Leitura da matriz
    for (int i = 0; i < 2; i++) {         // Loop para percorrer as linhas
        for (int j = 0; j < 2; j++) {     // Loop para percorrer as colunas
            printf("Digite o valor para [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);   // Lê o valor e armazena na posição correspondente
            soma += matriz[i][j];         // Acumula a soma dos elementos
        }
    }
    
    // Exibe a soma
    printf("Soma de todos os elementos: %d\n", soma);
    
    return 0;
}