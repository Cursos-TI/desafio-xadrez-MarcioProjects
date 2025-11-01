#include <stdio.h>

// ===============================================
// Funções recursivas e loops complexos para simular
// os movimentos das peças de xadrez.
// ===============================================

// -----------------------------------------------
// Função recursiva para a TORRE
// Move 'casas' vezes para a direita.
// -----------------------------------------------
void moverTorre(int passo, int casas) {
    if (passo > casas) {
        return; // caso base: fim da recursão
    }
    printf("Direita (%d)\n", passo);
    moverTorre(passo + 1, casas); // chamada recursiva
}

// -----------------------------------------------
// Função recursiva para o BISPO
// Move em diagonal (Cima + Direita), usando
// loops aninhados dentro da recursividade.
// -----------------------------------------------
void moverBispo(int passo, int casas) {
    if (passo > casas) {
        return; // caso base
    }

    // Loop externo (vertical)
    for (int v = 1; v <= 1; v++) {
        // Loop interno (horizontal)
        for (int h = 1; h <= 1; h++) {
            printf("Cima, Direita (%d)\n", passo);
        }
    }

    moverBispo(passo + 1, casas); // chamada recursiva
}

// -----------------------------------------------
// Função recursiva para a RAINHA
// Move 'casas' vezes para a esquerda.
// -----------------------------------------------
void moverRainha(int passo, int casas) {
    if (passo > casas) {
        return; // caso base
    }
    printf("Esquerda (%d)\n", passo);
    moverRainha(passo + 1, casas);
}

// -----------------------------------------------
// Função com loops complexos para o CAVALO
// Move em "L": duas casas para cima e uma para a direita.
// Utiliza múltiplas variáveis, condições, continue e break.
// -----------------------------------------------
void moverCavalo() {
    int movimentos = 0;
    int casasCima = 2;
    int casasDireita = 1;

    printf("=== Movimento do CAVALO ===\n");

    // Loop externo controla o movimento vertical (Cima)
    for (int i = 1; i <= casasCima; i++) {
        // Condição extra — se o cavalo atingir a segunda casa, imprime mensagem
        if (i == 2) {
            printf("Cima (%d) — quase completando o L!\n", i);
        } else {
            printf("Cima (%d)\n", i);
        }
        movimentos++;

        // Loop interno com múltiplas variáveis e condição combinada
        for (int j = 1, k = 1; j <= casasDireita && k <= 2; j++, k++) {
            if (j == 2) {
                continue; // pular caso extra (nunca acontece aqui, mas demonstra controle de fluxo)
            }
            if (movimentos > 3) {
                break; // segurança contra loop infinito
            }
        }
    }

    // Movimento final do "L": uma casa para a direita
    for (int d = 1; d <= casasDireita; d++) {
        printf("Direita (%d)\n", d);
    }
}

int main() {
    // ===============================
    // Simulação do movimento das peças
    // ===============================

    // -------------------------------
    // TORRE (Recursividade)
    // -------------------------------
    int casasTorre = 5;
    printf("=== Movimento da TORRE ===\n");
    moverTorre(1, casasTorre);

    printf("\n");

    // -------------------------------
    // BISPO (Recursividade + Loops aninhados)
    // -------------------------------
    int casasBispo = 5;
    printf("=== Movimento do BISPO ===\n");
    moverBispo(1, casasBispo);

    printf("\n");

    // -------------------------------
    // RAINHA (Recursividade)
    // -------------------------------
    int casasRainha = 8;
    printf("=== Movimento da RAINHA ===\n");
    moverRainha(1, casasRainha);

    printf("\n");

    // -------------------------------
    // CAVALO (Loops complexos)
    // -------------------------------
    moverCavalo();

    printf("\n=== Fim da simulação ===\n");

    return 0;
}
