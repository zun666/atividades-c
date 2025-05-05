#include <stdio.h>  // Biblioteca padr�o para entrada e sa�da de dados
// Definindo a estrutura Endere�o
struct Endere�o {
    char rua[50];   // Campo para armazenar o nome da rua
    int numero;   // Campo para armazenar o n�mero da resid�ncia
};
// Definindo a estrutura Pessoa, que cont�m um campo do tipo Endere�o
struct Pessoa {
    char nome[50];   // Campo para armazenar o nome da pessoa
    int idade;   // Campo para armazenar a idade da pessoa
    struct Endere�o endere�o;  // Campo do tipo Endere�o (struct aninhada)
};
int main() {
    struct Pessoa p;  // Declarando uma vari�vel do tipo Pessoa
    // Solicitando e lendo o nome da pessoa (sem espa�os)
    printf("Digite o nome: ");
    scanf("%s", p.nome);  // L� uma string at� o primeiro espa�o
    // Solicitando e lendo a idade da pessoa
    printf("Digite a idade:");
    scanf("%d", &p.idade);  // L� um n�mero inteiro
    // Solicitando e lendo o nome da rua (sem espa�os)
    printf("Digite o nome da rua: ");
    scanf("%s", p.endere�o.rua);  // L� uma string at� o primeiro espa�o
    // Solicitando e lendo o n�mero da resid�ncia
    printf("Digite o n�mero da casa: ");
    scanf("%d", &p.endere�o.numero);  // L� um n�mero inteiro
    // Exibindo os dados coletados
    printf("\n--- Dados Cadastrados ---\n");
    printf("Nome: %s\n", p.nome);  // Exibe o nome da pessoa
    printf("Idade: %d\n", p.idade);  // Exibe a idade da pessoa
    printf("Endere�o: Rua %s, N� %d\n", p.endere�o.rua, p.endere�o.numero);  // Exibe o endere�o completo
    return 0;  // Indica que o programa terminou com sucesso
}