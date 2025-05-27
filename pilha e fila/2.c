#include <stdio.h>
#include <stdlib.h>

struct Paciente {
    char nome[30];
    int idade;
    struct Paciente *prox;
};

void inserirPaciente(struct Paciente **inicioPrioritaria, struct Paciente **fimPrioritaria,
                     struct Paciente **inicioComum, struct Paciente **fimComum) {
    struct Paciente *novo = (struct Paciente*)malloc(sizeof(struct Paciente));
    printf("Digite o nome do paciente (sem espa�os): ");
    scanf("%s", novo->nome);
    printf("Digite a idade do paciente: ");
    scanf("%d", &novo->idade);
    novo->prox = NULL;

    if (novo->idade >= 60) {
        if (*inicioPrioritaria == NULL) {
            *inicioPrioritaria = novo;
            *fimPrioritaria = novo;
        } else {
            (*fimPrioritaria)->prox = novo;
            *fimPrioritaria = novo;
        }
        printf("Paciente PRIORIT�RIO inserido.\n");
    } else {
        if (*fimComum == NULL) {
            *inicioComum = novo;
            *fimComum = novo;
        } else {
            (*fimComum)->prox = novo;
            *fimComum = novo;
        }
        printf("Paciente COMUM inserido.\n");
    }
}

void atenderPaciente(struct Paciente **inicioPrioritaria, struct Paciente **fimPrioritaria,
                     struct Paciente **inicioComum, struct Paciente **fimComum) {
    struct Paciente *temp;

    if (*inicioPrioritaria != NULL) {
        temp = *inicioPrioritaria;
        printf("Paciente PRIORIT�RIO: %s (idade %d)\n", temp->nome, temp->idade);
        *inicioPrioritaria = temp->prox;
        if (*inicioPrioritaria == NULL) *fimPrioritaria = NULL;
        free(temp);
    } else if (*inicioComum != NULL) {
        temp = *inicioComum;
        printf("Paciente COMUM: %s (idade %d)\n", temp->nome, temp->idade);
        *inicioComum = temp->prox;
        if (*inicioComum == NULL) *fimComum = NULL;
        free(temp);
    } else {
        printf("Nenhum paciente na fila.\n");
    }
}

void mostrarFila(const char *titulo, struct Paciente *inicio) {
    printf("\n%s\n", titulo);
    if (inicio == NULL) printf("(vazio)\n");
    else {
        while (inicio != NULL) {
            printf("- %s (idade %d)\n", inicio->nome, inicio->idade);
            inicio = inicio->prox;
        }
    }
}

int main() {
    struct Paciente *inicioPrioritaria = NULL, *fimPrioritaria = NULL;
    struct Paciente *inicioComum = NULL, *fimComum = NULL;
    int opcao;

    do {
        printf("\n===== MENU - FILA COM PRIORIDADE (DUAS FILAS) ====\n");
        printf("1. Inserir paciente na fila\n");
        printf("2. Atender pr�ximo paciente\n");
        printf("3. Mostrar fila completa\n");
        printf("0. Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: inserirPaciente(&inicioPrioritaria, &fimPrioritaria, &inicioComum, &fimComum); break;
            case 2: atenderPaciente(&inicioPrioritaria, &fimPrioritaria, &inicioComum, &fimComum); break;
            case 3: 
                mostrarFila("Fila PRIORIT�RIA:", inicioPrioritaria);
                mostrarFila("Fila COMUM:", inicioComum);
                break;
            case 0: printf("Encerrando...\n"); break;
            default: printf("Op��o inv�lida.\n");
        }
    } while (opcao != 0);

    while (inicioPrioritaria != NULL || inicioComum != NULL) 
        atenderPaciente(&inicioPrioritaria, &fimPrioritaria, &inicioComum, &fimComum);
    
    return 0;
}