#include <stdio.h>    // Biblioteca padrão de entrada e saída
#include <stdlib.h>    // Biblioteca para alocação dinâmica de memória

int main() {
    int *vetor;    // Declara um ponteiro para inteiro
    int n = 0;    // Número de elementos atualmente no vetor
    int tamanho = 5;    // Tamanho máximo inicial para o vetor

    vetor = malloc(tamanho * sizeof(int)); // Aloca memória para 5 inteiros

    vetor[n++] = 15;    // Insere 15 na posição 0
    vetor[n++] = 25;    // Insere 25 na posição 1
    vetor[n++] = 5;    // Insere 5 na posição 2

    printf("Vetor não ordenado (Array Dinâmico):\n"); // Mensagem inicial

    for (int i = 0; i < n; i++) { // Percorre os elementos inseridos
        printf("Posição %d: %d\n", i, vetor[i]); // Exibe a posição e o valor
    }

    free(vetor); // Libera a memória alocada dinamicamente

    return 0; // Finaliza o programa
}