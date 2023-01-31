#include <stdio.h>

void soma_matrizes(int n, int matriz1[n][n], int matriz2[n][n], int resultado[n][n]) {
    int i, j;

    // Efetuando a soma entre as duas matrizes e armazenando no resultado
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    // Imprimindo o resultado na tela
    printf("Resultado da soma entre duas matrizes %dx%d:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n = 3;
    int matriz1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matriz2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int resultado[3][3];

    soma_matrizes(n, matriz1, matriz2, resultado);

    return 0;
}
