#include <stdio.h>

int main() {
    int vetor[5];
    
    printf("Digite 5 n�meros inteiros:\n");
    for(int i = 0; i < 5; i++) {
        printf("N�mero %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    printf("\nN�meros digitados:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    
    return 0;
}