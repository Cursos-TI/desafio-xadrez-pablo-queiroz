#include <stdio.h>

// Função recursiva para movimento da Torre (direita)
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimento da Rainha (esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para movimento do Bispo com loops aninhados
// O loop mais externo para movimento vertical (cima)
// O loop interno para movimento horizontal (direita)
// Para simular 1 passo diagonal, imprime "Cima" e "Direita"
void moverBispo(int casas) {
    if (casas <= 0) return;

    // Loop vertical
    for (int i = 0; i < 1; i++) {  // sempre 1 passo vertical por chamada recursiva
        printf("Cima\n");
        // Loop horizontal dentro do vertical
        for (int j = 0; j < 1; j++) {  // sempre 1 passo horizontal
            printf("Direita\n");
        }
    }
    moverBispo(casas - 1);  // chama recursivamente para a próxima casa diagonal
}

// Função para movimento do Cavalo: 2 casas para cima e 1 para a direita
// Usamos loops aninhados com múltiplas variáveis e controle por break/continue
void moverCavalo(int casasCima, int casasDireita) {
    int countCima = 0;
    int countDireita = 0;

    for (int i = 0; i < casasCima + casasDireita; i++) {
        if (countCima < casasCima) {
            printf("Cima\n");
            countCima++;
            continue;  // volta pro início do for para continuar subindo
        }
        if (countDireita < casasDireita) {
            printf("Direita\n");
            countDireita++;
            // Após mover direita, podemos sair do loop
            break;
        }
    }
}

int main() {
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;
    const int casasCavaloCima = 2;
    const int casasCavaloDireita = 1;

    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo (5 casas na diagonal para cima e direita):\n");
    moverBispo(casasBispo);

    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(casasRainha);

    printf("\nMovimento do Cavalo (2 casas para cima e 1 para a direita):\n");
    moverCavalo(casasCavaloCima, casasCavaloDireita);

    return 0;
}
