#include <stdio.h>
#include <stdlib.h>

int main() {
    int m = 2, n = 3;

    // Alocando a matriz dinamicamente
    int** matriz = (int**) malloc(m * sizeof(int*));
    if (matriz == NULL) {
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }
    int i, j;
    for (i = 0; i < m; i++) {
        matriz[i] = (int*) malloc(n * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro ao alocar memoria.\n");
            exit(1);
        }
    }

    // Preenchendo a matriz
    int valor = 1;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            matriz[i][j] = valor++;
        }
    }

    // Imprimindo a matriz com aritmética de ponteiros
    int* p = *matriz;
    for (i = 0; i < m*n; i++) {
        printf("%d ", *(p+i));
        if ((i+1) % n == 0) {
            printf("\n");
        }
    }

    // Imprimindo a matriz com índices
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Liberando a memória alocada
    for (i = 0; i < m; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
