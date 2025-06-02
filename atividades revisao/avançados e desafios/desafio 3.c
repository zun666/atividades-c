#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *proximo;
} No;

void push(No **topo, int valor) {
    No *novo = (No*)malloc(sizeof(No));
    novo->valor = valor;
    novo->proximo = *topo;
    *topo = novo;
}

int pop(No **topo) {
    if(*topo == NULL) return -1;
    No *temp = *topo;
    int valor = temp->valor;
    *topo = (*topo)->proximo;
    free(temp);
    return valor;
}

int main() {
    No *topo = NULL;
    int numero, soma = 0;
    
    printf("Digite 5 números inteiros:\n");
    for(int i = 0; i < 5; i++) {
        printf("Número %d: ", i+1);
        scanf("%d", &numero);
        push(&topo, numero);
    }
    
    printf("\nDesempilhando e somando:\n");
    for(int i = 0; i < 5; i++) {
        numero = pop(&topo);
        printf("Valor retirado: %d\n", numero);
        soma += numero;
    }
    
    printf("\nSomatório dos valores: %d\n", soma);
    
    return 0;
}