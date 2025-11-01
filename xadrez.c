#include <stdio.h>

int main() {
    // ===============================
    // Simulação do movimento das peças de xadrez
    // Torre → usando FOR
    // Bispo → usando WHILE
    // Rainha → usando DO-WHILE
    // ===============================

    // ---------------------------------
    // TORRE - Move 5 casas para a direita
    // Estrutura de repetição: FOR
    // ---------------------------------
    int i; // contador
    int casasTorre = 5; // número de casas a mover
    printf("=== Movimento da TORRE ===\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }

    printf("\n");

    // ---------------------------------
    // BISPO - Move 5 casas na diagonal (cima e direita)
    // Estrutura de repetição: WHILE
    // ---------------------------------
    int j = 1;
    int casasBispo = 5;
    printf("=== Movimento do BISPO ===\n");
    while (j <= casasBispo) {
        printf("Cima, Direita (%d)\n", j);
        j++;
    }

    printf("\n");

    // ---------------------------------
    // RAINHA - Move 8 casas para a esquerda
    // Estrutura de repetição: DO-WHILE
    // ---------------------------------
    int k = 1;
    int casasRainha = 8;
    printf("=== Movimento da RAINHA ===\n");
    do {
        printf("Esquerda (%d)\n", k);
        k++;
    } while (k <= casasRainha);

    printf("\n=== Fim da simulação ===\n");

    return 0;
}
