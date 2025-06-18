#include <stdio.h>

int main() {
    // Quantidade de casas que cada peça vai se mover
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;
    const int casasCavaloBaixo = 2;
    const int casasCavaloEsquerda = 1;

    // Movimento da Torre (for)
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (while)
    printf("\nMovimento do Bispo (5 casas na diagonal para cima e direita):\n");
    int countBispo = 0;
    while (countBispo < casasBispo) {
        printf("Cima, Direita\n");
        countBispo++;
    }

    // Movimento da Rainha (do-while)
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int countRainha = 0;
    do {
        printf("Esquerda\n");
        countRainha++;
    } while (countRainha < casasRainha);

    // Movimento do Cavalo (loops aninhados: for e while)
    printf("\nMovimento do Cavalo (2 casas para baixo e 1 casa para a esquerda):\n");

    // Primeiro, mover 2 casas para baixo (usando for)
    for (int i = 0; i < casasCavaloBaixo; i++) {
        printf("Baixo\n");
    }

    // Depois, mover 1 casa para a esquerda (usando while)
    int countEsquerda = 0;
    while (countEsquerda < casasCavaloEsquerda) {
        printf("Esquerda\n");
        countEsquerda++;
    }

    return 0;
}
