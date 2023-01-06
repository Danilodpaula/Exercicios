#include <stdio.h>

void ler_dados(int *peso, int *semanas) {
    printf("Insira o peso do feto em gramas: ");
    scanf("%d", peso);
    printf("Insira o numero de semanas de gestacao: ");
    scanf("%d", semanas);
}

void calcular_recomendacao(int peso, int semanas) {
    if (peso < 100 || semanas < 28) {
        printf("Parto nao devera ser realizado, reavaliar clinicamente\n");
        return;
    }
    int meses = semanas / 4;
    if (peso > 2500 && meses > 7) {
        printf("Parto normal\n");
    } else if (peso > 2500 || meses <= 7) {
        printf("Parto Cesariana\n");
    } else if (peso >= 2000 && peso <= 1500 && meses > 9) {
        printf("Parto normal\n");
    } else {
        printf("Parto Cesariana\n");
    }
}

int main() {
    int peso, semanas;
    ler_dados(&peso, &semanas);
    calcular_recomendacao(peso, semanas);
    return 0;
}