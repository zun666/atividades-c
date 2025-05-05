#include <stdio.h>
#include <string.h>

// Definição da struct Aluno
struct Aluno {
    char nome[40];
    float nota;
};

int main() {
    // Declaração de uma variável do tipo Aluno
    struct Aluno aluno;
    
    // Declaração de um ponteiro para Aluno
    struct Aluno *ptr_aluno = &aluno;
    
    // Preenchimento dos dados usando o ponteiro
    strcpy(ptr_aluno->nome, "João Silva");
    ptr_aluno->nota = 8.5;
    
    // Impressão dos dados usando o ponteiro
    printf("Dados do Aluno:\n");
    printf("Nome: %s\n", ptr_aluno->nome);
    printf("Nota: %.2f\n", ptr_aluno->nota);
    
    return 0;
}

//Resposta à pergunta: A sintaxe correta para acessar os campos da struct usando um ponteiro é:
//Usando o operador seta (->):
//ponteiro->campo
//Exemplo:
//ptr_aluno->nome
//ptr_aluno->nota
//Alternativamente, pode-se usar derreferenciamento com parênteses e o operador ponto:
//(*ponteiro).campo
//Exemplo:
//(*ptr_aluno).nome
//(*ptr_aluno).nota