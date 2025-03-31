#include <stdio.h>

int main() {
    // Criamos uma matriz 3x3 do tipo float
    // Cada linha representa um aluno
    // Cada coluna representa uma matéria
    float notas[3][3];
    
    // ------------------------
    // Leitura dos dados (notas)
    // ------------------------
    for (int i = 0; i < 3; i++) {
        // i representa o número do aluno (linha da matriz)
        printf("\nAluno %d:\n", i + 1);
        
        for (int j = 0; j < 3; j++) {
            // j representa a matéria (coluna da matriz)
            printf("Digite a nota da matéria %d: ", j + 1);
            scanf("%f", &notas[i][j]); // Armazena na posição [i][j]
        }
    }
    
    // ------------------------
    // Exibindo o boletim (a matriz)
    // ------------------------
    printf("\nBoletim completo:\n");
    for (int i = 0; i < 3; i++) {
        printf("Aluno %d: ", i + 1);
        
        for (int j = 0; j < 3; j++) {
            printf("%.1f ", notas[i][j]);
        }
        
        printf("\n"); // quebra de linha ao final de cada aluno
    }
    
    // ------------------------
    // Calculando e exibindo a média por aluno
    // ------------------------
    printf("\nMédia de cada aluno:\n");
    for (int i = 0; i < 3; i++) {
        float soma = 0;
        
        for (int j = 0; j < 3; j++) {
            soma += notas[i][j]; // Soma todas as notas do aluno i
        }
        
        float media = soma / 3.0;
        printf("Aluno %d: %.2f\n", i + 1, media);
    }
    
    return 0;
}