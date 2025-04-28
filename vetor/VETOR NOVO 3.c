#include <stdio.h>  // Biblioteca padr�o de entrada e sa�da

#define TAMANHO 10  // Define o tamanho m�ximo do vetor

int main() {
    int vetor[TAMANHO] = {10, 30, 20};  // Vetor inicializado com 3 valores
    int n = 3;                          // N�mero de elementos no vetor
    int valor = 30;                     // Valor que queremos excluir

    int posicao = -1;  // Vari�vel para armazenar a posi��o do valor a excluir (inicialmente -1 = n�o encontrado)
    // Pesquisa para encontrar a posi��o do valor
    for (int i = 0; i < n; i++) {
        if (vetor[i] == valor) {    // Se o valor encontrado for igual ao procurado
            posicao = i;            // Armazena a posi��o
            break;                  // Para o la�o
        }
    }

    // Verifica se encontrou o valor para excluir
    if (posicao != -1) {
        // Desloca os elementos ap�s a posi��o encontrada uma casa para a esquerda
        for (int i = posicao; i < n - 1; i++) {
            vetor[i] = vetor[i + 1];  // Move o pr�ximo valor para a posi��o atual
        }
        n--;  // Decrementa o n�mero de elementos no vetor
        printf("Valor %d exclu�do.\n", valor);  // Informa que a exclus�o foi feita
    } else {
        printf("Valor %d n�o encontrado.\n", valor);  // Informa que o valor n�o foi encontrado
    }

    // Exibe o vetor atualizado
    printf("Elementos do vetor ap�s exclus�o:\n");
    for (int i = 0; i < n; i++) {
        printf("Posi��o %d: %d\n", i, vetor[i]);
    }

    return 0;  // Finaliza o programa
}
