#include <stdio.h>
#include <stdlib.h>

#define TAM 5

struct Fila {
    int dados[TAM];
    int inicio;
    int fim;
    int quantidade;
};

void inicializarFila(struct Fila *f) {
    f->inicio = 0;
    f->fim = 0;
    f->quantidade = 0;
}

int filaCheia(struct Fila *f) {
    return f->quantidade == TAM;
}

int filaVazia(struct Fila *f) {
    return f->quantidade == 0;
}

void enfileirar(struct Fila *f, int valor) {
    if (filaCheia(f)) {
        printf("Fila cheia! Não é possível inserir.\n");
        return;
    }

    f->dados[f->fim] = valor;
    f->fim = (f->fim + 1) % TAM;
    f->quantidade++;
    printf("Elemento %d inserido com sucesso.\n", valor);
}

void desenfileirar(struct Fila *f) {
    if (filaVazia(f)) {
        printf("Fila vazia! Nada para remover.\n");
        return;
    }

    int removido = f->dados[f->inicio];
    f->inicio = (f->inicio + 1) % TAM;
    f->quantidade--;
    printf("Elemento %d removido da fila.\n", removido);
}

void mostrarFila(struct Fila *f) {
    if (filaVazia(f)) {
        printf("Fila vazia.\n");
        return;
    }

    printf("Fila atual: ");
    int i = f->inicio;
    int count = 0;

    while (count < f->quantidade) {
        printf("%d ", f->dados[i]);
        i = (i + 1) % TAM;
        count++;
    }
    printf("\n");
}

int main() {
    struct Fila fila;
    inicializarFila(&fila);
    int opcao, valor;

    do {
        printf("\n==== MENU - FILA CIRCULAR COM VETOR ====\n");
        printf("1. Inserir elemento\n");
        printf("2. Remover elemento\n");
        printf("3. Mostrar fila\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &valor);
                enfileirar(&fila, valor);
                break;
            case 2: desenfileirar(&fila); break;
            case 3: mostrarFila(&fila); break;
            case 0: printf("Encerrando o programa.\n"); break;
            default: printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}