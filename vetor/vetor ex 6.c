#include <stdio.h>

void maiorMenor(int v[], int tamanho) {
    int maior = v[0], menor = v[0];
    
    for(int i = 1; i < tamanho; i++) {
        if(v[i] > maior) maior = v[i];
        if(v[i] < menor) menor = v[i];
    }
    
    printf("Maior: %d\nMenor: %d\n", maior, menor);
}

int main() {
    int vetor[6] = {5, 10, 2, 8, 15, 1};
    maiorMenor(vetor, 6);
    return 0;
}