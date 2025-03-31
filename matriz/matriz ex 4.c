#include <stdio.h>

void exibirTabuleiro(char tabuleiro[3][3]) {
    printf("\n  0 1 2\n");
    for(int i = 0; i < 3; i++) {
        printf("%d ", i);
        for(int j = 0; j < 3; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int verificarVencedor(char tabuleiro[3][3]) {
    // Verifica linhas e colunas
    for(int i = 0; i < 3; i++) {
        if(tabuleiro[i][0] != ' ' && tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2])
            return 1;
        if(tabuleiro[0][i] != ' ' && tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i])
            return 1;
    }
    
    // Verifica diagonais
    if(tabuleiro[0][0] != ' ' && tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2])
        return 1;
    if(tabuleiro[0][2] != ' ' && tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0])
        return 1;
    
    return 0;
}

int main() {
    char tabuleiro[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int linha, coluna, jogadas = 0;
    char jogador = 'X';

    printf("Jogo da Velha\n");
    exibirTabuleiro(tabuleiro);

    while(jogadas < 9) {
        printf("\nJogador %c, digite linha e coluna (0-2): ", jogador);
        scanf("%d %d", &linha, &coluna);

        if(linha < 0 || linha > 2 || coluna < 0 || coluna > 2) {
            printf("Posicao invalida!\n");
            continue;
        }

        if(tabuleiro[linha][coluna] != ' ') {
            printf("Posicao ja ocupada!\n");
            continue;
        }

        tabuleiro[linha][coluna] = jogador;
        jogadas++;
        exibirTabuleiro(tabuleiro);

        if(verificarVencedor(tabuleiro)) {
            printf("\nJogador %c venceu!\n", jogador);
            return 0;
        }

        jogador = (jogador == 'X') ? 'O' : 'X';
    }

    printf("\nEmpate!\n");
    return 0;
}