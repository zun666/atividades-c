#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *proximo;
} No;

void inserirInicio(No **lista, int valor) {
    No *novo = (No*)malloc(sizeof(No));
    novo->valor = valor;
    novo->proximo = *lista;
    *lista = novo;
}

void imprimirLista(No *lista) {
    No *atual = lista;
    printf("Lista: ");
    while(atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->proximo;
    }
    printf("\n");
}

int main() {
    No *lista = NULL;
    
    inserirInicio(&lista, 3);
    inserirInicio(&lista, 2);
    inserirInicio(&lista, 1);
    
    imprimirLista(lista);
    
    return 0;
}