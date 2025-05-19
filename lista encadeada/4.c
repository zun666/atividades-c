#include <stdio.h>
#include <stdlib.h>

// Estrutura do n�
struct No {
    int valor;
    struct No *prox;
};

// Fun��o para percorrer e imprimir a lista
void imprimirLista(struct No *head) {
    struct No *atual = head; // Cria um ponteiro auxiliar que come�a no head
    printf("Lista: ");
    while (atual != NULL) { // Enquanto o ponteiro n�o for NULL (fim da lista)
        printf("%d -> ", atual->valor); // Imprime o valor do n� atual
        atual = atual->prox; // Avan�a para o pr�ximo n�
    }
    printf("NULL\n"); // Indica o fim da lista
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
    
    // Percorrendo e imprimindo a lista
    imprimirLista(lista);
    
    return 0;
}