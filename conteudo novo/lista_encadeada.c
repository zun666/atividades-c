#include <stdio.h>  // Biblioteca padr�o de entrada e sa�da
#include <stdlib.h>  // Biblioteca para fun��es de aloca��o din�mica

// Defini��o da estrutura do n�
typedef struct No {
    int valor;    // Valor armazenado no n�
    struct No *proximo; // Ponteiro para o pr�ximo n�
} No;

// Fun��o para inserir um novo n� no in�cio da lista
void insertr_inicio(No **inicio, int valor) {
    No *novo = malloc(sizeof(No)); // Aloca mem�ria para o novo n�
    novo->valor = valor;    // Define o valor do novo n�
    novo->proximo = *inicio;    // Faz o novo n� apontar para o antigo primeiro n�
    *inicio = novo;    // Atualiza o in�cio da lista
}

// Fun��o para imprimir a lista
void imprimir(No *inicio) {
    No *atual = inicio;    // Come�a pelo primeiro n�
    printf("Lista: ");
    while (atual != NULL) {    // Enquanto houver n�s
        printf("%d -> ", atual->valor);  // Imprime o valor
        atual = atual->proximo;    // Avan�a para o pr�ximo n�
    }
    printf("NULL\n");    // Fim da lista
}

int main() {
    No *lista = NULL; // Inicializa a lista como vazia
    
    // Inser��es
    insertr_inicio(&lista, 30);
    insertr_inicio(&lista, 20);
    insertr_inicio(&lista, 10);
    
    imprimir(lista);    // Imprime a lista encadeada
    
    return 0;
}