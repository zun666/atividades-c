#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *anterior;
    struct No *proximo;
} No;

void inserirFim(No **lista, int valor) {
    No *novo = (No*)malloc(sizeof(No));
    novo->valor = valor;
    
    if(*lista == NULL) {
        novo->anterior = novo;
        novo->proximo = novo;
        *lista = novo;
    } else {
        No *ultimo = (*lista)->anterior;
        
        novo->proximo = *lista;
        novo->anterior = ultimo;
        ultimo->proximo = novo;
        (*lista)->anterior = novo;
    }
}

void removerPorValor(No **lista, int valor) {
    if(*lista == NULL) return;
    
    No *atual = *lista;
    do {
        if(atual->valor == valor) {
            if(atual == atual->proximo) { // Único nó
                free(atual);
                *lista = NULL;
                return;
            }
            
            atual->anterior->proximo = atual->proximo;
            atual->proximo->anterior = atual->anterior;
            
            if(atual == *lista) {
                *lista = atual->proximo;
            }
            
            free(atual);
            return;
        }
        atual = atual->proximo;
    } while(atual != *lista);
}

void imprimirLista(No *lista) {
    if(lista == NULL) {
        printf("Lista vazia.\n");
        return;
    }
    
    No *atual = lista;
    printf("Lista circular: ");
    do {
        printf("%d ", atual->valor);
        atual = atual->proximo;
    } while(atual != lista);
    printf("\n");
}

int main() {
    No *lista = NULL;
    
    inserirFim(&lista, 10);
    inserirFim(&lista, 20);
    inserirFim(&lista, 30);
    imprimirLista(lista);
    
    removerPorValor(&lista, 20);
    imprimirLista(lista);
    
    removerPorValor(&lista, 10);
    imprimirLista(lista);
    
    removerPorValor(&lista, 30);
    imprimirLista(lista);
    
    return 0;
}