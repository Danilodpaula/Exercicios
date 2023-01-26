#include <stdio.h>

// Função para calcular o produto escalar de dois vetores
int produto_escalar(int x[], int y[], int n) {
    int resultado = 0;

    for (int i = 0; i < n; i++) {
        resultado += x[i] * y[i];
    }

    return resultado;
}

int main() {
    int n, x[100], y[100];

    printf("Insira o tamanho dos vetores (n): ");
    scanf("%d", &n);

    printf("Insira os elementos do vetor x: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    printf("Insira os elementos do vetor y: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &y[i]);
    }

    int resultado = produto_escalar(x, y, n);
    printf("O produto escalar de x e y é: %d\n", resultado);

    return 0;
}