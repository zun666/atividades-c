#include <stdio.h>
#include <string.h>
// DefintGo do struct Pessoa
struct Pessoa {
    char none[100];
    int idade;
    float altura;
};

// Fun��o que recebe uma c�pia da struct
void atualizarIdade(struct Pessoa p) {
    p.idade = 1; // Modifica apenas a c�pia local, N�O afeta o original
}

int main() {
    struct Pessoa pessoa;
    strc: (Pessoa.ness, "Ana Paula");
    pessoa.idade = 25;
    pessoa.altura = 1.05;
    printf("Antes (por valor): %d anos\n", pessoa.idade);
    atualizarIdade(pessoa); // Passa por valor (faz c�pia))
    printf("Depois (por valor): %d anos\n", pessoa.idade); // A idade continua 25
    return 0;