#include <stdio.h>  // Biblioteca padrão para entrada e saída
// Função que dobra o valor de uma variável
void dobrar(int *num) {
    *num = *num * 2;  // Acessa o valor apontado e o dobra
}
int main() {
    int valor = 10;  // Declara uma variável inteira e atribui o valor 10
    printf("Antes da função: %d\n", valor);  // Exibe o valor original
    dobrar(&valor);  // Passa o endereço da variável para a função
    printf("Depois da função: %d\n", valor);  // Exibe o valor modificado
    return 0;  // Fim do programa
}