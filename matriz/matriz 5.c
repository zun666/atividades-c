#include <stdio.h>

int main() {
    int linhas, colunas;
    
    // usuário define o tamanho da matriz
    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas: ");
    scanf("%d", &colunas);
    
    // Declarando uma matriz com tamanho variável (VLA - válido em C99+)
    int matriz[linhas][colunas];
    
    // Preenchendo a matriz
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o valor para [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    // Exibindo a matriz
    printf("\nMatriz digitada:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}