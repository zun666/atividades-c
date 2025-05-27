#include <stdio.h>
#include <stdlib.h>

struct Paciente {
    char nome[30];
    int idade;
    struct Paciente *prox;
};

void enfileirarComPrioridade(struct Paciente **inicio, struct Paciente **fim) {
    struct Paciente *novo = (struct Paciente*)malloc(sizeof(struct Paciente));
    printf("Digite o nome do paciente (sem espa�os): ");
    scanf("%s", novo->nome);
    printf("Digite a idade do paciente: ");
    scanf("%d", &novo->idade);

    novo->prox = NULL;

    if (novo->idade >= 60) {
        novo->prox = *inicio;
        *inicio = novo;
        printf("Paciente PRIORIT�RIO inserido no in�cio da fila.\n");
    } else {
        if (*fim == NULL) {
            *inicio = novo;
            *fim = novo;
        } else {
            (*fim)->prox = novo;
            *fim = novo;
        }
        printf("Paciente comum inserido no fim da fila.\n");
    }
}

void atenderPaciente(struct Paciente **inicio, struct Paciente **fim) {
    if (*inicio == NULL) {
        printf("Fila vazia! Nenhum paciente para atender.\n");
        return;
    }

    struct Paciente *temp = *inicio;
    printf("Atendendo: %s (idade %d)\n", temp->nome, temp->idade);
    *inicio = temp->prox;
    if (*inicio == NULL) *fim = NULL;
    free(temp);
}

void mostrarFila(struct Paciente *inicio) {
    if (inicio == NULL) {
        printf("Fila vazia.\n");
        return;
    }
    printf("\nFila de pacientes (priorit�rios primeiro):\n");
    while (inicio != NULL) {
        printf("- %s (idade %d)\n", inicio->nome, inicio->idade);
        inicio = inicio->prox;
    }
}

int main() {
    struct Paciente *inicio = NULL;
    struct Paciente *fim = NULL;
    int opcao;

    do {
        printf("\n=== MENU - FILA COM PRIORIDADE ====\n");
        printf("1. Inserir paciente na fila\n");
        printf("2. Atender pr�ximo paciente\n");
        printf("3. Mostrar fila\n");
        printf("0. Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);

        if (opcao == 1) enfileirarComPrioridade(&inicio, &fim);
        else if (opcao == 2) atenderPaciente(&inicio, &fim);
        else if (opcao == 3) mostrarFila(inicio);
        else if (opcao == 0) printf("Saindo do programa...\n");
        else printf("Op��o inv�lida. Tente novamente.\n");
    } while (opcao != 0);

    while (inicio != NULL) atenderPaciente(&inicio, &fim);
    return 0;
}