#include <stdio.h> // Biblioteca padrão usada para entrada e saída (ex: printf, scanf)
// Definindo a estrutura chamada 'Pessoa'
struct Pessoa {
    char nome[50];    // Campo para armazenar o nome da pessoa (até 49 caracteres + '\0')
    int idade;    // Campo para a idade da pessoa (tipo inteiro)
    float altura;    // Campo para a altura da pessoa (tipo float)

};

int main() {
    struct Pessoa pessoas[3]; // Vetor com 3 posições, para armazenar dados de 3 pessoas
    int i;    // Variável usada para controlar os Loops (for)
    // Loop para coletar os dados de 3 pessoas
    for (i = 0; i < 3; i++) {
    printf("\n--- Pessoa %d ---\n", i + 1); // Informa ao usuário qual pessoa está sendo cadastrada
    printf("Digite o nome: ");
    scanf("%[\lambda], pessoas[i].nome); // Lê o nome com espaços e armazena no campo 'nome' da struct
    printf("Digite a idade: ");
    scanf("%d", &pessoas[i].idade); // Lê a idade e armazena no campo 'idade'
    printf("Digite a altura (em metros): ");
    scanf("%f", &pessoas[i].altura); // Lê a altura e armazena no campo 'altura'

}
// Exibição dos dados coletados
printf("\n\n===== Lista de Pessoas Cadastradas =====\n");
for (i = 0; i < 3; i++) {
    printf("\nPessoa %d:\n", i + 1);    // Mostra o número da pessoa na lista
    printf("Nome: %s\n", pessoas[i].nome);    // Exibe o nome armazenado
    printf("Idade: %d anos\n", pessoas[i].idade);    // Exibe a idade armazenada
    printf("Altura: %.2f metros\n", pessoas[i].altura);    // Exibe a altura com duas casas decimais

}

return 0; // Encerra o programa com sucesso