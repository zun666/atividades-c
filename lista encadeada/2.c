#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura do n�
struct No {
    int valor;
    struct No *prox;
};

// Fun��o para inserir no fim da lista
struct No* inserirNoFim(struct No *head, int novoValor) {
    // 1. Alocar mem�ria para o novo n�
    struct No *novoNo = (struct No*)malloc(sizeof(struct No));
    // 2. Atribuir o valor ao novo n�
    novoNo->valor = novoValor;
    // 3. O novo n� ser� o �ltimo, portanto 'prox' ser� NULL
    novoNo->prox = NULL;
    // 4. Se a lista estiver vazia (head == NULL), o novo n� ser� o primeiro n�
    if (head == NULL) {
        return novoNo;
    }
    // 5. Percorrer a lista at� o �ltimo n�
    struct No *atual = head;
    while (atual->prox != NULL) {
        atual = atual->prox;
    }
    // 6. Fazer o �ltimo n� apontar para o novo n�
    atual->prox = novoNo;
    // 7. Retornar o in�cio da lista (head n�o muda)
    return head;
}

// Fun��o para imprimir a lista encadeada
void imprimirLista(struct No *head) {
    struct No *atual = head;
    printf("Lista: ");
    while (atual != NULL) {
        printf("%d -> ", atual->valor);
        atual = atual->prox;
    }
    printf("NULL\n");
}

int main() {
    struct No *lista = NULL; // Lista vazia inicialmente

    // Construindo a lista inserindo no fim
    lista = inserirNoFim(lista, 10); // Lista = [10 | NULL]
    lista = inserirNoFim(lista, 20); // Lista = [10 | *] + [20 | NULL]
    lista = inserirNoFim(lista, 30); // Lista = [10 | *] + [20 | *] + [30 | NULL]

    // Inserindo 40 no fim
    lista = inserirNoFim(lista, 40); // Lista = [10 | *] + [20 | *] + [30 | *] + [40 | NULL]

    // Imprimindo a lista final
    imprimirLista(lista);

    return 0;
}