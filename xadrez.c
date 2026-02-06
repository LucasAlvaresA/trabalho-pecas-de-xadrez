#include <stdio.h>

int main() {

    // =========================
    // Definição das quantidades de casas
    // =========================
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // =========================
    // MOVIMENTO DA TORRE (for)
    // =========================
    printf("Movimento da Torre:\n");

    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // =========================
    // MOVIMENTO DO BISPO (while)
    // =========================
    printf("\nMovimento do Bispo:\n");

    int contadorBispo = 0;
    while (contadorBispo < casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    // =========================
    // MOVIMENTO DA RAINHA (do-while)
    // =========================
    printf("\nMovimento da Rainha:\n");

    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    // ======================================================
    // MOVIMENTO DO CAVALO (loops aninhados: for + while)
    // O cavalo se move em "L": 2 casas para baixo e 1 esquerda
    // ======================================================
    printf("\nMovimento do Cavalo:\n");

    int casasBaixo = 2;
    int casasEsquerda = 1;

    // Loop externo (for) -> controla as duas casas para baixo
    for (int i = 0; i < casasBaixo; i++) {
        printf("Baixo\n");
    }

    // Loop interno (while) -> controla a casa para a esquerda
    int contadorEsquerda = 0;
    while (contadorEsquerda < casasEsquerda) {
        printf("Esquerda\n");
        contadorEsquerda++;
    }

    return 0;
}
