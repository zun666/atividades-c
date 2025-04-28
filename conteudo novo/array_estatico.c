#include <stdio.h>  // Biblioteca para entrada e sa�da

int main() {
    int vetor[5];    // Declara um vetor de 5 inteiros
    int n = 0;    // Vari�vel para controlar o n�mero de elementos inseridos

    vetor[n++] = 10; // Insere 10 na posi��o 0 e incrementa n
    vetor[n++] = 40; // Insere 40 na posi��o 1 e incrementa n
    vetor[n++] = 20; // Insere 20 na posi��o 2 e incrementa n

    printf("Vetor n�o ordenado (Array Est�tico):\n"); // Exibe mensagem antes de mostrar o vetor

    for (int i = 0; i < n; i++) { // Percorre os elementos j� inseridos
        printf("Posi��o %d: %d\n", i, vetor[i]); // Mostra o �ndice e o valor armazenado
    }

    return 0; // Encerra o programa
}