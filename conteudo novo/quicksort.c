#include <stdio.h>    //  Biblioteca poderão
#define TAM 6    //  Tomando do vetor

// Fundo para trocar dois elementos
void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Fundo principal do Quicksort
void quicksort(int vector[], int inicio, int fin) {
    if (inicio < fin) {
        int pivo = vector[inicio];
        int i = inicio + 1;
        int j = fin;
        while (i <= j) {
            if (vector[i] <= pivo) {
                i++;
            } else if (vector[j] > pivo) {
                j--;
            } else {
                troca(&vector[i], &vector[j]);
                i++;
                j--;
            }
        }
        troca(&vector[inicio], &vector[j]);
        quicksort(vector, inicio, j - 1);
        quicksort(vector, j + 1, fin);
    }
}

int main() {
    int numeros[TAM] = {20, 10, 40, 30, 60, 50}; // Vetor desordenado
    int i;

    quicksort(numeros, 0, TAM - 1); // Chama o Quicksort

    // Imprime o vetor ordenado
    printf("Vetor ordenado: ");
    for (i = 0; i < TAM; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}