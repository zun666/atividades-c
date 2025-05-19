#include <stdio.h>
#include <stdlib.h>

// Estrutura do n�
struct No {
    int valor;
    struct No *prox;
};

// Fun��o para buscar um valor na lista
struct No* buscarElemento(struct No *head, int valorBusca) {
    struct No *atual = head;  // Ponteiro auxiliar para percorrer
    while (atual != NULL) {  // Percorre at� o fim da lista
        if (atual->valor == valorBusca) {  // Se encontrou o valor
            return atual;  // Retorna o endere�o do n� encontrado
        }
        atual = atual->prox;  // Avan�a para o pr�ximo n�
    }
    return NULL;  // Se n�o encontrou, retorna NULL
}

// Fun��o para imprimir a lista
void imprimirLista(struct No *head) {
    struct No *atual = head;
    printf("Lista: ");
    while (atual != NULL) {
        printf("%d -> ", atual->valor);
        atual = atual->prox;
    }
    printf("NULL\n");
}

// Fun��o auxiliar para inserir no fim
struct No* inserirNoFim(struct No *head, int valor) {
    struct No *novo = (struct No*)malloc(sizeof(struct No));
    novo->valor = valor;
    novo->prox = NULL;
    if (head == NULL) return novo;
    struct No *atual = head;
    while (atual->prox != NULL) {
        atual = atual->prox;
    }
    atual->prox = novo;
    return head;
}

int main() {
    struct No *lista = NULL;

    // Criando a lista: 10 -> 20 -> 30 -> NULL
    lista = inserirNoFim(lista, 10);
    lista = inserirNoFim(lista, 20);
    lista = inserirNoFim(lista, 30);

    imprimirLista(lista);

    // Buscar valor 20
    struct No *resultado = buscarElemento(lista, 20);
    if (resultado != NULL) {
        printf("Valor %d encontrado no endere�o %p.\n", resultado->valor, (void*)resultado);
    } else {
        printf("Valor 20 n�o encontrado.\n");
    }

    // Buscar valor inexistente
    resultado = buscarElemento(lista, 99);
    if (resultado != NULL) {
        printf("Valor %d encontrado no endere�o %p.\n", resultado->valor, (void*)resultado);
    } else {
        printf("Valor 99 n�o encontrado.\n");
    }

    return 0;
}