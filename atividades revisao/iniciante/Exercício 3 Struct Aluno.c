#include <stdio.h>

struct Aluno {
    char nome[40];
    float nota;
};

int main() {
    struct Aluno aluno;
    
    printf("Digite o nome do aluno: ");
    scanf("%39s", aluno.nome);
    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno.nota);
    
    printf("\nDados do aluno:\n");
    printf("Nome: %s\nNota: %.2f\n", aluno.nome, aluno.nota);
    
    return 0;
}