#include <stdio.h>
#include <stdlib.h>

struct No {
    int valor;
    struct No *anterior;
    struct No *proximo;
};

void enfileirar(struct No **inicio, struct No **fim, int valor) {
    struct No *novo = (struct No*)malloc(sizeof(struct No));
    novo->valor = valor;
    novo->anterior = NULL;
    novo->proximo = NULL;

    if (*inicio == NULL) {
        *inicio = novo;
        *fim = novo;
        novo->proximo = novo;
        novo->anterior = novo;
    } else {
        novo->anterior = *fim;
        novo->proximo = *inicio;
        (*fim)->proximo = novo;
        (*inicio)->anterior = novo;
        *fim = novo;
    }

    printf("Elemento %d inserido na fila.\n", valor);
}

void desenfileirar(struct No **inicio, struct No **fim) {
    if (*inicio == NULL) {
        printf("Fila vazia! Nada para remover.\n");
        return;
    }

    struct No *removido = *inicio;

    if (*inicio == *fim) {
        *inicio = NULL;
        *fim = NULL;
    } else {
        *inicio = removido->proximo;
        (*inicio)->anterior = *fim;
        (*fim)->proximo = *inicio;
    }

    printf("Elemento %d removido da fila.\n", removido->valor);
    free(removido);
}

void mostrarFila(struct No *inicio) {
    if (inicio == NULL) {
        printf("Fila vazia.\n");
        return;
    }

    struct No *atual = inicio;
    printf("Fila atual: ");
    do {
        printf("%d ", atual->valor);
        atual = atual->proximo;
    } while (atual != inicio);
    printf("\n");
}

int main() {
    struct No *inicio = NULL, *fim = NULL;
    int opcao, valor;

    do {
        printf("\n===== MENU - FILA DUPLAMENTE CIRCULAR ====\n");
        printf("1. Inserir elemento\n");
        printf("2. Remover elemento\n");
        printf("3. Mostrar fila\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor: ");
                scanf("%d", &valor);
                enfileirar(&inicio, &fim, valor);
                break;
            case 2: desenfileirar(&inicio, &fim); break;
            case 3: mostrarFila(inicio); break;
            case 0: printf("Encerrando...\n"); break;
            default: printf("Opção inválida.\n");
        }
    } while (opcao != 0);

    while (inicio != NULL) desenfileirar(&inicio, &fim);
    return 0;
}