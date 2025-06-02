#include <stdio.h>
#include <stdlib.h>

typedef struct Paciente {
    char nome[40];
    int idade;
    struct Paciente *proximo;
} Paciente;

typedef struct Fila {
    Paciente *inicio;
    Paciente *fim;
} Fila;

void enqueue(Fila *fila, char nome[], int idade) {
    Paciente *novo = (Paciente*)malloc(sizeof(Paciente));
    strcpy(novo->nome, nome);
    novo->idade = idade;
    novo->proximo = NULL;
    
    if(idade >= 60) {
        // Inserir no início (prioridade)
        novo->proximo = fila->inicio;
        fila->inicio = novo;
        if(fila->fim == NULL) {
            fila->fim = novo;
        }
    } else {
        // Inserir no fim
        if(fila->fim != NULL) {
            fila->fim->proximo = novo;
        } else {
            fila->inicio = novo;
        }
        fila->fim = novo;
    }
}

void imprimirFila(Fila *fila) {
    Paciente *atual = fila->inicio;
    printf("Ordem de atendimento:\n");
    while(atual != NULL) {
        printf("Nome: %s, Idade: %d\n", atual->nome, atual->idade);
        atual = atual->proximo;
    }
}

int main() {
    Fila fila = {NULL, NULL};
    char nome[40];
    int idade;
    
    for(int i = 0; i < 5; i++) {
        printf("Digite o nome do paciente %d: ", i+1);
        scanf("%39s", nome);
        printf("Digite a idade do paciente %d: ", i+1);
        scanf("%d", &idade);
        enqueue(&fila, nome, idade);
    }
    
    imprimirFila(&fila);
    
    return 0;
}