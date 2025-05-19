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