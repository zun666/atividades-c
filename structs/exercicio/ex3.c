#include <stdio.h>
#include <string.h>

struct Produto {
    char nome[50];
    float preco;
};

int main() {
    struct Produto produtos[3];
    struct Produto *ptr = produtos; // Ponteiro para o vetor
    
    // Preenchendo os dados usando o ponteiro
    strcpy(ptr->nome, "Produto A");
    ptr->preco = 10.99;
    ptr++;
    
    strcpy(ptr->nome, "Produto B");
    ptr->preco = 20.50;
    ptr++;
    
    strcpy(ptr->nome, "Produto C");
    ptr->preco = 15.75;
    
    // Acessando o terceiro produto
    printf("\nTerceiro produto:\n");
    printf("Nome: %s\n", produtos[2].nome);  // Acesso via vetor
    printf("Preço: %.2f\n", (ptr-2)[2].preco); // Acesso via ponteiro
    
    return 0;
}

//Resposta à pergunta: Para acessar o terceiro produto usando o ponteiro, você pode:
//(ptr-2)[2] - Se ptr estiver apontando após o último elemento
//*(ptr + 2) - Aritmética de ponteiros
//ptr[2] - Se ptr estiver apontando para o início do vetor