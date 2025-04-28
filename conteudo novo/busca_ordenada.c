#include <stdio.h>    // Biblioteca padrão de entrada e saída
#define TAM 6    // Define o tamanho do vetor

int main() {
    int vetor[TAM] = {5, 10, 15, 20, 30, 50};  // Vetor já ordenado
    int valor = 20;    // Valor que queremos procurar
    int i;    // Variável de controle do Laço
    int encontrado = -1; // Variável para guardar a posição encontrada (-1 = não encontrado)

    // Vamos percorrer o vetor
    for (i = 0; i < TAM; i++) {
        printf("Comparando com posição %d: %d\n", i, vetor[i]); // Mostra a posição atual e o valor

        if (vetor[i] == valor) {    // Se encontramos o valor
            encontrado = i;    // Armazenamos a posição
            printf("\nlor %d encontrado na posição %d\n", valor, i);
            break;    // Paramos a busca
        } else if (vetor[i] > valor) {    // Se o valor atual é maior que o procurado
            printf("Parando: valor %d não está no vetor.\n", valor);
            break;    // Podemos parar porque o vetor é ordenado
        }
    }

    // Se não encontrou o valor
    if (encontrado == -1) {
        printf("\nlor %d não encontrado no vetor.\n", valor);
    }
    return 0; // Finaliza o programa
}