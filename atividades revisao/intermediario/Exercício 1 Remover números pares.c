#include <stdio.h>

void removerPares(int vetor[], int *tamanho) {
    int i, j;
    for(i = 0, j = 0; i < *tamanho; i++) {
        if(vetor[i] % 2 != 0) {
            vetor[j++] = vetor[i];
        }
    }
    *tamanho = j;
}

int main() {
    int vetor[10];
    int tamanho = 10;
    
    printf("Digite 10 números inteiros:\n");
    for(int i = 0; i < tamanho; i++) {
        printf("Número %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    removerPares(vetor, &tamanho);
    
    printf("\nVetor sem números pares:\n");
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    return 0;
}