#include <stdio.h>
#include <stdlib.h>

// Estrutura do paciente (n� da fila)
struct Paciente {
    char nome[50]; // Nome (sem espa�os)
    int idade;
    struct Paciente *prox; // Pr�ximo paciente na fila
};

// Insere paciente no fim da fila (enqueue)
void enfileirar(struct Paciente **inicio, struct Paciente **fim) {
    struct Paciente *novo = (struct Paciente*)malloc(sizeof(struct Paciente));
    printf("Digite o nome do paciente (sem espa�os): ");
    scanf("%s", novo->nome); // L� nome do paciente
    printf("Digite a idade do paciente: ");
    scanf("%d", &novo->idade); // L� idade
    novo->prox = NULL; // Como � o �ltimo da fila, n�o aponta para ningu�m
    
    if (*inicio == NULL) {
        // Se a fila estiver vazio, novo ser� o primeiro e o �ltimo
        *inicio = novo;
        *fim = novo;
    } else {
        // Se j� houver pacientes, novo vai para o fim
        (*fim)->prox = novo;
        *fim = novo;
    }
    printf("Paciente inserido na fila com sucesso.\n");
}

// Atender paciente (remover do in�cio da fila)
void atenderPaciente(struct Paciente **inicio, struct Paciente **fim) {
    if (*inicio == NULL) {
        printf("Fila vazia! Nenhum paciente para atender.\n");
        return;
    }
    struct Paciente *temp = *inicio; // Pega o paciente que ser� atendido
    printf("Atendendo paciente: %s (idade %d)\n", temp->nome, temp->idade);

    *inicio = temp->prox; // Avan�a o in�cio da fila para o pr�ximo

    if (*inicio == NULL) {
        // Se a fila ficou vazia ap�s atender, fim tamb�m vira NULL
        *fim = NULL;
    }
    free(temp); // libera a mem�ria do paciente atendido
}

// Mostrar todos os pacientes da fila
void mostrarFila(struct Paciente *inicio) {
    if (inicio == NULL) {
        printf("Fila vazia!\n");
        return;
    }
    printf("\nFila de pacientes:\n");
    while (inicio != NULL) {
        printf("- %s (idade %d)\n", inicio->nome, inicio->idade);
        inicio = inicio->prox; // Avan�a para o pr�ximo paciente
    }
}

// Fun��o principal com menu
int main() {
    struct Paciente *inicio = NULL; // Ponteiro para o in�cio da fila
    struct Paciente *fim = NULL; // Ponteiro para o fim da fila
    int opcao;
    
    do {
        // Mostra o menu
        printf("\nMENU - FILA DE PACIENTES\n");
        printf("1. Inserir paciente na fila\n");
        printf("2. Atender pr�ximo paciente\n");
        printf("3. Mostrar fila\n");
        printf("0. Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao); // L� a op��o escolhida
        
        // Executa a op��o escolhida
        if (opcao == 1) {
            enfileirar(&inicio, &fim);
        } else if (opcao == 2) {
            atenderPaciente(&inicio, &fim);
        } else if (opcao == 3) {
            mostrarFila(inicio);
        } else if (opcao == 0) {
            printf("Encerrando o programa...\n");
        } else {
            printf("Op��o inv�lida. Tente novamente.\n");
        }
    } while (opcao != 0); // Repete at� o usu�rio escolher sair
    
    // Libera a mem�ria da fila (se ainda restar algu�m)
    while (inicio != NULL) {
        atenderPaciente(&inicio, &fim);
    }
    
    return 0;
}