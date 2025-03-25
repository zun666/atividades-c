#include <stdio.h>

// Função recursiva para calcular fatorial
int fatorial(int n) {
    // Caso base: se n for 0 ou 1, o fatorial é 1
    if(n == 0 || n == 1) {
        return 1;
    }

    // Chamada recursiva: n * fatorial(n-1)
    return n * fatorial(n - 1);
}

int main() {
    int numero = 6;

    // Chama a função recursiva
    printf("Fatorial de %d é %d\n", numero, fatorial(numero));

    return 0;
}
