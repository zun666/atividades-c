#include <stdio.h>  // Biblioteca padrão de entrada e saída

#define TAMANHO 10  // Define o tamanho máximo do vetor

int main() {
    int vetor[TAMANHO] = {10, 30, 20};  // Inicializa o vetor com 3 valores
    int n = 3;                          // Indica que temos 3 elementos no vetor
    int valor = 30;                     // Valor que queremos buscar

    int encontrado = -1;  // Variável para armazenar a posição do valor (inicialmente -1 = não encontrado)

    // Pesquisa linear: percorre o vetor do começo ao fim
    for (int i = 0; i < n; i++) {
        if (vetor[i] == valor) {      // Se encontrar o valor desejado
            encontrado = i;           // Guarda a posição onde encontrou
            break;                    // Para o laço (não precisa procurar mais)
        }
    }

    // Mostrando o resultado da pesquisa
    if (encontrado != -1) {  // Se encontrou o valor
        printf("Valor %d encontrado na posição %d.\n", valor, encontrado);
    } else {                 // Se não encontrou
        printf("Valor %d não encontrado.\n", valor);
    }

    return 0;  // Finaliza o programa
}
