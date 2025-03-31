#include <stdio.h>

void ordenar(int v[], int tamanho) {
    int temp;
    for(int i = 0; i < tamanho-1; i++) {
        for(int j = i+1; j < tamanho; j++) {
            if(v[i] > v[j]) {
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
}

int main() {
    int vetor[6] = {5, 2, 8, 1, 9, 3};
    
    printf("Vetor original: ");
    for(int i = 0; i < 6; i++) printf("%d ", vetor[i]);
    
    ordenar(vetor, 6);
    
    printf("\nVetor ordenado: ");
    for(int i = 0; i < 6; i++) printf("%d ", vetor[i]);
    
    return 0;
}