#include <stdio.h> // Biblioteca padr�o de entrada e sa�da (printf, scanf etc.)

// Defini��o da estrutura 'pessoa'
struct pessoa {
    int idade;    // Campo para armazenar a idade (inteiro)
    float altura;    // Campo para armazenar a altura (n�mero real)
};

// Cria��o de um apelido 'Pessoa' para 'struct pessoa'
typedef struct pessoa Pessoa;

int main() {
    // Declara��o de uma vari�vel do tipo Pessoa
    Pessoa p;

    // Atribui��o de valores aos campos da estrutura
    p.idade = 5;    // Define a idade como 5
    p.altura = 1.65;    // Define a altura como 1.65 metros

    // Impress�o dos valores armazenados na estrutura
    printf("A idade da pessoa �: %d", p.idade);    // Mostra a idade
    printf("\nA altura da pessoa �: %.2f", p.altura);    // Mostra a altura com 2 casas decimais

    return 0;   // Fim do programa
}