#include <stdio.h>    // Inclui a biblioteca padrão de entrada e saída
#define TAM 5    // Define o tamanho do vetor como 5

int main() {    // Função principal do programa
    int numeros[TAM] = {50, 10, 30, 20, 40}; // Declara o vetor com 5 números desordenados
    int i, j, temp;    // Declara variáveis auxiliares para os Laços e para a troca de valores
    
    // Algoritmo Bubble sort: ordena o vetor em ordem crescente
    for (i = 0; i < TAM - 1; i++) {    // Laço externo: controla quantas vezes vamos passar no vetor
        for (j = 0; j < TAM - 1 - i; j++) {    // Laço interno: compara elementos adjacentes
            if (numeros[j] > numeros[j + 1]) {    // Se o número atual for maior que o próximo
                temp = numeros[j];    // Guarda o número atual em uma variável temporária
                numeros[j] = numeros[j + 1];    // Move o próximo número para a posição atual
                numeros[j + 1] = temp;    // Coloca o número guardado na posição seguinte
            }
        }
    }

    // Imprime o vetor já ordenado
    printf("Vetor ordenado: ");
    for (i = 0; i < TAM; i++) {    // Laço para percorrer o vetor
        printf("%d ", numeros[i]);
    }
    printf("\n");    // Quebra de linha no final
    
    return 0; // Finaliza o programa
}