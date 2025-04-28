#include <stdio.h>  // Biblioteca padrão de entrada e saída
#include <stdlib.h>  // Biblioteca para funções de alocação dinâmica

// Definição da estrutura do nó
typedef struct No {
    int valor;    // Valor armazenado no nó
    struct No *proximo; // Ponteiro para o próximo nó
} No;

// Função para inserir um novo nó no início da lista
void insertr_inicio(No **inicio, int valor) {
    No *novo = malloc(sizeof(No)); // Aloca memória para o novo nó
    novo->valor = valor;    // Define o valor do novo nó
    novo->proximo = *inicio;    // Faz o novo nó apontar para o antigo primeiro nó
    *inicio = novo;    // Atualiza o início da lista
}

// Função para imprimir a lista
void imprimir(No *inicio) {
    No *atual = inicio;    // Começa pelo primeiro nó
    printf("Lista: ");
    while (atual != NULL) {    // Enquanto houver nós
        printf("%d -> ", atual->valor);  // Imprime o valor
        atual = atual->proximo;    // Avança para o próximo nó
    }
    printf("NULL\n");    // Fim da lista
}

int main() {
    No *lista = NULL; // Inicializa a lista como vazia
    
    // Inserções
    insertr_inicio(&lista, 30);
    insertr_inicio(&lista, 20);
    insertr_inicio(&lista, 10);
    
    imprimir(lista);    // Imprime a lista encadeada
    
    return 0;
}