#include <stdio.h> // Biblioteca padr�o usada para entrada e sa�da (ex: printf, scanf)
// Definindo a estrutura chamada 'Pessoa'
struct Pessoa {
    char nome[50];    // Campo para armazenar o nome da pessoa (at� 49 caracteres + '\0')
    int idade;    // Campo para a idade da pessoa (tipo inteiro)
    float altura;    // Campo para a altura da pessoa (tipo float)

};

int main() {
    struct Pessoa pessoas[3]; // Vetor com 3 posi��es, para armazenar dados de 3 pessoas
    int i;    // Vari�vel usada para controlar os Loops (for)
    // Loop para coletar os dados de 3 pessoas
    for (i = 0; i < 3; i++) {
    printf("\n--- Pessoa %d ---\n", i + 1); // Informa ao usu�rio qual pessoa est� sendo cadastrada
    printf("Digite o nome: ");
    scanf("%[\lambda], pessoas[i].nome); // L� o nome com espa�os e armazena no campo 'nome' da struct
    printf("Digite a idade: ");
    scanf("%d", &pessoas[i].idade); // L� a idade e armazena no campo 'idade'
    printf("Digite a altura (em metros): ");
    scanf("%f", &pessoas[i].altura); // L� a altura e armazena no campo 'altura'

}
// Exibi��o dos dados coletados
printf("\n\n===== Lista de Pessoas Cadastradas =====\n");
for (i = 0; i < 3; i++) {
    printf("\nPessoa %d:\n", i + 1);    // Mostra o n�mero da pessoa na lista
    printf("Nome: %s\n", pessoas[i].nome);    // Exibe o nome armazenado
    printf("Idade: %d anos\n", pessoas[i].idade);    // Exibe a idade armazenada
    printf("Altura: %.2f metros\n", pessoas[i].altura);    // Exibe a altura com duas casas decimais

}

return 0; // Encerra o programa com sucesso