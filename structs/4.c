#include <stdio.h>  // Biblioteca padr�o para entrada e sa�da
// Fun��o que dobra o valor de uma vari�vel
void dobrar(int *num) {
    *num = *num * 2;  // Acessa o valor apontado e o dobra
}
int main() {
    int valor = 10;  // Declara uma vari�vel inteira e atribui o valor 10
    printf("Antes da fun��o: %d\n", valor);  // Exibe o valor original
    dobrar(&valor);  // Passa o endere�o da vari�vel para a fun��o
    printf("Depois da fun��o: %d\n", valor);  // Exibe o valor modificado
    return 0;  // Fim do programa
}