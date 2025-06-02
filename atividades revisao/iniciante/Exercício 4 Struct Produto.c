#include <stdio.h>

struct Produto {
    char nome[40];
    float preco;
};

int main() {
    struct Produto produtos[3];
    
    for(int i = 0; i < 3; i++) {
        printf("Digite o nome do produto %d: ", i+1);
        scanf("%39s", produtos[i].nome);
        printf("Digite o preço do produto %d: ", i+1);
        scanf("%f", &produtos[i].preco);
    }
    
    printf("\nProdutos cadastrados:\n");
    for(int i = 0; i < 3; i++) {
        printf("Produto %d: %s - R$%.2f\n", i+1, produtos[i].nome, produtos[i].preco);
    }
    
    return 0;
}