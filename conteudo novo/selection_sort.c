#include <stdio.h>    // Biblioteca padrão
#define TAM 5    // Tomanho do vetor

int main() {
    int numeros[TAM] = [29, 10, 14, 37, 13]; // Vetor desordenado
    int i, j, min, temp; // Variáveis auxiliares
    
    // Algoritmo Selection Sort
    for (i = 0; i < TAM - 1; i++) {    // Percorre cada posição do vetor
        min = i;    // Assume que o menor elemento está na posição atua
        for (j = i + 1; j < TAM; j++) {    // Percorre o resto do vetor
            if (numeros[j] < numeros[min]) {    // Se encontrar um menor
                min = j;    // Atualiza a posição do menor
            }
        } 
        // Se o menor elemento não for o atual, faz a troca
        if (min != i) {
            temp = numeros[i];
            numeros[i] = numeros[min];
            numeros[min] = temp;
        }
    } 
    
    // Imprime o vetor ordenado
    printf("Vetor ordenado: ");
    for (i = 0; i < TAM; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    
    return 0;
}