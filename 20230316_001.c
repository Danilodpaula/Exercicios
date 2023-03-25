#include <stdio.h>
#include <stdlib.h>

int* lerVetor(int n) {
    int* vetor = (int*) malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }
    int i;
    for (i = 0; i < n; i++) {
        printf("Digite o elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    return vetor;
}

void encontrarMaiorEMenor(int* vetor, int n, int* maior, int* menor) {
    *maior = *menor = vetor[0];
    int i;
    for (i = 1; i < n; i++) {
        if (vetor[i] > *maior) {
            *maior = vetor[i];
        }
        if (vetor[i] < *menor) {
            *menor = vetor[i];
        }
    }
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int* vetor = lerVetor(n);

    int maior, menor;
    encontrarMaiorEMenor(vetor, n, &maior, &menor);

    printf("O maior valor do vetor eh %d e o menor valor eh %d.\n", maior, menor);

    free(vetor);

    return 0;
}
