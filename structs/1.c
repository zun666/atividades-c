#include <stdio.h> // Biblioteca padrão de entrada e saída (printf, scanf etc.)

// Definição da estrutura 'pessoa'
struct pessoa {
    int idade;    // Campo para armazenar a idade (inteiro)
    float altura;    // Campo para armazenar a altura (número real)
};

// Criação de um apelido 'Pessoa' para 'struct pessoa'
typedef struct pessoa Pessoa;

int main() {
    // Declaração de uma variável do tipo Pessoa
    Pessoa p;

    // Atribuição de valores aos campos da estrutura
    p.idade = 5;    // Define a idade como 5
    p.altura = 1.65;    // Define a altura como 1.65 metros

    // Impressão dos valores armazenados na estrutura
    printf("A idade da pessoa é: %d", p.idade);    // Mostra a idade
    printf("\nA altura da pessoa é: %.2f", p.altura);    // Mostra a altura com 2 casas decimais

    return 0;   // Fim do programa
}