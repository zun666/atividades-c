#include <stdio.h>
#include <stdlib.h> // Necessário para malloc() e free()

int main() {
    int linhas, colunas;
    
    // Solicita ao usuário o tamanho da matriz
    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);
    
    printf("Digite o número de colunas: ");
    scanf("%d", &colunas);
    
    // ------------------------
    // ALOCAÇÃO DINÂMICA DA MATRIZ
    // ------------------------
    
    // Passo 1: criar um vetor de ponteiros, cada um representando uma linha
    int **matriz = (int **) malloc(linhas * sizeof(int *));
    // Explicação:
    // - 'int **matriz' é um ponteiro para ponteiro (matriz)
    // - malloc(linhas * sizeof(int *)) aloca espaço para 'linhas' ponteiros
    // - Cada ponteiro representará uma linha da matriz
    
    // Passo 2: Para cada linha, alocamos um vetor de 'colunas' inteiros
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *) malloc(colunas * sizeof(int));
        // Aqui estamos alocando espaço para 'colunas' inteiros em cada linha
    }
    
    // ------------------------
    // PREENCHIMENTO DA MATRIZ
    // ------------------------
    printf("\nDigite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            // Acessamos normalmente como matriz[i][j]
        }
    }
    
    // ------------------------
    // EXIBIÇÃO DA MATRIZ
    // ------------------------
    printf("\nMatriz digitada:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]); // \t para tabular os números
        }
        printf("\n");
    }
    
    // ------------------------
    // LIBERAÇÃO DA MEMÓRIA
    // ------------------------
    // Sempre que usamos malloc, precisamos liberar a memória com free()
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]); // Libera cada linha
    }
    free(matriz); // Libera o vetor de ponteiros
    
    return 0;
}