#include <stdio.h>    // Biblioteca padr�o de entrada e sa�da
#define TAM 10    // Tomanho m�ximo do vetor

int main() {
    int vetor[TAM] = {5, 10, 20, 25, 30}; // Vetor ordenado
    int n = 5;    // N�mero atual de elementos
    int valor = 20;    // Valor que queremos excluir
    int i, j;    // Vari�veis para controle dos la�os
    int encontrado = -1; // Guarda a posi��o onde o valor foi encontrado
    
    // Etapa 1: Procurar o valor no vetor
    for (i = 0; i < n; i++) {
        printf("Comparando com posi��o %d: %d\n", i, vetor[i]);
        if (vetor[i] == valor) {    // Se encontramos o valor
            encontrado = i;    // Guardamos a posi��o
            printf("\alor %d encontrado na posi��o %d\n", valor, i);
            break;    // Paramos a busca
        } else if (vetor[i] > valor) {    // Se o valor atual for maior, n�o precisa continuar
            printf("\alor n�o encontrado (interrompido pela ordena��o).\n");
            break;
        }
    }

    // Etapa 2: Se encontramos, removemos o valor
    if (encontrado != -1) {
        // Deslocar todos os elementos seguintes para a esquerda
        for (j = encontrado; j < n - 1; j++) {
            vetor[j] = vetor[j + 1];    // Puxa o elemento seguinte para a posi��o atual
        }
        n--; // Decrementa o n�mero de elementos
        printf("\alor %d removido do vetor.\n", valor);
    } else {
        printf("\alor %d n�o encontrado no vetor.\n", valor);
    }
    
    // Mostrar o vetor atualizado
    printf("Vetor ap�s exclus�o: ");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    return 0; // Finaliza o programa
}