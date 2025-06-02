#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct No {
    char letra;
    struct No *proximo;
} No;

void push(No **topo, char letra) {
    No *novo = (No*)malloc(sizeof(No));
    novo->letra = letra;
    novo->proximo = *topo;
    *topo = novo;
}

char pop(No **topo) {
    if(*topo == NULL) return '\0';
    No *temp = *topo;
    char letra = temp->letra;
    *topo = (*topo)->proximo;
    free(temp);
    return letra;
}

int ehPalindromo(char *palavra) {
    No *topo = NULL;
    int len = strlen(palavra);
    
    // Empilhar todas as letras
    for(int i = 0; i < len; i++) {
        push(&topo, tolower(palavra[i]));
    }
    
    // Verificar desempilhando
    for(int i = 0; i < len; i++) {
        if(tolower(palavra[i]) != pop(&topo)) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char palavra[100];
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    if(ehPalindromo(palavra)) {
        printf("'%s' é um palíndromo!\n", palavra);
    } else {
        printf("'%s' não é um palíndromo.\n", palavra);
    }
    
    return 0;
}