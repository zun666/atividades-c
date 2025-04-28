#include <stdio.h>  // Biblioteca padr�o de entrada e sa�da

#define TAMANHO 10  // Define o tamanho m�ximo do vetor

int main() {
    int vetor[TAMANHO] = {10, 30, 20};  // Inicializa o vetor com 3 valores
    int n = 3;                          // Indica que temos 3 elementos no vetor
    int valor = 30;                     // Valor que queremos buscar

    int encontrado = -1;  // Vari�vel para armazenar a posi��o do valor (inicialmente -1 = n�o encontrado)

    // Pesquisa linear: percorre o vetor do come�o ao fim
    for (int i = 0; i < n; i++) {
        if (vetor[i] == valor) {      // Se encontrar o valor desejado
            encontrado = i;           // Guarda a posi��o onde encontrou
            break;                    // Para o la�o (n�o precisa procurar mais)
        }
    }

    // Mostrando o resultado da pesquisa
    if (encontrado != -1) {  // Se encontrou o valor
        printf("Valor %d encontrado na posi��o %d.\n", valor, encontrado);
    } else {                 // Se n�o encontrou
        printf("Valor %d n�o encontrado.\n", valor);
    }

    return 0;  // Finaliza o programa
}
