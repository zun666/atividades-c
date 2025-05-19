#include <stdio.h>
#include <stdlib.h>

// Defini��o da estrutura do n� da pilha
struct No {
    int valor;
    struct No *prox;
};

// Fun��o push: insere um novo elemento no topo da pilha
void push(struct No **topo, int valor) {
    struct No *novo = (struct No*)malloc(sizeof(struct No)); // Aloca novo n�
    novo->valor = valor;    // Atribui o valor
    novo->prox = *topo;    // Faz o novo n� apontar para o antigo topo
    *topo = novo;    // Atualiza o topo da pilha
}

// Fun��o pop: remove o topo da pilha e retorna seu valor
int pop(struct No **topo) {
    if (*topo == NULL) {
        printf("Pilha vazia!\n");
        return -1; // Valor que indica erro
    }
    struct No *temp = *topo;    // Armazena o n� atual
    int valor = temp->valor;    // Pega o valor antes de remover
    *topo = temp->prox;    // Atualiza o topo para o pr�ximo n�
    free(temp);    // Libera a mem�ria do n� antigo
    return valor;    // Retorna o valor removido
}

// Fun��o peek: retorna o valor do topo da pilha sem remover
int peek(struct No *topo) {
    if (topo == NULL) {
        printf("Pilha vazia!\n");
        return -1; // Valor finalizador
    }
    return topo->valor;    // Retorna o valor do topo
}

// Fun��o para imprimir a pilha (visualiza��o)
void imprimirPilha(struct No *topo) {
    printf("Topo da pilha\n");
    while (topo != NULL) {
        printf(" %d\n", topo->valor);
        topo = topo->prox;
    }
    printf("NULL\n");
}

// Fun��o principal
int main() {
    struct No *pilha = NULL; // Pilha vazia
    
    // Inser��es
    push(&pilha, 10);
    push(&pilha, 20);
    push(&pilha, 30);

    imprimirPilha(pilha); // Mostra a pilha
    
    // Consulta o topo sem remover
    printf("Valor no topo (peek): %d\n", peek(pilha));
    
    // Remove o topo
    int valorRemovido = pop(&pilha);
    printf("Valor removido (pop): %d\n", valorRemovido);
    
    // Consulta novamente ap�s remo��o
    printf("Novo topo (peek): %d\n", peek(pilha));

    imprimirPilha(pilha); // Mostra a pilha final
    
    return 0;
}