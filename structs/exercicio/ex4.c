#include <stdio.h>

struct Pessoa {
    float altura;
};

void atualizarAltura(struct Pessoa *p) {
    p->altura *= 1.10; // Aumenta a altura em 10%
}

int main() {
    struct Pessoa pessoa = {1.75};
    
    printf("Altura antes: %.2f\n", pessoa.altura);
    atualizarAltura(&pessoa);
    printf("Altura depois: %.2f\n", pessoa.altura);
    
    return 0;
}

//Resposta à pergunta: A função deve receber um ponteiro porque:

//Quando passamos uma struct comum (por valor), é criada uma cópia e as alterações não afetam o original

//Com ponteiros (passagem por referência), trabalhamos diretamente com a struct original

//É mais eficiente (evita copiar toda a struct)