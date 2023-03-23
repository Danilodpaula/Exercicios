#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mediaDesvio(float* notas, int n, float* media, float* desvio) {
    float soma = 0.0, somaQuadrados = 0.0;
    for (int i = 0; i < n; i++) {
        soma += notas[i];
        somaQuadrados += notas[i] * notas[i];
    }
    *media = soma / n;
    *desvio = sqrt(somaQuadrados / n - (*media) * (*media));
}

int main() {
    int n;
    printf("Digite a quantidade de alunos na turma: ");
    scanf("%d", &n);

    float* notas = (float*) malloc(n * sizeof(float));
    if (notas == NULL) {
        printf("Erro: não foi possível alocar o vetor.\n");
        return 1;
    }

    printf("Digite as notas dos alunos:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &notas[i]);
    }

    float media, desvio;
    mediaDesvio(notas, n, &media, &desvio);

    printf("Média: %.2f\n", media);
    printf("Desvio padrão: %.2f\n", desvio);

    free(notas);

    return 0;
}
