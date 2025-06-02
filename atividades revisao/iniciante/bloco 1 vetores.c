#include <stdio.h>

int main() {
    int vetor[5];
    
    printf("Digite 5 números inteiros:\n");
    for(int i = 0; i < 5; i++) {
        printf("Número %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    printf("\nNúmeros digitados:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    
    return 0;
}