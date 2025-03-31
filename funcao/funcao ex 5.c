#include <stdio.h>

void mediaMaiorQue(float v[], int tamanho, float media) {
    printf("Elementos maiores que %.2f: ", media);
    for(int i = 0; i < tamanho; i++) {
        if(v[i] > media) {
            printf("%.2f ", v[i]);
        }
    }
    printf("\n");
}

int main() {
    float notas[5] = {7.5, 8.0, 6.5, 9.0, 5.5};
    float soma = 0;
    
    for(int i = 0; i < 5; i++) {
        soma += notas[i];
    }
    float media = soma / 5;
    
    mediaMaiorQue(notas, 5, media);
    
    return 0;
}