#include <stdio.h>  // Biblioteca padrão para entrada e saída de dados
// Definindo a estrutura Endereço
struct Endereço {
    char rua[50];   // Campo para armazenar o nome da rua
    int numero;   // Campo para armazenar o número da residência
};
// Definindo a estrutura Pessoa, que contém um campo do tipo Endereço
struct Pessoa {
    char nome[50];   // Campo para armazenar o nome da pessoa
    int idade;   // Campo para armazenar a idade da pessoa
    struct Endereço endereço;  // Campo do tipo Endereço (struct aninhada)
};
int main() {
    struct Pessoa p;  // Declarando uma variável do tipo Pessoa
    // Solicitando e lendo o nome da pessoa (sem espaços)
    printf("Digite o nome: ");
    scanf("%s", p.nome);  // Lê uma string até o primeiro espaço
    // Solicitando e lendo a idade da pessoa
    printf("Digite a idade:");
    scanf("%d", &p.idade);  // Lê um número inteiro
    // Solicitando e lendo o nome da rua (sem espaços)
    printf("Digite o nome da rua: ");
    scanf("%s", p.endereço.rua);  // Lê uma string até o primeiro espaço
    // Solicitando e lendo o número da residência
    printf("Digite o número da casa: ");
    scanf("%d", &p.endereço.numero);  // Lê um número inteiro
    // Exibindo os dados coletados
    printf("\n--- Dados Cadastrados ---\n");
    printf("Nome: %s\n", p.nome);  // Exibe o nome da pessoa
    printf("Idade: %d\n", p.idade);  // Exibe a idade da pessoa
    printf("Endereço: Rua %s, Nº %d\n", p.endereço.rua, p.endereço.numero);  // Exibe o endereço completo
    return 0;  // Indica que o programa terminou com sucesso
}