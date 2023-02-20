#include <stdio.h>
#include <stdlib.h>

void interseccao(int *A, int *B, int *C) {
    int i = 1, j = 1, k = 1;
    while (i <= A[0] && j <= B[0]) {
        if (A[i] < B[j]) {
            i++;
        } else if (B[j] < A[i]) {
            j++;
        } else {
            C[k] = A[i];
            i++;
            j++;
            k++;
        }
    }
    C[0] = k - 1;
}

int main() {
    int n, i, j, m;
    printf("Digite a quantidade de conjuntos: ");
    scanf("%d", &n);
    int *A = (int*) malloc(101 * sizeof(int));
    int *B = (int*) malloc(101 * sizeof(int));
    int *C = (int*) malloc(101 * sizeof(int));
    for (i = 1; i <= n; i++) {
        printf("Digite o tamanho do conjunto %d: ", i);
        scanf("%d", &A[0]);
        printf("Digite os elementos do conjunto %d: ", i);
        for (j = 1; j <= A[0]; j++) {
            scanf("%d", &A[j]);
        }
        if (i == 1) {
            for (m = 0; m <= A[0]; m++) {
                C[m] = A[m];
            }
        } else {
            interseccao(A, C, C);
        }
    }
    printf("Conjunto interseccao: ");
    for (i = 1; i <= C[0]; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");
    free(A);
    free(B);
    free(C);
    return 0;
}
