#include <stdio.h>

// Função que calcula o fatorial usando repetição
int fatorial(int n) {
    int resultado = 1; // Inicializa com 1 (neutro da multiplicação)

    for(int i = 1; i <= n; i++) {
        resultado *= i; // Multiplica resultado por i em cada passo
    }

    return resultado; // Retorna o fatorial
}

int main() {
    int numero = 5;

    // Chama a função fatorial com número 5
    printf("Fatorial de %d é %d\n", numero, fatorial(numero));

    return 0;
}
