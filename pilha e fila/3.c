#include <stdio.h>
#include <stdlib.h>

struct No {
    int valor;
    struct No *anterior;
    struct No *proximo;
};

void inserirInicio(struct No **inicio, struct No **fim, int valor) {
    struct No *novo = (struct No*)malloc(sizeof(struct No));
    novo->valor = valor;
    novo->anterior = NULL;
    novo->proximo = *inicio;

    if (*inicio != NULL) (*inicio)->anterior = novo;
    else *fim = novo;

    *inicio = novo;
    printf("Inserido %d no in�cio.\n", valor);
}

void inserirFim(struct No **inicio, struct No **fim, int valor) {
    struct No *novo = (struct No*)malloc(sizeof(struct No));
    novo->valor = valor;
    novo->proximo = NULL;
    novo->anterior = *fim;

    if (*fim != NULL) (*fim)->proximo = novo;
    else *inicio = novo;

    *fim = novo;
    printf("Inserido %d no fim.\n", valor);
}

void removerInicio(struct No **inicio, struct No **fim) {
    if (*inicio == NULL) {
        printf("Lista vazia. Nada para remover.\n");
        return;
    }

    struct No *temp = *inicio;
    printf("Removendo %d do in�cio.\n", temp->valor);
    *inicio = temp->proximo;

    if (*inicio != NULL) (*inicio)->anterior = NULL;
    else *fim = NULL;

    free(temp);
}

void removerFim(struct No **inicio, struct No **fim) {
    if (*fim == NULL) {
        printf("Lista vazia. Nada para remover.\n");
        return;
    }

    struct No *temp = *fim;
    printf("Removendo %d do fim.\n", temp->valor);
    *fim = temp->anterior;

    if (*fim != NULL) (*fim)->proximo = NULL;
    else *inicio = NULL;

    free(temp);
}

void removerPorValor(struct No **inicio, struct No **fim, int valor) {
    if (*inicio == NULL) {
        printf("Lista vazia. Nada para remover.\n");
        return;
    }

    struct No *atual = *inicio;
    while (atual != NULL && atual->valor != valor) atual = atual->proximo;

    if (atual == NULL) {
        printf("Valor %d n�o encontrado na lista.\n", valor);
        return;
    }

    if (atual == *inicio && atual == *fim) {
        *inicio = NULL;
        *fim = NULL;
    } else if (atual == *inicio) {
        *inicio = atual->proximo;
        (*inicio)->anterior = NULL;
    } else if (atual == *fim) {
        *fim = atual->anterior;
        (*fim)->proximo = NULL;
    } else {
        atual->anterior->proximo = atual->proximo;
        atual->proximo->anterior = atual->anterior;
    }

    printf("Valor %d removido da lista.\n", atual->valor);
    free(atual);
}

void mostrarInicioAoFim(struct No *inicio) {
    if (inicio == NULL) {
        printf("Lista vazia.\n");
        return;
    }
    printf("Lista do in�cio ao fim: ");
    while (inicio != NULL) {
        printf("%d ", inicio->valor);
        inicio = inicio->proximo;
    }
    printf("\n");
}

void mostrarFimAoInicio(struct No *fim) {
    if (fim == NULL) {
        printf("Lista vazia.\n");
        return;
    }
    printf("Lista do fim ao in�cio: ");
    while (fim != NULL) {
        printf("%d ", fim->valor);
        fim = fim->anterior;
    }
    printf("\n");
}

int main() {
    struct No *inicio = NULL, *fim = NULL;
    int opcao, valor;

    do {
        printf("\n==== MENU - LISTA DUPLAMENTE ENCADEADA ====\n");
        printf("1. Inserir no in�cio\n");
        printf("2. Inserir no fim\n");
        printf("3. Remover do in�cio\n");
        printf("4. Remover do fim\n");
        printf("5. Mostrar do in�cio ao fim\n");
        printf("6. Mostrar do fim ao in�cio\n");
        printf("7. Remover por valor\n");
        printf("0. Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: 
                printf("Digite o valor: ");
                scanf("%d", &valor);
                inserirInicio(&inicio, &fim, valor);
                break;
            case 2:
                printf("Digite o valor: ");
                scanf("%d", &valor);
                inserirFim(&inicio, &fim, valor);
                break;
            case 3: removerInicio(&inicio, &fim); break;
            case 4: removerFim(&inicio, &fim); break;
            case 5: mostrarInicioAoFim(inicio); break;
            case 6: mostrarFimAoInicio(fim); break;
            case 7:
                printf("Digite o valor a ser removido: ");
                scanf("%d", &valor);
                removerPorValor(&inicio, &fim, valor);
                break;
            case 0: printf("Encerrando...\n"); break;
            default: printf("Op��o inv�lida.\n");
        }
    } while (opcao != 0);

    while (inicio != NULL) removerInicio(&inicio, &fim);
    return 0;
}