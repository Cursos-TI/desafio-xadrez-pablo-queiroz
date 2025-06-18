#include <stdio.h>

int main() {
    // Quantidade de casas que cada peça vai se mover
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    printf("Movimento da Torre (5 casas para a direita):\n");
    // Torre usa for para mover 5 casas para a direita
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\nMovimento do Bispo (5 casas na diagonal para cima e direita):\n");
    // Bispo usa while para mover 5 casas na diagonal cima-direita
    int countBispo = 0;
    while (countBispo < casasBispo) {
        printf("Cima, Direita\n");
        countBispo++;
    }

    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    // Rainha usa do-while para mover 8 casas para a esquerda
    int countRainha = 0;
    do {
        printf("Esquerda\n");
        countRainha++;
    } while (countRainha < casasRainha);

    return 0;
}
