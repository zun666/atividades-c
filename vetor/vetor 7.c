#include <stdio.h>

void encontrarMaiorMenor(int v[], int tamanho) {
    int maior = v[0];
    int menor = v[0];

    for(int i = 1; i < tamanho; i++) {
        if(v[i] > maior) maior = v[i];
        if(v[i] < menor) menor = v[i];
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
}

int main() {
    int valores[] = {12, 5, 78, 3, 42};

    encontrarMaiorMenor(valores, 5);

    return 0;
}
