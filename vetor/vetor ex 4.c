#include <stdio.h>

int somaVetor(int v[], int tamanho) {
    int soma = 0;
    for(int i = 0; i < tamanho; i++) {
        soma += v[i];
    }
    return soma;
}

int main() {
    int vetor[5] = {1, 2, 3, 4, 5};
    printf("Soma: %d\n", somaVetor(vetor, 5));
    return 0;
}