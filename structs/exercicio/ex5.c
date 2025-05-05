#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Livro {
    char titulo[100];
    int paginas;
};

int main() {
    // Aloca��o din�mica para 2 livros
    struct Livro *livros = (struct Livro*)malloc(2 * sizeof(struct Livro));
    
    if (livros == NULL) {
        printf("Erro na aloca��o de mem�ria\n");
        return 1;
    }
    
    // Preenchendo os dados
    strcpy(livros[0].titulo, "Dom Casmurro");
    livros[0].paginas = 256;
    
    strcpy(livros[1].titulo, "1984");
    livros[1].paginas = 328;
    
    // Liberando a mem�ria
    free(livros);
    
    return 0;
}

//Resposta � pergunta: O comando correto para alocar mem�ria para 2 livros �:
struct Livro *livros = (struct Livro*)malloc(2 * sizeof(struct Livro));
//Isso aloca espa�o suficiente para 2 estruturas Livro e retorna um ponteiro para o in�cio do bloco alocado.