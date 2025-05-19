#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura do n� da lista
struct No {
    int valor;    // Valor armazenado no n�
    struct No *prox;    // Ponteiro para o pr�ximo n�
};

// Fun��o para inserir um novo n� no in�cio da lista
struct No* inserirNoInicio(struct No *head, int novoValor) {
    struct No *novoNo = (struct No*)malloc(sizeof(struct No)); // Aloca mem�ria para o novo n�
    novoNo->valor = novoValor;    // Atribui o valor desejado ao novo n�
    novoNo->prox = head;    // Faz o ponteiro 'prox' do novo n� apontar para o antigo primeiro n� (head)
    return novoNo;    // Retorna o novo n� como sendo o novo in�cio (head) da lista
}

// Fun��o para imprimir a lista encadeada
void imprimirLista(struct No *head) {
    struct No *atual = head;    // Cria um ponteiro auxiliar para percorrer a lista
    printf("Lista: ");
    while (atual != NULL) {
        printf("%d -> ", atual->valor);    // Enquanto n�o chegar no final (NULL)
        atual = atual->prox;    // Avan�a para o pr�ximo n�
    }
    printf("NULL\n");    // Indica o fim da lista
}

int main() {
    struct No *lista = NULL;    // Inicialmente a lista est� vazia (NULL)
    
    // Vamos construir a lista inicial [10 | *] + [20 | *] + [30 | NULL]
    lista = inserirNoInicio(lista, 30);    // Insere 30 no in�cio -> lista = [30 | NULL]
    lista = inserirNoInicio(lista, 20);    // Insere 20 no in�cio -> lista = [20 | *] + [30 | NULL]
    lista = inserirNoInicio(lista, 10);    // Insere 10 no in�cio -> lista = [10 | *] + [20 | *] + [30 | NULL]
    
    // Agora vamos inserir o valor 5 no in�cio -> queremos [5 | *] + [10 | *] + [20 | *] + [30 | NULL]
    lista = inserirNoInicio(lista, 5);
    
    // Imprimir a lista final
    imprimirLista(lista);
    
    return 0;
}