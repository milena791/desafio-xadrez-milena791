#include <stdio.h>

// Definição das constantes para facilitar a manutenção do código
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

int main() {
    // Movimentação do Bispo: 5 casas na diagonal superior direita
    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < MOV_BISPO; i++) {
        printf("Direita\n");
        printf("Cima\n");
    }
    printf("---\n");

    // Movimentação da Torre: 5 casas para a direita
    printf("Movimentação da Torre:\n");
    int j = 0;
    while (j < MOV_TORRE) {
        printf("Direita\n");
        j++;
    }
    printf("---\n");

    // Movimentação da Rainha: 8 casas para a esquerda
    printf("Movimentação da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < MOV_RAINHA);
    printf("---\n");

    return 0;
}