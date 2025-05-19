#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para representar uma p�gina
struct Pagina {
    char url[100];
    struct Pagina *prox;
};

// Fun��o para acessar uma nova p�gina (push)
void acessarPagina(struct Pagina **topo, const char *endereco) {
    struct Pagina *nova = (struct Pagina *)malloc(sizeof(struct Pagina));
    strcpy(nova->url, endereco); // Copia o endere�o da nova p�gina
    nova->prox = *topo; // Aponta para a p�gina anterior
    *topo = nova; // Atualiza o topo da pilha
}

// Fun��o para voltar para a p�gina anterior (pop)
void voltarPagina(struct Pagina **topo) {
    if (*topo == NULL) {
        printf("Nenhuma p�gina para voltar.\n");
        return;
    }
    struct Pagina *temp = *topo;
    printf("Voltando da p�gina: %s\n", temp->url);
    *topo = temp->prox; // Atualiza o topo
    free(temp); // Libera o n� removido
}

// Fun��o para mostrar a p�gina atual
void mostrarPaginaAtual(struct Pagina *topo) {
    if (topo == NULL) {
        printf("Nenhuma p�gina aberta.\n");
    } else {
        printf("P�gina atual: %s\n", topo->url);
    }
}

// Fun��o para mostrar o hist�rico (todas os n�s da pilha)
void mostrarHistorico(struct Pagina *topo) {
    if (topo == NULL) {
        printf("Hist�rico vazio.\n");
        return;
    }
    printf("Hist�rico de p�ginas visitadas:\n");
    while (topo != NULL) {
        printf(" - %s\n", topo->url);
        topo = topo->prox;
    }
}

// Fun��o principal com menu interativo
int main() {
    struct Pagina *pilha = NULL; // Pilha de p�ginas
    int opcao;
    char url[100];
    
    do {
        printf("\n==== MENU DO NAVEGADOR ====\n");
        printf("1. Acessar nova p�gina\n");
        printf("2. Voltar p�gina anterior\n");
        printf("3. Ver p�gina atual\n");
        printf("4. Mostrar hist�rico\n");
        printf("0. Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);
        getchar(); // Limpa o '\n' deixado pelo scanf
        
        switch (opcao) {
            case 1:
                printf("Digite a URL da nova p�gina: ");
                fgets(url, sizeof(url), stdin);
                url[strcspn(url, "\n")] = '\0'; // Remove o \n do final
                acessarPagina(&pilha, url);
                break;
            case 2:
                voltarPagina(&pilha);
                break;
            case 3:
                mostrarPaginaAtual(pilha);
                break;
            case 4:
                mostrarHistorico(pilha);
                break;
            case 0:
                printf("Saindo do navegador...\n");
                break;
            default:
                printf("Op��o inv�lida. Tente novamente.\n");
        }
    } while (opcao != 0);
    
    // Libera mem�ria restante (pilha completa)
    while (pilha != NULL) {
        voltarPagina(&pilha);
    }
    
    return 0;
}