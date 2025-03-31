#include <stdio.h>

int buscaElemento(int v[], int tamanho, int valor) {
    for(int i = 0; i < tamanho; i++) {
        if(v[i] == valor) return i;
    }
    return -1;
}

int main() {
    int vetor[5] = {10, 20, 30, 40, 50};
    int valor, posicao;
    
    printf("Digite um valor para buscar: ");
    scanf("%d", &valor);
    
    posicao = buscaElemento(vetor, 5, valor);
    
    if(posicao != -1) {
        printf("Valor encontrado na posição %d\n", posicao);
    } else {
        printf("Valor não encontrado\n");
    }
    
    return 0;
}