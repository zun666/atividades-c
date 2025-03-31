#include <stdio.h>

#define MAX 100

int vetor[MAX];
int tamanho = 0;

void inserirValores() {
    printf("Quantos valores deseja inserir? ");
    scanf("%d", &tamanho);
    
    printf("Digite os valores:\n");
    for(int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
}

void mostrarValores() {
    if(tamanho == 0) {
        printf("Vetor vazio!\n");
        return;
    }
    
    printf("Valores no vetor:\n");
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void somarElementos() {
    if(tamanho == 0) {
        printf("Vetor vazio!\n");
        return;
    }
    
    int soma = 0;
    for(int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    
    printf("Soma dos elementos: %d\n", soma);
}

void calcularMedia() {
    if(tamanho == 0) {
        printf("Vetor vazio!\n");
        return;
    }
    
    float soma = 0;
    for(int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    
    printf("Média dos elementos: %.2f\n", soma/tamanho);
}

int main() {
    int opcao;
    
    do {
        printf("\nMenu:\n");
        printf("1- Inserir valores no vetor\n");
        printf("2- Mostrar valores\n");
        printf("3- Somar elementos\n");
        printf("4- Calcular média\n");
        printf("5- Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1: inserirValores(); break;
            case 2: mostrarValores(); break;
            case 3: somarElementos(); break;
            case 4: calcularMedia(); break;
            case 5: printf("Saindo...\n"); break;
            default: printf("Opção inválida!\n");
        }
    } while(opcao != 5);
    
    return 0;
}