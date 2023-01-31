#include <stdio.h>

void multiplica_matriz_escalar(int matriz[3][3], int k) {
    int i, j;

    // Multiplicando cada elemento da matriz pelo escalar k
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz[i][j] *= k;
        }
    }

    // Imprimindo o resultado na tela
    printf("Resultado da multiplicação da matriz 3x3 por %d:\n", k);
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[3][3];
    int k;
    int i, j;

    // Recebendo os valores da matriz do usuário
    printf("Forneça os valores da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Recebendo o valor de k do usuário
    printf("Forneça o valor de k: ");
    scanf("%d", &k);

    multiplica_matriz_escalar(matriz, k);

    return 0;
}
