#include <stdio.h>
#include <stdlib.h>

// Estrutura do n�
struct No {
    int valor;
    struct No *prox;
};

// Fun��o para remover um n� com valor espec�fico
struct No* removerElemento(struct No *head, int valorRemover) {
    // 1. Verifica se a lista est� vazia
    if (head == NULL) {
        printf("Lista vazia.\n");
        return NULL;
    }

    // 2. Verifica se o valor est� no primeiro n�
    if (head->valor == valorRemover) {
        struct No *temp = head;    // Guarda o n� a ser removido
        head = head->prox;    // Atualiza o head para o pr�ximo n�
        free(temp);    // Libera o n� removido
        return head;    // Retorna o novo head
    }

    // 3. Caso contr�rio, percorre a lista procurando o valor
    struct No *anterior = head;
    struct No *atual = head->prox;
    while (atual != NULL && atual->valor != valorRemover) {
        anterior = atual;
        atual = atual->prox;
    }

    // 4. Se n�o encontrou o valor
    if (atual == NULL) {
        printf("Valor %d n�o encontrado na lista.\n", valorRemover);
        return head;
    }

    // 5. Encontrou o valor: remove o n�
    anterior->prox = atual->prox; // Pula o n� a ser removido
    free(atual);    // Libera a mem�ria do n�
    return head;    // Retorna o head da lista
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
    // Criando a lista [10 -> 20 -> 30 -> 40]
    lista = inserirNoFim(lista, 10);
    lista = inserirNoFim(lista, 20);
    lista = inserirNoFim(lista, 30);
    lista = inserirNoFim(lista, 40);
    imprimirLista(lista); // Mostra a lista inicial
    
    // Remover o valor 30
    lista = removerElemento(lista, 30);
    imprimirLista(lista); // Esperado: 10 -> 20 -> 40 -> NULL
    
    // Tentar remover valor inexistente
    lista = removerElemento(lista, 99);
    
    // Remover o primeiro elemento (10)
    lista = removerElemento(lista, 10);
    imprimirLista(lista); // Esperado: 20 -> 40 -> NULL
    
    return 0;
}