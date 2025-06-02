#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno {
    char nome[40];
    float nota;
    struct Aluno *proximo;
} Aluno;

void inserirOrdenado(Aluno **lista, char nome[], float nota) {
    Aluno *novo = (Aluno*)malloc(sizeof(Aluno));
    strcpy(novo->nome, nome);
    novo->nota = nota;
    
    if(*lista == NULL || strcmp(nome, (*lista)->nome) < 0) {
        novo->proximo = *lista;
        *lista = novo;
    } else {
        Aluno *atual = *lista;
        while(atual->proximo != NULL && strcmp(nome, atual->proximo->nome) > 0) {
            atual = atual->proximo;
        }
        novo->proximo = atual->proximo;
        atual->proximo = novo;
    }
}

void imprimirLista(Aluno *lista) {
    Aluno *atual = lista;
    printf("Lista de alunos:\n");
    while(atual != NULL) {
        printf("Nome: %s, Nota: %.2f\n", atual->nome, atual->nota);
        atual = atual->proximo;
    }
}

int main() {
    Aluno *lista = NULL;
    
    inserirOrdenado(&lista, "Carlos", 8.5);
    inserirOrdenado(&lista, "Ana", 9.0);
    inserirOrdenado(&lista, "Bruno", 7.5);
    
    imprimirLista(lista);
    
    return 0;
}