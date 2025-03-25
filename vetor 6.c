#include <stdio.h>

// Função que retorna a soma de todos os elementos
int somarElementos(int v[], int tamanho) {
    int soma = 0;

    for(int i = 0; i < tamanho; i++) {
        soma += v[i];
    }

    return soma;
}

int main() {
    int numeros[] = {10, 20, 30, 40, 50};

    int resultado = somarElementos(numeros, 5);

    printf("Soma: %d\n", resultado);

    return 0;
}
