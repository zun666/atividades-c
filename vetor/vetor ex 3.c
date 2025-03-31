#include <stdio.h>

void mostrarVetor(int v[], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int vetor[6] = {5, 10, 15, 20, 25, 30};
    mostrarVetor(vetor, 6);
    return 0;
}