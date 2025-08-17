#include <stdio.h>


void moverTorre(int casas) {
    if (casas <= 0) return; 
    printf("Baixo\n");
    moverTorre(casas - 1); 
}


void moverBispoRecursivo(int casas) {
    if (casas <= 0) return; 
    printf("Cima direita\n");
    moverBispoRecursivo(casas - 1);
}


void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverRainha(casas - 1);
}


void moverBispoLoops(int casas) {
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < casas; j++) {
            printf("Cima direita\n");
        }
    }
}


void moverCavalo(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < movimentos; j++) {
            if (i == 2 && j == 1) { 
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                break; // sai após formar o L
            }
            else {
                continue; 
            }
        }
    }
}


int main() {
    int casasTorre = 3;
    int casasBispo = 3;
    int casasRainha = 4;
    int movimentosCavalo = 3;

    printf("=== Torre ===\n");
    moverTorre(casasTorre);

    printf("\n=== Bispo (recursivo) ===\n");
    moverBispoRecursivo(casasBispo);

    printf("\n=== Bispo (loops aninhados) ===\n");
    moverBispoLoops(casasBispo);

    printf("\n=== Rainha ===\n");
    moverRainha(casasRainha);

    printf("\n=== Cavalo ===\n");
    moverCavalo(movimentosCavalo);

    return 0;
}