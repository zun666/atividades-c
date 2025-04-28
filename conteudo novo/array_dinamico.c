#include <stdio.h>    // Biblioteca padr�o de entrada e sa�da
#include <stdlib.h>    // Biblioteca para aloca��o din�mica de mem�ria

int main() {
    int *vetor;    // Declara um ponteiro para inteiro
    int n = 0;    // N�mero de elementos atualmente no vetor
    int tamanho = 5;    // Tamanho m�ximo inicial para o vetor

    vetor = malloc(tamanho * sizeof(int)); // Aloca mem�ria para 5 inteiros

    vetor[n++] = 15;    // Insere 15 na posi��o 0
    vetor[n++] = 25;    // Insere 25 na posi��o 1
    vetor[n++] = 5;    // Insere 5 na posi��o 2

    printf("Vetor n�o ordenado (Array Din�mico):\n"); // Mensagem inicial

    for (int i = 0; i < n; i++) { // Percorre os elementos inseridos
        printf("Posi��o %d: %d\n", i, vetor[i]); // Exibe a posi��o e o valor
    }

    free(vetor); // Libera a mem�ria alocada dinamicamente

    return 0; // Finaliza o programa
}