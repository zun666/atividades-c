#include <stdio.h>    // Inclui a biblioteca padrão de entrada e saída (para prinif)
#include <stdlib.h>    // Inclui a biblioteca padrão de alocação de memória (para malloc e free)

// Definiado uma estrutura chamada "ponto" com dois campos do tipo float
struct ponto {
    float x;    // Coordenada x do ponto
    float y;    // Coordenada y do ponto
};
// Criando um apelido "Ponto" para "struct ponto", facilitando a declaração de variáveis
typedef struct ponto Ponto;

int main() {
    // Aloca dinamicamente memória suficiente para armazenar um struct Ponto
    // e faz o ponteiro 'p' apontar para essa área de memória
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));
    // Atribui o valor 1.0 ao campo 'x' do struct apontado por 'p'
    p->x = 1;
    // Atribui o valor 5.0 ao campo 'y' do struct apontado por 'p'
    p->y = 5;
    // Imprime as coordenadas do ponto com duas casas decimais usando prinif
    printf("Ponto = (%.2f, %.2f) \n", p->x, p->y);
    // Libera a memória que foi alocada dinamicamente para evitar vazamentos de memória
    free(p);
    // Encerra o programa com retorno 0 (sucesso)
    return 0;
}