#include <stdio.h>

int contarOcorrencias(int v[], int tamanho, int valor) {
    int contador = 0;
    for(int i = 0; i < tamanho; i++) {
        if(v[i] == valor) contador++;
    }
    return contador;
}

int main() {
    int vetor[8] = {5, 2, 5, 8, 5, 1, 5, 9};
    int valor;
    
    printf("Digite um valor para contar: ");
    scanf("%d", &valor);
    
    printf("O valor %d aparece %d vezes\n", valor, contarOcorrencias(vetor, 8, valor));
    
    return 0;
}