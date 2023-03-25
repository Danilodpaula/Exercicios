#include <stdio.h>
#include <stdlib.h>

double** alocarMatriz(int m, int n) {
    double** matriz = (double**)malloc(m * sizeof(double*));
    for (int i = 0; i < m; i++) {
        matriz[i] = (double*)malloc(n * sizeof(double));
    }
    return matriz;
}

void liberarMatriz(double** matriz, int m) {
    for (int i = 0; i < m; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

void lerMatriz(double** matriz, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Insira o elemento [%d][%d]: ", i, j);
            scanf("%lf", &matriz[i][j]);
        }
    }
}

void somarMatrizes(double** matrizA, double** matrizB, double** matrizSoma, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

void imprimirMatriz(double** matriz, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2lf ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n;

    printf("Insira as dimensoes das matrizes (m n): ");
    scanf("%d %d", &m, &n);

    double** matrizA = alocarMatriz(m, n);
    double** matrizB = alocarMatriz(m, n);
    double** matrizSoma = alocarMatriz(m, n);

    printf("\nInsira os elementos da matriz A:\n");
    lerMatriz(matrizA, m, n);

    printf("\nInsira os elementos da matriz B:\n");
    lerMatriz(matrizB, m, n);

    somarMatrizes(matrizA, matrizB, matrizSoma, m, n);

    printf("\nMatriz A:\n");
    imprimirMatriz(matrizA, m, n);

    printf("\nMatriz B:\n");
    imprimirMatriz(matrizB, m, n);

    printf("\nMatriz Soma:\n");
    imprimirMatriz(matrizSoma, m, n);

    liberarMatriz(matrizA, m);
    liberarMatriz(matrizB, m);
    liberarMatriz(matrizSoma, m);

    return 0;
}
