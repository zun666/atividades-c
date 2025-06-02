#include <stdio.h>

int encontrarMaior(int vetor[], int tamanho) {
    int maior = vetor[0];
    for(int i = 1; i < tamanho; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

int main() {
    int vetor[6] = {10, 5, 8, 20, 3, 15};
    
    printf("O maior valor no vetor é: %d\n", encontrarMaior(vetor, 6));
    
    return 0;
}