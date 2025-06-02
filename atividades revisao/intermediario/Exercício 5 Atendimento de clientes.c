#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int numero;
    struct No *proximo;
} No;

typedef struct Fila {
    No *inicio;
    No *fim;
} Fila;

void enqueue(Fila *fila, int numero) {
    No *novo = (No*)malloc(sizeof(No));
    novo->numero = numero;
    novo->proximo = NULL;
    
    if(fila->fim != NULL) {
        fila->fim->proximo = novo;
    } else {
        fila->inicio = novo;
    }
    fila->fim = novo;
}

int dequeue(Fila *fila) {
    if(fila->inicio == NULL) {
        printf("Fila vazia!\n");
        return -1;
    }
    No *temp = fila->inicio;
    int numero = temp->numero;
    fila->inicio = fila->inicio->proximo;
    if(fila->inicio == NULL) {
        fila->fim = NULL;
    }
    free(temp);
    return numero;
}

int main() {
    Fila fila = {NULL, NULL};
    
    // Inserir 5 clientes
    for(int i = 1; i <= 5; i++) {
        enqueue(&fila, i);
        printf("Cliente %d chegou na fila.\n", i);
    }
    
    // Atender clientes
    printf("\nAtendendo clientes:\n");
    for(int i = 1; i <= 5; i++) {
        printf("Atendendo cliente %d\n", dequeue(&fila));
    }
    
    return 0;
}