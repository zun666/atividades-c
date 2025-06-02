#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *proximo;
} No;

void inserirOrdenado(No **lista, int valor) {
    No *novo = (No*)malloc(sizeof(No));
    novo->valor = valor;
    
    if(*lista == NULL || valor < (*lista)->valor) {
        novo->proximo = *lista;
        *lista = novo;
    } else {
        No *atual = *lista;
        while(atual->proximo != NULL && atual->proximo->valor < valor) {
            atual = atual->proximo;
        }
        novo->proximo = atual->proximo;
        atual->proximo = novo;
    }
}

void imprimirLista(No *lista) {
    No *atual = lista;
    printf("Lista ordenada: ");
    while(atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->proximo;
    }
    printf("\n");
}

int main() {
    No *lista = NULL;
    
    inserirOrdenado(&lista, 3);
    inserirOrdenado(&lista, 1);
    inserirOrdenado(&lista, 2);
    inserirOrdenado(&lista, 4);
    
    imprimirLista(lista);
    
    return 0;
}