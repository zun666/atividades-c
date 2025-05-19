#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó
struct No {
    int valor;
    struct No *prox;
};

// Função para remover um nó com valor específico
struct No* removerElemento(struct No *head, int valorRemover) {
    // 1. Verifica se a lista está vazia
    if (head == NULL) {
        printf("Lista vazia.\n");
        return NULL;
    }

    // 2. Verifica se o valor está no primeiro nó
    if (head->valor == valorRemover) {
        struct No *temp = head;    // Guarda o nó a ser removido
        head = head->prox;    // Atualiza o head para o próximo nó
        free(temp);    // Libera o nó removido
        return head;    // Retorna o novo head
    }

    // 3. Caso contrário, percorre a lista procurando o valor
    struct No *anterior = head;
    struct No *atual = head->prox;
    while (atual != NULL && atual->valor != valorRemover) {
        anterior = atual;
        atual = atual->prox;
    }

    // 4. Se não encontrou o valor
    if (atual == NULL) {
        printf("Valor %d não encontrado na lista.\n", valorRemover);
        return head;
    }

    // 5. Encontrou o valor: remove o nó
    anterior->prox = atual->prox; // Pula o nó a ser removido
    free(atual);    // Libera a memória do nó
    return head;    // Retorna o head da lista
}