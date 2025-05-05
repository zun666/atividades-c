#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Livro {
    char titulo[100];
    int paginas;
};

int main() {
    // Alocação dinâmica para 2 livros
    struct Livro *livros = (struct Livro*)malloc(2 * sizeof(struct Livro));
    
    if (livros == NULL) {
        printf("Erro na alocação de memória\n");
        return 1;
    }
    
    // Preenchendo os dados
    strcpy(livros[0].titulo, "Dom Casmurro");
    livros[0].paginas = 256;
    
    strcpy(livros[1].titulo, "1984");
    livros[1].paginas = 328;
    
    // Liberando a memória
    free(livros);
    
    return 0;
}

//Resposta à pergunta: O comando correto para alocar memória para 2 livros é:
struct Livro *livros = (struct Livro*)malloc(2 * sizeof(struct Livro));
//Isso aloca espaço suficiente para 2 estruturas Livro e retorna um ponteiro para o início do bloco alocado.