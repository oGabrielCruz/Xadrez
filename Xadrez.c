#include <stdio.h>

// Função recursiva para movimentar a torre para a direita
void moverTorre(int casas) {
    if (casas == 0) return;
    moverTorre(casas - 1);
    printf("Direita\n");
}

// Função recursiva para movimentar a rainha para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    moverRainha(casas - 1);
    printf("Esquerda\n");
}

// Função recursiva para movimentar o bispo com apoio de loops aninhados
void moverBispo(int linhas, int colunas) {
    if (linhas == 0) return;
    moverBispo(linhas - 1, colunas);
    for (int i = 0; i < colunas; i++) {
        printf("Cima Direita\n");
    }
}

// Função para movimentar o cavalo: 2 para cima, 1 para direita ("L")
void moverCavalo() {
    int i, j;
    for (i = 2; i > 0; i--) {
        for (j = 1; j <= i; j++) {
            if (i == 1 && j == 1) {
                continue;  // pular uma iteração específica se quiser
            }
            printf("Cima\n");
        }
        break; // sair após as duas casas para cima
    }
    printf("Direita\n"); // uma casa para a direita
}

int main() {
    int casasTorre = 5;
    int casasRainha = 8;
    int linhasBispo = 5;
    int colunasBispo = 1; // 1 casa horizontal por linha para formar a diagonal

    printf("\n-MOVIMENTO TORRE-\n");
    moverTorre(casasTorre);

    printf("\n-MOVIMENTO BISPO-\n");
    moverBispo(linhasBispo, colunasBispo);

    printf("\n-MOVIMENTO RAINHA-\n");
    moverRainha(casasRainha);

    printf("\n-MOVIMENTO CAVALO-\n");
    moverCavalo();

    return 0;
}