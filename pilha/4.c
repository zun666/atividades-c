#include <stdio.h>
#include <stdlib.h>

// Defini��o da estrutura do n� da fila
struct No {
    int valor;
    struct No *prox;
};

// Fun��o para enfileirar (enqueue): insere no fim da fila
void enqueue(struct No **inicio, struct No **fim, int valor) {
    struct No *novo = (struct No*)malloc(sizeof(struct No));
    novo->valor = valor;    // Atribui valor ao novo n�
    novo->prox = NULL;    // Novo n� ser� o �ltimo, ent�o prox = NULL

    if (*fim == NULL) {
        // Se a fila est� vazia, novo n� ser� o primeiro e o �ltimo
        *inicio = novo;
        *fim = novo;
    } else {
        (*fim)->prox = novo;    // Conecta o atual �ltimo ao novo n�
        *fim = novo;    // Atualiza o fim da fila
    }
}

// Fun��o para desenfileirar (dequeue): remove do in�cio da fila
int dequeue(struct No **inicio, struct No **fim) {
    if (*inicio == NULL) {
        printf("Fila vazia!\n");
        return -1;
    }
    struct No *temp = *inicio;    // Guarda o n� a ser removido
    int valor = temp->valor;    // Armazena o valor para retorno
    *inicio = temp->prox;    // Avan�a o ponteiro do in�cio

    if (*inicio == NULL) {
        // Se a fila ficou vazia, zera tamb�m o fim
        *fim = NULL;
    }
    free(temp);    // Libera a mem�ria do n� removido
    return valor;
}

// Fun��o para consultar o in�cio da fila (peek)
int peek(struct No *inicio) {
    if (inicio == NULL) {
        printf("Fila vazia!\n");
        return -1;
    }
    return inicio->valor;    // Retorna o valor do in�cio sem remover
}

// Fun��o para imprimir a fila do in�cio ao fim
void imprimirFila(struct No *inicio) {
    printf("In�cio da fila\n");
    while (inicio != NULL) {
        printf(" %d\n", inicio->valor);
        inicio = inicio->prox;
    }
    printf("NULL (fim)\n");
}

// Fun��o principal
int main() {
    struct No *inicio = NULL;    // Ponteiro para o in�cio da fila
    struct No *fim = NULL;    // Ponteiro para o fim da fila
    
    // Enfileira tr�s elementos
    enqueue(&inicio, &fim, 10);
    enqueue(&inicio, &fim, 20);
    enqueue(&inicio, &fim, 30);
    
    // Mostra a fila atual
    imprimirFila(inicio);
    
    // Consulta o primeiro elemento
    printf("In�cio da fila (peek): %d\n", peek(inicio));
    
    // Remove um elemento da fila
    int removido = dequeue(&inicio, &fim);
    printf("Removido da fila (dequeue): %d\n", removido);
    
    // Mostra a fila ap�s remo��o
    imprimirFila(inicio);
    
    return 0;
}