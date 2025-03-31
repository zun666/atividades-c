#include <stdio.h>

float mediaNotas(float notas[], int qtd) {
    float soma = 0;
    for(int i = 0; i < qtd; i++) {
        soma += notas[i];
    }
    return soma / qtd;
}

int main() {
    float notas[4];
    
    printf("Digite 4 notas:\n");
    for(int i = 0; i < 4; i++) {
        scanf("%f", &notas[i]);
    }
    
    printf("Média: %.2f\n", mediaNotas(notas, 4));
    return 0;
}