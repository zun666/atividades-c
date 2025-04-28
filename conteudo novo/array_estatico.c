#include <stdio.h>  // Biblioteca para entrada e saída

int main() {
    int vetor[5];    // Declara um vetor de 5 inteiros
    int n = 0;    // Variável para controlar o número de elementos inseridos

    vetor[n++] = 10; // Insere 10 na posição 0 e incrementa n
    vetor[n++] = 40; // Insere 40 na posição 1 e incrementa n
    vetor[n++] = 20; // Insere 20 na posição 2 e incrementa n

    printf("Vetor não ordenado (Array Estático):\n"); // Exibe mensagem antes de mostrar o vetor

    for (int i = 0; i < n; i++) { // Percorre os elementos já inseridos
        printf("Posição %d: %d\n", i, vetor[i]); // Mostra o índice e o valor armazenado
    }

    return 0; // Encerra o programa
}