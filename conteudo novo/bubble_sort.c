#include <stdio.h>    // Inclui a biblioteca padr�o de entrada e sa�da
#define TAM 5    // Define o tamanho do vetor como 5

int main() {    // Fun��o principal do programa
    int numeros[TAM] = {50, 10, 30, 20, 40}; // Declara o vetor com 5 n�meros desordenados
    int i, j, temp;    // Declara vari�veis auxiliares para os La�os e para a troca de valores
    
    // Algoritmo Bubble sort: ordena o vetor em ordem crescente
    for (i = 0; i < TAM - 1; i++) {    // La�o externo: controla quantas vezes vamos passar no vetor
        for (j = 0; j < TAM - 1 - i; j++) {    // La�o interno: compara elementos adjacentes
            if (numeros[j] > numeros[j + 1]) {    // Se o n�mero atual for maior que o pr�ximo
                temp = numeros[j];    // Guarda o n�mero atual em uma vari�vel tempor�ria
                numeros[j] = numeros[j + 1];    // Move o pr�ximo n�mero para a posi��o atual
                numeros[j + 1] = temp;    // Coloca o n�mero guardado na posi��o seguinte
            }
        }
    }

    // Imprime o vetor j� ordenado
    printf("Vetor ordenado: ");
    for (i = 0; i < TAM; i++) {    // La�o para percorrer o vetor
        printf("%d ", numeros[i]);
    }
    printf("\n");    // Quebra de linha no final
    
    return 0; // Finaliza o programa
}