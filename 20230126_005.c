#include <stdio.h>

#define SIZE 5

int main() {
    int matriz[SIZE][SIZE];
    int i, j;

    // lê os valores da matriz
    printf("Digite os valores da matriz %dx%d:\n", SIZE, SIZE);
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("matriz[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Imprime a diagonal principal
    printf("Diagonal principal: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");

    // Imprime a diagonal secundária
    printf("Diagonal secundária: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", matriz[i][SIZE-i-1]);
    }
    printf("\n");

    // Calcula e imprime a soma da linha 4
    int somaLinha = 0;
    printf("Soma da linha 4: ");
    for (j = 0; j < SIZE; j++) {
        somaLinha += matriz[3][j];
    }
    printf("%d\n", somaLinha);

    // Calcula e imprime a soma da coluna 2
    int somaColuna = 0;
    printf("Soma da coluna 2: ");
    for (i = 0; i < SIZE; i++) {
        somaColuna += matriz[i][1];
    }
    printf("%d\n", somaColuna);

    // Imprime tudo, exceto a diagonal principal
    printf("Tudo, exceto a diagonal principal:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (i != j) {
                printf("%d ", matriz[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
