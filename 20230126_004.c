#include <stdio.h>

int busca_valor_matriz(int matriz[3][3], int x) {
    int i, j;

    // Procurando o valor x na matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] == x) {
                // Retornando a posição do valor x encontrado na matriz
                return i * 3 + j;
            }
        }
    }

    // Retornando -1 caso o valor x não seja encontrado na matriz
    return -1;
}

int main() {
    int matriz[3][3];
    int x;
    int i, j;
    int posicao;

    // Recebendo os valores da matriz do usuário
    printf("Forneça os valores da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Recebendo o valor de x do usuário
    printf("Forneça o valor de x: ");
    scanf("%d", &x);

    // Chama a função busca_valor_matriz para procurar o valor x na matriz
    posicao = busca_valor_matriz(matriz, x);

    // Verifica se o valor x foi encontrado na matriz
    if (posicao != -1) {
        printf("O valor %d foi encontrado na linha %d e coluna %d\n", x, posicao / 3, posicao % 3);
    } else {
        printf("O valor %d não foi encontrado na matriz\n", x);
    }

    return 0;
}
