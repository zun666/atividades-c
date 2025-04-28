#include <stdio.h>    // Biblioteca padrão de entrada e saída

#define TAM 10    // Tamanho máximo do vetor

int main() {
    int vetor[TAM] = {10, 20, 30, 50};  // Vetor já preenchido com 4 elementos ordenados
    int n = 4;    // Número atual de elementos no vetor
    int novo = 25;    // Valor que queremos inserir
    int i = n - 1;    // Começamos pelo último elemento preenchido

    // Etapa 1: Encontrar onde o novo valor deve ser inserido
    while (i >= 0 && vetor[i] > novo) { // Enquanto o valor atual for maior que o novo
        vetor[i + 1] = vetor[i];    // Empurra o valor para a direita
        i--;    // Move para o elemento anterior
    }

    vetor[i + 1] = novo; // Insere o novo valor na posição correta
    n++;    // Atualiza o número de elementos

    // Etapa 2: Mostrar o vetor atualizado
    printf("Vetor após inserção: ");
    for (i = 0; i < n; i++) {    // Percorre o vetor atualizado
        printf("%d ", vetor[i]);    // Imprime cada elemento
    }

    printf("\n");

    return 0; // Finaliza o programa
}