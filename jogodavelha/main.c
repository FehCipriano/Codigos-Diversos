#include <stdio.h>

// Função para imprimir o tabuleiro do jogo da velha
void printmatriz(char matriz[3][3]) {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Função para verificar se alguém ganhou
int checarwin(char matriz[3][3], char player) {
    for (int i = 0; i < 3; i++) {
        if (matriz[i][0] == player && matriz[i][1] == player && matriz[i][2] == player) {
            return 1; // Linha completa
        }
        if (matriz[0][i] == player && matriz[1][i] == player && matriz[2][i] == player) {
            return 1; // Coluna completa
        }
    }
    if (matriz[0][0] == player && matriz[1][1] == player && matriz[2][2] == player) {
        return 1; // Diagonal principal
    }
    if (matriz[0][2] == player && matriz[1][1] == player && matriz[2][0] == player) {
        return 1; // Diagonal secundária
    }
    return 0; // Ninguém ganhou ainda
}

int main() {
    char matriz[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int thePlayer = 1;
    int totalmovimentos = 0;

    printf("Bem-vindo ao Jogo da Velha!\n");

    while (1) {
        printf("\n");
        printmatriz(matriz);

        int linha, coluna;
        printf("Jogador %d, digite a linha e a coluna (por exemplo, 1 2): ", thePlayer);
        scanf("%d %d", &linha, &coluna);

        if (linha < 1 || linha > 3 || coluna < 1 || coluna > 3 || matriz[linha - 1][coluna - 1] != ' ') {
            printf("Jogada invalida. Tente novamente.\n");
            continue;
        }

        if (thePlayer == 1) {
            matriz[linha - 1][coluna - 1] = 'X';
            thePlayer = 2;
        } else {
            matriz[linha - 1][coluna - 1] = 'O';
            thePlayer = 1;
        }

        totalmovimentos++;

        if (checarwin(matriz, 'X')) {
            printf("\nJogador 1 (X) venceu!\n");
            break;
        } else if (checarwin(matriz, 'O')) {
            printf("\nJogador 2 (O) venceu!\n");
            break;
        } else if (totalmovimentos == 9) {
            printf("\nEmpate! O jogo terminou sem vencedor.\n");
            break;
        }
    }

    printmatriz(matriz);
    return 0;
}


    
