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

//Resposta � pergunta: A fun��o deve receber um ponteiro porque:

//Quando passamos uma struct comum (por valor), � criada uma c�pia e as altera��es n�o afetam o original

//Com ponteiros (passagem por refer�ncia), trabalhamos diretamente com a struct original

//� mais eficiente (evita copiar toda a struct)