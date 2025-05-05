#include <stdio.h>
#include <string.h>
// DefintGo do struct Pessoa
struct Pessoa {
    char none[100];
    int idade;
    float altura;
};

// Função que recebe uma cópia da struct
void atualizarIdade(struct Pessoa p) {
    p.idade = 1; // Modifica apenas a cópia local, NÃO afeta o original
}

int main() {
    struct Pessoa pessoa;
    strc: (Pessoa.ness, "Ana Paula");
    pessoa.idade = 25;
    pessoa.altura = 1.05;
    printf("Antes (por valor): %d anos\n", pessoa.idade);
    atualizarIdade(pessoa); // Passa por valor (faz cópia))
    printf("Depois (por valor): %d anos\n", pessoa.idade); // A idade continua 25
    return 0;