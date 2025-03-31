#include <stdio.h>

int parOuImpar(int numero) {
    return (numero % 2 == 0) ? 1 : 0;
}

int main() {
    int num;
    
    printf("Digite 5 números:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &num);
        if(parOuImpar(num)) {
            printf("%d é par\n", num);
        } else {
            printf("%d é ímpar\n", num);
        }
    }
    
    return 0;
}