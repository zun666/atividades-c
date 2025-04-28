#include <stdio.h>    // Biblioteca padr�o de entrada e sa�da
#define TAM 6    // Define o tamanho do vetor

int main() {
    int vetor[TAM] = {5, 10, 15, 20, 30, 50};  // Vetor j� ordenado
    int valor = 20;    // Valor que queremos procurar
    int i;    // Vari�vel de controle do La�o
    int encontrado = -1; // Vari�vel para guardar a posi��o encontrada (-1 = n�o encontrado)

    // Vamos percorrer o vetor
    for (i = 0; i < TAM; i++) {
        printf("Comparando com posi��o %d: %d\n", i, vetor[i]); // Mostra a posi��o atual e o valor

        if (vetor[i] == valor) {    // Se encontramos o valor
            encontrado = i;    // Armazenamos a posi��o
            printf("\nlor %d encontrado na posi��o %d\n", valor, i);
            break;    // Paramos a busca
        } else if (vetor[i] > valor) {    // Se o valor atual � maior que o procurado
            printf("Parando: valor %d n�o est� no vetor.\n", valor);
            break;    // Podemos parar porque o vetor � ordenado
        }
    }

    // Se n�o encontrou o valor
    if (encontrado == -1) {
        printf("\nlor %d n�o encontrado no vetor.\n", valor);
    }
    return 0; // Finaliza o programa
}