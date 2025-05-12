#include <stdio.h>

#define TAMANHO 10

int main() {
    char tabuleiro[TAMANHO][TAMANHO];

    // Inicializa o tabuleiro 
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = '0';
        }
    }

    // Posiciona navio HORIZONTAL na linha 3 (C), colunas 4-6
    tabuleiro[2][3] = '3'; 
    tabuleiro[2][4] = '3';
    tabuleiro[2][5] = '3';

    // Posiciona navio VERTICAL na coluna 8 (H), linhas 6-9
    tabuleiro[5][7] = '3'; 
    tabuleiro[6][7] = '3';
    tabuleiro[7][7] = '3';
    tabuleiro[8][7] = '3';

    // Exibe o tabuleiro
    printf("   A B C D E F G H I J\n"); // Cabeçalho das colunas
    for (int i = 0; i < TAMANHO; i++) {
        printf("%2d ", i + 1); // Números das linhas (1-10)
        for (int j = 0; j < TAMANHO; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}