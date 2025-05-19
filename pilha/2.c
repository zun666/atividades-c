#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó da pilha
struct No {
    int valor;
    struct No *prox;
};

// Função push: insere um novo elemento no topo da pilha
void push(struct No **topo, int valor) {
    struct No *novo = (struct No*)malloc(sizeof(struct No)); // Aloca novo nó
    novo->valor = valor;    // Atribui o valor
    novo->prox = *topo;    // Faz o novo nó apontar para o antigo topo
    *topo = novo;    // Atualiza o topo da pilha
}

// Função pop: remove o topo da pilha e retorna seu valor
int pop(struct No **topo) {
    if (*topo == NULL) {
        printf("Pilha vazia!\n");
        return -1; // Valor que indica erro
    }
    struct No *temp = *topo;    // Armazena o nó atual
    int valor = temp->valor;    // Pega o valor antes de remover
    *topo = temp->prox;    // Atualiza o topo para o próximo nó
    free(temp);    // Libera a memória do nó antigo
    return valor;    // Retorna o valor removido
}

// Função peek: retorna o valor do topo da pilha sem remover
int peek(struct No *topo) {
    if (topo == NULL) {
        printf("Pilha vazia!\n");
        return -1; // Valor finalizador
    }
    return topo->valor;    // Retorna o valor do topo
}

// Função para imprimir a pilha (visualização)
void imprimirPilha(struct No *topo) {
    printf("Topo da pilha\n");
    while (topo != NULL) {
        printf(" %d\n", topo->valor);
        topo = topo->prox;
    }
    printf("NULL\n");
}

// Função principal
int main() {
    struct No *pilha = NULL; // Pilha vazia
    
    // Inserções
    push(&pilha, 10);
    push(&pilha, 20);
    push(&pilha, 30);

    imprimirPilha(pilha); // Mostra a pilha
    
    // Consulta o topo sem remover
    printf("Valor no topo (peek): %d\n", peek(pilha));
    
    // Remove o topo
    int valorRemovido = pop(&pilha);
    printf("Valor removido (pop): %d\n", valorRemovido);
    
    // Consulta novamente após remoção
    printf("Novo topo (peek): %d\n", peek(pilha));

    imprimirPilha(pilha); // Mostra a pilha final
    
    return 0;
}